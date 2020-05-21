#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char vanban[100];
	int i = 0;
	int a = 0;
	int b = 0;
	printf("\nNhap vao van ban: ");
	scanf("%s", vanban);
	while(vanban[i++] != '\0')
	{
		if(vanban[i] == 'a' || vanban[i] == 'e' || vanban[i] == 'i' || vanban[i] == 'o' || vanban[i] == 'u')
		a++;
		b++;
	}
	printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", vanban, a, b);
	return 0;
}
