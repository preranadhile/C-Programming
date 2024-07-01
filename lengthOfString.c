#include<stdio.h>

int main(void)
{
	char str[100];
	int length=0;

	printf("Enter a String : \n");
	scanf("%s",str);

	for(int i=0;str[i]!='\0';i++)
	{
		length++;
    		//printf("\n Length of input string : %d",length);
		//ouput: 
          //Length of input string : 1
          //Length of input string : 2
 //Length of input string : 3
 //Length of input string : 4
 //Length of input string : 5
 //Length of input string : 6
 //Length of input string : 7%  
	}

	printf("\n Length of input string : %d",length);//output will be 7 
	return 0;


}
