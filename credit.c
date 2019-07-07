#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    int m=15,i=0,j=0,*evenplaces,*oddplaces;
    char *number;
    
    number=(char*)calloc(1000000,sizeof(char));
    evenplaces=(int*)calloc(8,sizeof(int));
    oddplaces=(int*)calloc(8,sizeof(int));
    
    // get credit card number from user
    printf("Number : ");
    scanf("%s",number);
    
    
    //eliminate test cases on the basus of length
    if(strlen(number)!=16 && strlen(number)!=13 && strlen(number)!=15)
    {
        printf("INVALID");
        return 0;
       
     }
    
    
    //eliminate test cases by checking each char
    //implememting Luhn's algorithm
    
    
    while(m!=-1)
    {
        if(number[m]<48 && number[m]>57)
        {
            printf("INVALID");
            return 0;
        }
        else
        {
           if(m%2==0) 
           {
               oddplaces[i]=number[m]-48;
               i++;
           }
            else
            {
                evenplaces[j]=number[m]-48;
                j++;
            }
            m--;
        }
    }
    
    
    
    int sum1,sum2=0,sum3=0,firstdig,secdig,sumfinal;
    for(i=0;i<8;i++)
    {
        sum1=oddplaces[i]*2;
        
          secdig=sum1%10;
            firstdig=sum1/10;
            sum2 += firstdig + secdig ;
           sum3 += evenplaces[i];
     }
    sumfinal=sum2 + sum3;
    
    
    //validating the number entered by user
    //output whether card number is invalid or not
    
    
    if(sumfinal%10==0)
    {
        if(oddplaces[7]==3 && (evenplaces[7]==4 || evenplaces[7]==7))
        {
            printf("American Express");
        }
            
    
       else if((oddplaces[7]==5) && (evenplaces[7]==1 || evenplaces[7]==2 || evenplaces[7]==3 ||                             evenplaces[7]==4 || evenplaces[7]==5))
       {
           printf("MasterCard");
       }
       else if(oddplaces[7]==4)
       {
         printf("VISA");
       }
       else
       {
         printf("INVALID");
       }
   }
   else
   {
         printf("INVALID");
   }
   
   return 0;
}
