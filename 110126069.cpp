#include <stdio.h>

int main()
{
	float a,b;
	printf("Nhap so nguyen to a: ");
	scanf("%f",&a);
	
	printf("Nhap so nguyen to b: ");
	scanf("%f",&b);
	
	float tong, tich, hieu, thuong;
	
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	thuong=a/b;
	
	printf("\n\nTong = %.2f", tong);
	printf("\nHieu = %.2f", hieu);
	printf("\nTich = %.2f", tich);
	printf("\nThuong = %.2f", thuong);
	
	return 0;
}