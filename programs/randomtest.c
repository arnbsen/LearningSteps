//
//  complimentcheck.c
//  programs
//
//  Created by Arnab Sen on 15/05/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int **a;
    int n1=2,n2=3,n3;
    a=malloc(n1*sizeof(int));
    for (n3=0; n3<n1; n3++) {
        *(a+n3)=malloc(n2*sizeof(int));
    }
    int i,j,k;
    for (i=0; i<n1; i++) {
        for (j=0; j<n2; j++) {
            scanf("%d",(*(a+i)+j));
        }
    }
    
    for (i=0; i<n1; i++) {
        for (j=0; j<n2; j++) {
            printf("%d %X \t",a[j][i],a);
        }
        putchar('\n');
    }
    
    
}