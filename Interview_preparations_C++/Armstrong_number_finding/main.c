#include<stdio.h>

//returns the value of x^y
int getPow(int x, int y) 
{
if(y==0)
return 1;
if(y==1)
return x;
else
return x*getPow(x, (y-1));
}

//returns how many digits are there in the int argument
int getDig(int y) 
{
    int num = 0;
    while(y>0)
    {
        y=y/10;
        num++;
    }
    return num;

}

//The following function returns the sum total of each digit's raised to the power of the number of the digits in the input
int getSum(int s) 
{
   int sum =0, digit, mod, temp;
   temp=s; 
   digit = getDig(s); //get number of digits
   while(temp>0)
    {
       mod=temp % 10;
       sum += getPow(mod, digit); //returns mod^digit
       temp=temp/10;
    }
return sum;
}

//driver function
int main()
{
int num, sum;
printf("Enter a value to check if there are some Armstrong value starting from 0:");
scanf("%d", &num);
//checks from 0 to num for armstrong values
for(i= 0; i<num;i++)
{
    sum = getSum(i); //get sum total of each digit's raised to the power of number of digits in i
    if(sum==i)
    printf("\n%d is an Armstrong number.", i);
}
return 0;
}
