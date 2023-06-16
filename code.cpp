#include <iostream>
#include <string.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void reverse_string(char *s);
void swap(char& a,char& b);

int main()
{
	/*  || \ */


	char s[] = "null-terminated string";

	reverse_string(s);
	printf("%s",s);

	return 0;
}

void swap(char& a,char& b){
	char temp = a;
	a = b;
	b = temp;
}

void reverse_string(char* s){

	int l = strlen(s);//return the size of the string,does not count the null character

	int low = 0;
	int high = l-1;

	while(true){
		if(low >= high){
			break;
		}
		swap(s[low],s[high]);
		low++;
		high--;

	}



}
