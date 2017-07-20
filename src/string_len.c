#include <stdio.h>

//string length calculation 
size_t strlen(char *s){
	char *p = s;
	int len = 0;
	while(*p != '\0'){
		++p;
		len++;
	}
	return len;
}

int prod(int a, int b){
	return a * b ;
}

//added extra function
int addition(int a, int b){
	return a+b;

}

//subtract two numbers
int sub(int a, int b){
	return a-b;
}
//main method here
int main(void){
	int i;
	char *s[] = {"Git tutorials", "Tutorials Point"};
	for(i = 0; i < 2; i++ ){
		printf("Length of %s is %lu\n",s[i],strlen(s[i]));
	}

}
