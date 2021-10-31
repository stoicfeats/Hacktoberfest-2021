#include<stdio.h>  


 int main()    
{    
int number,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&number);    
temp=number;    
while(number>0)    
{    
r=number%10;    
sum=sum+(r*r*r);    
number=number/10;    
}    
if(temp==sum)    
printf(number +" is an armstrong  number ");    
else    
printf(number + " is not an armstrong number");    
return 0;  
}   
