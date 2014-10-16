/*
 * test.c
 *
 *  Created on: Oct 15, 2014
 *      Author: yaman
 */
#include <stdio.h>;
#include <stdlib.h>;
int main(int argc, char** argv)
{
FILE *fp;
fp=fopen("/word1.txt","r");
if(fp!=NULL){
	printf("what's wrong?");
	return 0;
}
char c=fgetc(fp);
printf("%c",c);
fprintf(fp,"testing this\n");
printf("hey stupid\n");
return 1;
}

