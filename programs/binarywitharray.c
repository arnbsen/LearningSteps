//
//  binary.c
//  programs
//  Successfully created on 06/02/16
//  Created by Arnab Sen on 06/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  Issues: Printing 2 in between for numbers>127(Solved)

#include<stdio.h>
int main()
{
    int a;
    int i=0;
    int x[100000];
    printf("Enter a Number \n");
    scanf("%d",&a);
    while (a!=0) {
        if (a/2!=0.5) { x[i]=a%2;a=a/2;i++;}
        else { x[i]=a/2;}
    }
    while (i) {
        printf("%d",x[i-1]);i--;
    }
    printf("\n");
   
}
