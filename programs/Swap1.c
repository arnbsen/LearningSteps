//
//  Swap1.c
//  programs
//  Date modified: 31/01/2016
//  Created by Arnab Sen on 29/01/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  the logic used to transfer variables should be remembered

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter one value= \n");
    scanf("%d",&a);
    printf("Enter another value= \n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("Swaping values first=%d,second=%d",a,b);
}
