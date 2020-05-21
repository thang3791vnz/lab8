#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 0;
	int n = 0;
	char vanban[100];
	printf("\nNhap vao van ban: ");
	scanf("%s", vanban);
	while(vanban[i] != '\0')
	{
		if(vanban[i] == 'a' || vanban[i] == 'i' || vanban[i] == 'e' || vanban[i] == 'u' || vanban[i] == 'o')
		n++;
		i++;
	}
	printf("So luong nguyen am: %d", n);
	getch();
}
