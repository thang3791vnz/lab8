#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int i, a, b;
	a = ary[0];
	for(i = 1; i < 10; i++)
	{
		if(a < ary[i])
		a = ary[i];
	}
	{
		if(b > ary[i])
		b = ary[i];
	}
	printf("\nSo lon nhat cua mang la: %d", a);
	printf("\nPhan tu nho nhat cua mang la: %d", b);
	return 0;
}
