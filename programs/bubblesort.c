//
//  bubblesort.c
//  programs
//
//  Created by Arnab Sen on 28/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  

#include <stdio.h>
int main()
{
    int a[100];
    int i,j,k,l,m,n1;
    
    printf("Enter the lenght of the array \n");
    scanf("%d",&n1);
    printf(" Enter the Array \n");
    for (i=0; i<n1; i++) {
        printf("Enter a decimal for a[%d]  ",i);
        scanf("%d",&a[i]);
    }
    l=n1;
    for (i=1; n1;) {
        for (j=0; j<n1-1; j++) {
            if (a[j]>=a[j+1]) {
                m=a[j];a[j]=a[j+1];a[j+1]=m;
            }
            
        }
        n1--;
    }
    
    
    printf("Combined Array \n");
    for (k=0; k<l; k++) {
        printf("%d \t",a[k]);
        
    }
    printf("\n");
}

