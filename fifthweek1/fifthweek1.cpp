#include<stdio.h>
#include<conio.h>
void merryXmas(void)
{
	int x, y, z,n,space, check = 0;
	printf("Enter the height : ");
	scanf_s("%d", &n);
	space = n - 1;
	for (x = 1; x <= 2*n-1; x+=2)
	{
		for (y = 1; y <= x; y++)
		{
			if (check == 0)
			{
				for (z = 1; z <= space; z++)
				{
					printf(" ");
				}
				printf("*");
				check = 1;
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
		
		space--;
		check = 0;
	}
	
}
int main() 
{
	merryXmas();
	return 0;
}