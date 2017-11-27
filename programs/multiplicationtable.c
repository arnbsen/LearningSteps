//
//  multiplicationtable.c
//  programs
//
//  Created by Arnab Sen on 12/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i,j,k,l,m;
    printf("enter the number whose multiplication table you need \n");
    scanf("%d",&i);
    printf("enter the no. of place you want calculate \n");
    scanf("%d",&j);
    
    printf("The table goes \n");
    for (k=1; k!=j+1; k++) {
        printf("%d x %d = %d \n",i,k,i*k);
    }
}