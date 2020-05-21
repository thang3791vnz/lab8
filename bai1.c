#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j;
	char name[7][10];
	char temp[10][20];
	printf("\nNhap 7 ten: \n");
	for(i = 0; i < 7; i++)
	scanf("%s", name[i]);
	for(i = 1; i < 7; i++)
	{
		for(j = 1; j < 7; j++)
		{
			if(strcmp(name[j - 1], name[j]) > 0)
			{
				strcpy(temp, name[j - 1]);
				strcpy(name[j - 1], name[j]);
				strcpy(name[j], temp);
			}
		}
	}
	printf("\nCac ten duoc sap xep theo thu tu abc la: ");
	for(i = 0; i < 6; i++)
	printf("\n%s", name[i]);
	return 0;
}
