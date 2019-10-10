#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFLEN 2048

#define FILENAME "PE-1.txt"
#define CONTENTS "I want to learn PE file format!"
#define WIN_ROOT "C:\\"
#define UNIX_ROOT "/"

bool file_contains(char* filepath, char* str){
	FILE* file = fopen(filepath, "r");
	int len = strlen(str);
	int count = 0;
	char current;
	while((current = fgetc(file))!= EOF){
		if(current == str[count]){
			count++;
			if(count == len){
				return true;
			}
		} else {
			count = 0;
		}
	}
	fclose(file);
	return false;
}

void print_file(char* filepath){
	FILE* file = fopen(filepath, "r");
	char current;
	while((current = fgetc(file))!= EOF){
		printf("%c", current);
	}
	fclose(file);
}

int main(void){
	char* root = WIN_ROOT;	
	char filepath[strlen(FILENAME)+strlen(root)+1];
	sprintf(filepath, "%s%s", root, FILENAME);
	
	FILE* PE;
    if(access(filepath, F_OK) == -1){
        PE = fopen(filepath, "w");
        fprintf(PE,"%s", CONTENTS);
    } else {
		bool contains = file_contains(filepath, CONTENTS);
		if(!contains) {
			PE = fopen(filepath, "a+");
			fprintf(PE, "%s", CONTENTS);
		} else {
			print_file(filepath);
		}
    }
	fclose(PE);
}

