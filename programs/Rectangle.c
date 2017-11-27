//
//  Test.c
//  programs
//
//  Created by Arnab Sen on 25/01/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,x,y;
    printf("Enter the value of one side \n");
    scanf("%d", &a);
    printf("Enter the value of another side \n");
    scanf("%d", &b);
    x=((a+b)*2);
    y=a*b;
    printf("perimeter=%d \n",x);
    printf("Area=%d",y);
    
    
    
}