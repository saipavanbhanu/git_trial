#include <stdio.h>

int strlen(char *s){
	char *p = s;
	int len = 0;
	while(*p != '\0'){
		++p;
		len++;
	}
	return len;
}

int main(void){
	int i;
	char *s[] = {"Git tutorials", "Tutorials Point"};
	for(i = 0; i < 2; i++ ){
		printf("Length of %s is %d\n",s[i],strlen(s[i]));
	}

}
