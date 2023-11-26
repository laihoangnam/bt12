#include <stdio.h>
#include<stdlib.h>
int sum(int a, int b){
	return a+b;
}
void printSum(int sum1, int sum2, int sum3){
	printf("tong cua a va b la: %d\n",sum1);
	printf("tong cua b va c la:%d\n",sum2);
	printf("tong cua a va c la:%d\n",sum3);
}
int main(){
    int a,b,c;
    printf("Nhap 3 so a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
	int sum1 = sum(a,b);
	int sum2 = sum(b,c);
	int sum3 = sum(a,c);
	printSum(sum1,sum2,sum3);
    return 0;
}
