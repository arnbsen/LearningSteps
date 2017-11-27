//
//  nonfibonacci.c
//  programs
//
//  Created by Arnab Sen on 10/03/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  Nth non-fibonnaci means that n number of non-fibonacci will be printed.

#include <stdio.h>
int main()
{
    int f1,f2,a=1,b=1,i,j,n,k;
    printf("Enter the last value of fibonnaci \n");
    scanf("%d",&n);
    
    printf("Non fibonacci Number \n");k=n;
    for (i=0; i<n; i++) {
        if(k==0)break;// This prevents execution of master loop //
        f1=i<3?i<1?0:1:a+b;
        a=b;b=f1;
        f2=i+1<3?1:a+b;
            for (j=f1+1; j<f2; j++) {
                printf("%d \t",j);k--;if(k==0)break;
               
        }
    
    }
    printf("\n");
}