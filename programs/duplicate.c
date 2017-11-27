//
//  duplicate.c
//  programs
//
//  Created by Arnab Sen on 26/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a[30];
    int i,j,k=0,n,m=1;
    printf("Enter the length of array \n");
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        printf("Enter value \n");
        scanf("%d",&a[i]);
    }
    for (j=0; j<n; j++) {
        for (k=1+j; k<n; k++) {
            if (a[j]==a[k]) {
                printf("Duplicate input a[%d] and a[%d]=%d \n",j,k,a[k]);m=0;
            }
            
        }
        
    }
    if (m) {
        printf("No Duplicate Exists \n");
    }
  
    
    
    
}