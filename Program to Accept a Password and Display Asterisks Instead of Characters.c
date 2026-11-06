#include <stdio.h>
int main()
{
	char password[100],temp;
	int i=0;
	printf("enter password:");
	while((temp=getch())!='\r')
	{
		password[i]=temp;
		i++;
		printf("*");	
	}
	password[i]='\0';
	printf("\n%s",password);
	return 0;
}
