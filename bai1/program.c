#include <stdio.h>
#include "lib.h"
int main ()
{
	int a, b;printf("Nhap vào a : " );
	scanf("%d", &a);
	printf("Nhap vào b : " );
	scanf("%d", &b);printf("Tổng %d + %d = %d\n", a, b, cong(a, b));
	printf("Tich %d * %d = %ld\n", a, b, nhan(a, b));
	return (0);
}
