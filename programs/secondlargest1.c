//
//  secondlargest1.c
//  programs
//
//  Created by Arnab Sen on 08/06/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(){

    int index1=0,index2,index3;
    int *a;
    int n,i,temp=0;
    
    printf("Enter the no. of elements \n");
    scanf("%d",&n);
    a=(int *)calloc(n, sizeof(int));
    for (i=0; i<n; i++) {
        scanf("%d",a+i);
    }
    
    index3=0;index2=index1;
    for (i=0; i<n; i++) {
        if (a[i]>temp) {
            index3=index2;index2=index1;index1=i;temp=a[i];
        }
    }
    
    
    printf("%d %d %d \n",a[index1],a[index2],a[index3]);










}