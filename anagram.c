#include <stdio.h>
#include <string.h>
void main()
{
	char str1[11]="bac",str2[21]="abc";
	int c,i,j;
	if (strlen(str1)!=strlen(str2))
	{
		printf("Not anagram");
	}
	else{
		for(i=0;str1[i]!='\0';i++){
			c=0;
			for (j=0;str2[j]!='\0';j++)
			{
				if (str1[i]==str2[j]){
					c=1;
					break;
				}
			}
		}
		if (c==1){
			printf("yes,it's anagram");
		}
		else{
			printf("no it's not anagram'");
		}
	}
}
