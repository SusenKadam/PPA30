#include<stdio.h>

//////////////////////////////////
//Write a program to perform the addition of 2 numbers
//////////////////////////////////

int main()
{
    int iNo1=0;
    int iNo2=0;
    int iNo3=0;

    printf("Enter first number\n");
    scanf("%d",&iNo1);

     printf("Enter second number\n");
    scanf("%d",&iNo2);

    iNo3=Addition(iNo1,&iNo2);
    printf("Addition is : %\n",iNo3);

    return 0;

 };


/////////////////////////////
//Input:   11   10
//Output:  21
/////////////////////////////