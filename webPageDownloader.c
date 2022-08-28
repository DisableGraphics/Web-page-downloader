#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*English is not my main language. If you notice something wrong, please modify it. It's everyone's code ;)*/

char url[1024];
char command[1111];

int main(int argc, char** argv)
{
	if(argc > 1){ 	
		/*If there are arguments, no need to scanf the web page to download*/
		strcpy(command, "wget -m -F -p -np -k -erobots=off -U mozilla --limit-rate=50K --wait=2 --html-extension ");
		strcpy(argv[1], url);
		strcat(command, url);
	}
	else{
		/*The url to be downloaded and the number of web pages directly related to be downloaded*/
		printf("Please enter the name of the webpage you want to download\n");
		scanf("%s", url);

		
		/*Concatenate the strings*/
		strcpy(command, "wget -m -F -p -np -k -erobots=off -U mozilla --limit-rate=50K --wait=2 --html-extension ");/*Now it will download better than before, since it had a rather basic command*/
		strcat(command, url);
	}

	system(command); /*Execute the command to download the page*/
}
