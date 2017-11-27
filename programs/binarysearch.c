//
//  binarysearch.c
//  programs
//
//  Created by Arnab Sen on 27/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  Works only for sorted array

#include <stdio.h>
int main()
{
    int a[100];
    int i,k=1,l,n1;
    char c;
    int ter,ini,mid;
    
    printf("Enter the lenght of the array \n");
    scanf("%d",&n1);
    printf(" Enter the Array \n");
    for (i=0; i<n1; i++) {
        printf("Enter a decimal for a[%d]  ",i);
        scanf("%d",&a[i]);
    }
l1:
    printf("Enter the value you want to search  \n");
    scanf("%d",&l);
    mid=n1/2;ter=n1-1;ini=0;
    while (ini<=ter) {
        if (l==a[mid]) {
            printf("a[%d] is a match \n",mid);k=0;break;
        }
        
        else if (l>a[mid]) {
            ini=mid+1;mid=(ini+ter)/2;
        }
        else if (l<a[mid]) {
            ter=mid-1;mid=(ini+ter)/2;
        }
    }
    if (k) {
        printf("Data not found \n");
    }
    printf("Do you want to search another value? Y/N?");
    scanf("   %c",&c);
    if (c=='Y') {
        goto l1;
    }
}