//
//  functionprotype.c
//  programs
//
//  Created by Arnab Sen on 16/03/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int fact(int n);

int main()
{
    int a,fac=1;
    
    printf("enter Value of a \n");
    scanf("%d",&a);
    fac=fact(a);
    printf("%d \n",fac);
}
int fact(int n)
{
    if(n<=1) return 1;
    else
    return (n*fact(n-1));
    
}