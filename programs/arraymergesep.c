//
//  arraymergesep.c
//  programs
//
//  Created by Arnab Sen on 26/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[20],b[20],c[100];
    int n1,n2,i,j,k;
    
    printf("enter lenght of first array \n");
    scanf("%d",&n1);
    printf("Enter lenght of second array \n");
    scanf("%d",&n2);
    printf("First Array \n");
    for (i=0; i<n1; i++) {
        printf("Enter a decimal");
        scanf("%d",&a[i]);
    }
    for (i=0; i<n1; i++) {
        c[i]=a[i];
    }
    printf("Second array \n");
    for (j=0; j<n2; j++) {
        printf("Enter a decimal");
        scanf("%d",&b[j]);
    }
    for (i=0; i<n1+n2; i++) {
        c[i+n1]=b[i];
    }
    printf("Combined array \n");
    for (k=0; k<n1+n2; k++) {
        printf("%d \t",c[k]);
    }
    printf("\n");
    
    
}