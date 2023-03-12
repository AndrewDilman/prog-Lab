#include <stdio.h>
#include <stdlib.h>

void init(int **arr, int n){//обозначил двойной указатель
	*arr = malloc(n * sizeof(int));//работа с указателем
	int i;
	for (i = 0; i < n; ++i){
		(*arr)[i] = i;//присваиваю значение по адресу
	}
}

int main(){
	int* arr = NULL;
	int n = 10;
	init(&arr, n);//добавил амперсант
	int i;

	for (i = 0; i < n; ++i){
		printf("%d\n", arr[i]);
	}
	return 0;
}
