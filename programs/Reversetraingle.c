//
//  Reversetraingle.c
//  programs
//
//  Created by Arnab Sen on 07/03/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i,j,k,l,m,n;
    
    printf("Enter the last number you want to print \n");
    scanf("%d",&n);
    l=0;
    for (i=n;i; i--,m++) {
        l=m;
        while (l) {
            printf("\t");l--;
        }
        
        for (j=1; j<i; j++) {
            printf("%d \t",j);
        }
       
        for (k=j-2; k; k--) {
            printf("%d \t",k);
        }
         printf("\n");
        if (m==n) {
            break;
        }
    }
    printf("\n");
}