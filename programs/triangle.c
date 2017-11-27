//
//  triangle.c
//  programs
//
//  Created by Arnab Sen on 15/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i,j,k,l,a;
    printf("Enter the max number you want to print \n");
    scanf("%d",&a);a++;
    for (i=1; i!=a;i++) {
        l=a-i;
        while (l!=0) {
            printf("\t");l--;
        }
        for (j=1; j!=i+1; j++) {
            printf("%d \t",j);
        }
        k=j-2;
        while (k!=0) {
            printf("%d \t",k);k--;
        }
        printf("\n");
    }
}