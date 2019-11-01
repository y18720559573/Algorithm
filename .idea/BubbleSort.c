//头文件
#include <stdio.h> 
#include <stdlib.h>
 
//自定义类型
typedef int ElemType;
 
//函数声明
void BubbleSort(ElemType *, int);
 
//主函数，程序入口
int main(void) {
	int a[8] = {9, 12, 4, 0, 7, 21, 3, 5};
	BubbleSort(a, 8);
	int i;
	for (i = 0; i < 8; ++i) {
		printf("%d  ", a[i]);
	}
	
	return EXIT_SUCCESS;
}
 
void BubbleSort(ElemType *a, int n) {
	int flag = 1;
	int i;
	int j;
	int temp;
	for (i = 0; i < n - 1 && flag; ++i) {
		flag = 0;
		for (j = 0; j < n - 1 - i; ++j) {
			if (a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = 1;
			}
		}
	}
}