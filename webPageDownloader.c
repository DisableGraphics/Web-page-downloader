#include <stdio.h>
#include <string.h>

/*English is not my main language. If you notice something wrong, please modify it. It's everyone's code ;)*/

char url[1024];
char command[1043];
char hyperlinks[3];

int main(void){
    /*The url to be downloaded and the number of web pages directly related to be downloaded*/
	printf("Please enter the name of the webpage you want to download\n");
	scanf("%s\n", url);
	printf("Enter the number of web pages directly related to the web page to be downloaded (enter a number between 0 and 999. if you want all the related web pages, type 'inf' without the quotes\n");
	/*Sorry for this last line, Geany IDE doesn't like to printf in two lines*/    
	scanf("%s\n", hyperlinks);

    /*Concatenate the strings*/
	strcpy(command, "wget -r -l ");
        strcat(command, hyperlinks);
        strcat(command, " ");
        strcat(command, url);

	system(command);
}
