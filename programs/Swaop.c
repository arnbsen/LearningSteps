//
//  Swaop.c
//  programs
//
//  Created by Arnab Sen on 29/01/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter one value= \n");
    scanf("%d",&a);
    printf("Enter another value= \n");
    scanf("%d",&b);
    c=a;
    d=b;
    b=c;
    a=d;
    printf("a with intermediate variable=%d \n",a);
    printf("b with intermediate variable=%d \n",b);
    
}