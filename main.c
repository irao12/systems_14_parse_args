#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args ( char * line ){
	char **returnval = malloc(sizeof(char *) * 6);
	int i = 0;
	char *token;
	char *curr = line;
	while (curr != NULL){
		token = strsep(&curr, " ");
		returnval[i] = token;
		i += 1;
	}
	returnval[i] = NULL;

	return returnval;
}

int main(){
	char ** arguments = parse_args("ls -a -l");
	return 0;
}
