//
//  primecompositecount.c
//  programs
//
//  Created by Arnab Sen on 09/06/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main(){

    int i,j,k,n;
    int count1,count2;
    
    
    printf("Enter The last limit \n");
    scanf("%d",&n);
    
    for (i=2; i<=n; i++) {
        k=1;
        for (j=2; j<i; j++) {
            if (i%j==0) {printf("COMPOSITE %D \n",i); count1++;k=0;break;}
        }
        if (k) {count2++;printf("PRIME %d \n",i);}
    }
    printf("Prime nos detected %d,Composite nos detected %d \n",count2,count1);
    





}