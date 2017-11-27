//
//  pointers.c
//  programs
//
//  Created by Arnab Sen on 19/03/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  Pointers cannot be assigned values directly.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,*b;
    int n1,n2,n3,i=3,j,k;
    int *e;
    a=&i;
    b=&i;
    printf("%d", *a * *b);
    
}