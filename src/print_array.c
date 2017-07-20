#include <stdio.h>

int main(void){
	int arr[10]={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for(int i = 0 ; i < 9; i++){
		printf("%d",arr[i]);
	}
	//printing array in reverse order
	int i = 10;
	while(--i){
		printf("%d",arr[i]);
	}
	return 0;
}
//just adding to create a pull request from new to master branch
