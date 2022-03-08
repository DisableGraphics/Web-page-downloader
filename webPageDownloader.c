#include <stdio.h>
#include <string.h>

/*English is not my main language. If you notice something wrong, please modify it. It's everyone's code ;)*/

char url[1024];
char command[1111];

int main(void){
    /*The url to be downloaded and the number of web pages directly related to be downloaded*/
	printf("Please enter the name of the webpage you want to download\n");
	scanf("%s\n", url);
	/*Sorry for this last line, Geany IDE doesn't like to printf in two lines*/    

    /*Concatenate the strings*/
	/*Now it will download better than before*/
	strcpy(command, "wget -m -F -p -np -k -erobots=off -U mozilla --limit-rate=50K --wait=2 --html-extension ");
        strcat(command, url);

	system(command);
}
