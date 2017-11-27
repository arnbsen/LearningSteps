//
//  aslib.h
//  programs
//
//  Created by Arnab Sen on 14/03/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#ifndef Header_h
#define Header_h


#endif /* Header_h */
#include<stdio.h>
int max(int a,int b)
{
    int max;
    max=a>b?a:b;
    return max;
}
int min(int a,int b)
{
    int min;
    min=a<b?a:b;
    return min;
}
void factorial(int n)
{
    int i,fact=1;
    if (n>1) {
        for (i=1; i<=n; i++) {
            fact*=i;
        }
        printf("Void %d",fact);
    }
    
    else if(n==1){printf(" Void %d",n);}
    else printf(" Void Not possible. Invalid input");
}
int fact(int n)
{
    int i,fact=1;
    if (n>1) {
        for (i=1; i<=n; i++) {
            fact*=i;
        }
        return fact;
    }
    
    else if(n==1) return n;
    else return printf("Not Possible. Invalid input");
}
void sum(a,b)
{
    int sum=0;
    sum=a+b;
    printf("%d",sum);
}
void sub(a,b)
{
    int sub=0;
    sub=a-b;
    printf("%d",sub);
}
void swap(a,b)
{
   
    a=a+b;
    b=a-b;
    a=a-b;
    printf("First element %d \n Second element %d",a,b);
}
