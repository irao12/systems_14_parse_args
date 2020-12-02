#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args ( char * line ){
	char *token, *p;
	p = line;
	int counter = 0;
	char **a = malloc(6);
	while (p != NULL){
		token = strsep(&p, " ");
		a[counter] = token;
		counter++;
	}
	return a;
}

int main(){
	char ** args = parse_args("ls -a -l");
	return 0;
}
