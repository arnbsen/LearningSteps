//
//  functions.c
//  programs
//
//  Created by Arnab Sen on 14/03/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//
#include "mylib.h"

int main()
{
    
    int a[100];
    int r1,r2,i,j,n;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    
    for (i=0; i<n; i++) {
        printf("Enter the value of a[%d]",i);
        scanf("%d",&a[i]);
        
    }
    r1=a[0];
    for (i=1; i<n; i++) {
        r1=max(r1, a[i]);
    }
    r2=a[0];
    for (i=1; i<n; i++) {
        r2=min(r2, a[i]);
    }
    printf("Minimum=%d,Maximun=%d \n",r1,r2);
    factorial(n);
    j=fact(n);printf("int %d \n",j);
    swap(10,20);
    
}