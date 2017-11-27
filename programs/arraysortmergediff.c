//
//  arraysortmergediff.c
//  programs
//
//  Created by Arnab Sen on 27/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  Works fo sorted array only

#include <stdio.h>
int main()
{
    int a[100],b[100],c[100];
    int n1,n2,i,j,k=0,l;
    
    printf("enter lenght of first array \n");
    scanf("%d",&n1);
    printf("Enter lenght of second array \n");
    scanf("%d",&n2);
    printf("First Array \n");
    for (i=0; i<n1; i++) {
        printf("Enter a decimal");
        scanf("%d",&a[i]);
    }
    printf("Second array \n");
    for (j=0; j<n2; j++) {
        printf("Enter a decimal");
        scanf("%d",&b[j]);
    }
    l=0;
    for (i=0; i<n1; i++) {
        for (j=l; j<n2; j++) {
           
            if (a[i]>b[j]) {
                c[k]=b[j];l++;k++;continue;
            }
           
            
        }
        c[k]=a[i];k++;
    }
    
    
        printf("Combined Array \n");
    for (k=0; k<n1+n2; k++) {
        printf("%d \t",c[k]);
        
    }
    printf("\n");

}
