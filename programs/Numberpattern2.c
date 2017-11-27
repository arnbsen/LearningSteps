//
//  Numberpattern2.c
//  programs
//
//  Created by Arnab Sen on 11/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i=6,j,k,a=6;
    
    while (i!=0) {
        
        for (j=a; j!=6; j++) {
            printf("\t");
        }
        for (k=1; k!=a;k++) {
            printf("%d \t",k);
        }
        printf("\n");a--;i--;
    }
    
}