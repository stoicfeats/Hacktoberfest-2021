#include<stdio.h>
#include<math.h>
#include<string.h>

void decimaltobase()
{
char a[10];
int n,t,i=0,p,base;
printf("enter a decimal number:\n");
scanf("%d",&n);
printf(" Enter base:\n");
scanf("%d",&base);
while(n!=0)
  {
   t=n%base;
   if(t>9)
   a[i]=t+55;
   else
     a[i]=t+48;
   
   n=n/base;
   i++;
  }
 p=i;
 printf(" number corresponding to this base is:");
 for(i=p-1;i>=0;i--)
printf("%c",a[i]);
}


void basetodecimal()
{
    char a[17];
    int decimal=0,i=0,len,val,base;
    printf("enter base:");
    scanf("%d",&base);
    printf("Enter number of that base:\n ");
    scanf("%s",a);
    len = strlen(a);
    len--;

    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]>='0' && a[i]<='9')
            val = a[i] - 48;
        else if(a[i]>='A' && a[i]<='F')
            val = a[i] - 65+ 10;
        decimal=decimal+(val * pow(base, len));
        len--;
    }
    printf("Decimal number = %d", decimal);
}

void binarytooctal()
{
    int q,o=0,p=0,i=0,n;
      printf("enter the binary number to convert in octal\n");
      scanf("%d",&n);
          while(n!=0)
          {
              q=n%10;
              n=n/10;
              p =p + q*pow(2,i);
              i++;
          }

            i=1;
          while(p!=0)
          {
            o=o + ((p%8) * i);
            p=p/8;
            i=i*10;  
          }
          printf("the octal conversion is :  %d\n",o);
}

void binarytohexa()
{
  int q,p=0,i=0,n,s,j;
  char a[20];
      printf("enter the binary number to convert to hexadecimal\n");
      scanf("%d",&n);

          while(n!=0)
          {
              q=n%10;
              n/=10;
              p += q*pow(2,i);
              i++;
          }
         while(p!=0)
          {
           s=p%16;

           if(s<10)
           a[i]=48 +s;
           else
           a[i]=55 +s;
        
           p=p/16;
           i++;
          }
        i--;
        printf("the hexadecimal num is:");
        for(j=i;j>=0;j--)
        printf("%c",a[j]);
}

void octaltobinary()
{
     int n,p=0,i=0,q,s,j,a[20],k=0;
     printf("enter the octal number to convert to binary\n");
     scanf("%d",&n);
          while(n!=0)
          {
              q=n%10;
              n=n/10;
              p =p + (q * pow(8,i));
              ++i;
          }
           while(p>1)
          {
           s=p%2;
           a[k]=s;
           p=p/2;
           k++;
          }
        a[k]=1;
        printf("the binary num is:");
        for(j=k;j>=0;j--)
        printf("%d",a[j]);
}

void octaltohexa()
{
     int n,p=0,i=0,q,s,j,k=0;
     char a[20];
     printf("enter the octal number to convert in hexadecimal\n");
     scanf("%d",&n);

          while(n!=0)
          {
              q=n%10;
              n=n/10;
              p =p + (q * pow(8,i));
              ++i;
          }
           while(p!=0)
          {
           s=p%16;

           if(s<10)
           a[k]=48 +s;
           else
           a[k]=55 +s;
        
           p=p/16;
           k++;
          }
        k--;
        printf("the hexadecimal number is:");
        for(j=k;j>=0;j--)
        printf("%c",a[j]);
}

void hexatobinary()
{
    char a[17];
    long long p;
    int i = 0, val, len,s,j,a1[20],k=0;
    p = 0;
    
    printf("Enter any hexadecimal number to convert into binary \n");
    scanf("%s",a);
    len = strlen(a);
    len--;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0' && a[i]<='9')
            val = a[i] - 48;
        else if(a[i]>='A' && a[i]<='F')
            val = a[i] - 65 + 10;

        p=p+val * pow(16, len);
        len--;
    }
    while(p>1)
     {
           s=p%2;
           a1[k]=s;
           p=p/2;
           k++;
     }
        a1[k]=1;
        printf("the binary number is:");
        for(j=k;j>=0;j--)
        printf("%d",a1[j]);
}

void hexatooctal()
{
    char hex[17];
    long long p;
    int i = 0, val, len,s,j,a[20],k=0;
     p = 0;

    printf("Enter any hexadecimal number to convert into octal \n");
    scanf("%s",hex);
    len = strlen(hex);
    len--;
    for(i=0; hex[i]!='\0'; i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
            val = hex[i] - 48;
        else if(hex[i]>='A' && hex[i]<='F')
            val = hex[i] - 65 + 10;

        p += val * pow(16, len);
        len--;
    }
     while(p>1)
        {
           s=p%8;
           a[k]=s;
           p=p/8;
           k++;
        }
        k--;
        printf("the octal number is:");
        for(j=k;j>=0;j--)
        printf("%d",a[j]);
}

int main()
{  
    int a;
   printf("..........NUMBER CONVERSION SYSTEM............\n");
   printf("to convert decimal to any base enter 1\n");
   printf("to convert any base to decimal enter 2\n");
   printf("to convert  binary to octal enter 3\n");
   printf("to convert  binary to hexa decimal enter 4\n");
   printf("to convert octal to binary enter 5\n");
   printf("to convert octal to hexadecimal enter 6\n");
   printf("to convert hexadecimal to binary enter 7\n");
   printf("to convert hexadecimal to octal enter 8\n");

 scanf("%d",&a);

    switch(a)
  {
   case 1:
   decimaltobase();
   break;
    case 2:
   basetodecimal();
   break;
   case 3:
   binarytooctal();
   break;
    case 4:
   binarytohexa();
   break;
    case 5:
   octaltobinary();
   break;
    case 6:
   octaltohexa();
   break;
    case 7:
   hexatobinary();
   break;
    case 8:
   hexatooctal();
   break;
  }

return 0;
}
