#include <stdio.h>
#include <stdlib.h>

int product(int a, int b) {
    return a * b;
}
int quotient(int a, int b) {
	if(b==0){
		printf("khong the thuc hien phep chia cho 0\n");
		printf("vui long nhap a,b,c khac 0\n");
		return 0;
	}
    return a / b;
}
void printResult(int result) {
    printf("tich, thuong: %d\n", result);
}
int main() {
    int a, b, c;
    printf("nhap 3 so a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    int product1 = product(a, b);
    int quotient1 = quotient(a, b);
    int quotient11 = quotient(b,a);
    if(a>b&&a%b==0&&b!=0){
   		printf("tich va thuong cua a va b la:%d;%d\n",product1,quotient1);
	}else if(a<b&&b%a==0&&a!=0){
		printf("tich va thuong cua a va b la:%d;%d\n",product1,quotient11);
	}else{
		printf("tich cua a va b la:%d\n",product1);
		printf("%d khong chia het cho %d\n",b,a);
	}
    int product2 = product(b, c);
    int quotient2 = quotient(b, c);
    int quotient22 = quotient(c,b);
    if(b>c&&b%c==0&&c!=0){
    	printf("tich va thuong cua b va c la:%d;%d\n",product2,quotient2);
    }else if(b<c&&c%b==0&&b!=0){
    	printf("tich va thuong cua b va c la:%d;%d\n",product2,quotient22);
	}else {
		printf("tich cua b va c la:%d\n",product2);
		printf("%d khong chia het cho %d\n",c,b);
	}
    int product3 = product(a, c);
    int quotient3 = quotient(a, c);
    int quotient33 = quotient(c,a);
    if(a>c&&a%c==0&&c!=0){
		printf("tich va thuong cua a va c la:%d;%d\n",product3,quotient3);
	}else if(a<c&&c%a==0&&a!=0){
		printf("tich va thuong cua a va c la:%d;%d\n",product3,quotient33);	
	}else{
		printf("tich cua a va c la:%d\n",product3);
		printf("%d khong chia het cho %d\n",c,a);
	}
    return 0;
}

