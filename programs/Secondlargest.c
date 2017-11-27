//
//  Secondlargest.c
//  programs
//
//  Created by Arnab Sen on 26/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a[100];
    int i,j,k,l=0,m,n=-99999;
    
    
    printf("Enter the lenght of the array \n");
    scanf("%d",&i);
    
    for (j=1; j<=i; j++) {
        printf("enter a decimal \n");
        scanf("%d",&a[j]);
    }
    m=a[1];
    for (k=1; k<=i; k++) {
        
        if (m<a[k]) {
            m=a[k];l=k;
        }
        
        
    }
    printf("Largest= %d \n",m);

    for (k=1; k<=i; k++) {
        if (a[k]==m) {
            continue;
        }
        if (n<a[k]) {
            n=a[k];l=k;
        }
       
        
    }
    printf("Second largest= %d \n",n);
    
    
    
    
}