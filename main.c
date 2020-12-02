#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args ( char * line ){
	char **a = malloc(sizeof(char *) * 6);
	char *token, *p;
	int counter = 0;
	p = line;
	while (p){
		token = strsep(&p, " "); 
		a[counter] = token;
		counter++;
	}
	return a;
}

int main(){
	char line[] = "ls -a -l";
	char ** args = parse_args(line);
	execvp(args[0], args);
	return 0;
}
