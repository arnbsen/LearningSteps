//
//  pascalstriangle.c
//  programs
//
//  Created by Arnab Sen on 03/05/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(){
     
    int i,j,k,n,n1,n2;
    int a[100][100];
    
    printf("Enter the number of rows \n");
    scanf("%d",&n);
    a[0][(n*2-1)/2]=1;
    for (i=1; i<n; i++) {
        for (j=0; j<(n*2-1); j++) {
            if (j==0) {
                a[i][j]=a[i-1][j+1];
            }
            else if (j==(n*2-2)){a[i][j]=a[i-1][j-1];
            }
            else {
                a[i][j]=a[i-1][j-1]+a[i-1][j+1];
            }
        }
    }
    
    for (i=0; i<n; i++) {
        for (j=0; j<(n*2-1); j++) {
            if(a[i][j]!=0){printf("%d \t",a[i][j]);}
            else printf("\t");
        }
        printf("\n");
    }
    
    
}