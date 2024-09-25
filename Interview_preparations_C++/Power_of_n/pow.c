#include<stdio.h>

int getPow(int x, int y) //returns power of x^y
{
if(y==0)
return 1;
if(y==1)
return x;
else
return x*getPow(x, (--y));
}



int getDig(int y) //returns how many digits are there in the int argument
{
    int num = 0;
    while(y>0)

    {
        y=y/10;
        num++;

    }
    return num;

}
int getSum(int s) //returns the sum of each digit's raised to the power of the number of the digits in the input
{
   int x =0, k, p, t;
   t=s;
   k = getDig(s);
   while(t>0)
    {
       p=t%10;
       x +=getPow(p, k);
       t=t/10;

    }
return x;
}

int main()
{
int n, i, sum;
printf("Enter a value to check if there are some Armstrong value starting from 0:");
scanf("%d", &n);
for(i= 0; i<n;i++)
{
    sum = getSum(i);
    if(sum==i)
        printf("\n%d is an Armstrong number.", i);


}
return 0;
}
