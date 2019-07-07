#include <cs50.h>
#include <stdio.h>
#include<string.h>
int main(void)
{   
    char notreqheight[1000000];
    int t=1,i,j,k,m=0,height;
    printf("height : ");
    scanf("%s",notreqheight);   //take input for height 
    
    //prompt the user to enter the correct height
    //until they cooperate
    
    //checking for a single character
    while(strlen(notreqheight)!=1)  
    {
        printf("height : ");
        scanf("%s",notreqheight);
        
    }
    
    //prompt the user if char is not an integer between 1 and 8
    while(notreqheight[0]>=57 || notreqheight[0]<=48)  
    {
        printf("height : ");
        scanf("%s",notreqheight);
        
    }
    
    //convert the value of height from char to int
    height=notreqheight[0]-48;
    
    //run main loop for steps
    for(i=1;i<=height;i++)
    {
        for(j=1;j<=height-t;j++)
            printf(" ");
        
        
        while(m!=2)
        {
            for(k=1;k<=t;k++)
            printf("#");
            printf(" ");
            printf(" ");
            m++;
        }
        printf("\n");
        m=0;
        t++;

    }
    return 0;
}
