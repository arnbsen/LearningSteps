//
//  hcf.c
//  programs
//
//  Created by Arnab Sen on 19/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  Initialise variable before entering a loop

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,j,l=1,x;
    printf("Enter the value one number \n");
    scanf("%d",&a);
    printf("Enter another other number \n");
    scanf("%d",&b);
    i=a>b?a:b;
    j=a<b?a:b;
    while (l!=0){
        l=i%j;i=j;j=l;}
    printf("GCD/HCF of entered numbers is %d \n",i);
}
