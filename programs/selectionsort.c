//
//  selectionsort.c
//  programs
//
//  Created by Arnab Sen on 29/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  Main difference b/w selection sort and bubble sort is that in bubble adjacent variables are changed but selection involves swapping.
//  Does not work for same entries. Only for Different entries.Solved on 5/04/2016.

#include <stdio.h>
int main()
{
    int a[100];
    int i,j,k,l,m,n1,n2;
    
    printf("Enter the lenght of the array \n");
    scanf("%d",&n1);
    printf(" Enter the Array \n");
    for (i=0; i<n1; i++) {
        printf("Enter a decimal for a[%d]  ",i);
        scanf("%d",&a[i]);
    }
    
    for (i=0; i<n1; i++) {
        l=a[i];n2=i;k=a[i];
        for (j=i+1; j<n1; j++) {
            if (a[j]<k) {n2=j;k=a[j];}
        }
        a[i]=a[n2];a[n2]=l;
    }
    
    
    printf("Combined Array \n");
    for (m=0; m<n1; m++) {
        printf("%d \t",a[m]);
        
    }
    printf("\n");
}