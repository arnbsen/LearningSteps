//
//  greaterofnnumbers.c
//  programs
//
//  Created by Arnab Sen on 08/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  Sucessfully running for all numbers.

#include <stdio.h>
int main()
{
    int a,b,i,j;
    int x[100000];
    
    printf("Enter the number of numbers you want to Enter\n");
    scanf("%d",&b);
    while (i<=b-1) {
        printf("Enter a decimal value \n");
        scanf("%d",&x[i]);i++;
    }
    a=x[0]>x[1]?x[0]:x[1];
    for (j=2; j<=b-1; j++) {
        a=a>x[j]?a:x[j];
    }
    printf("%d \n",a);
    
}