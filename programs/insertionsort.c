//
//  insertionsort.c
//  programs
//
//  Created by Arnab Sen on 29/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()

{
    int a[100];
    int i,j,k,m,n1;
    
    printf("Enter the lenght of the array \n");
    scanf("%d",&n1);
    printf(" Enter the Array \n");
    for (i=0; i<n1; i++) {
        printf("Enter a decimal for a[%d]  ",i);
        scanf("%d",&a[i]);
    }
    for (i=1; i<n1; i++) {
        j=i;
        while (j>0) {
            if (a[j]>a[j-1]) {
                break;
            }
            m=a[j];a[j]=a[j-1];a[j-1]=m;j--;
        }
        
    }
    
    printf("Combined Array \n");
    for (k=0; k<n1; k++) {
        printf("%d \t",a[k]);
    
        
    }

    printf("\n");
}