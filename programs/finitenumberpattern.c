//
//  finitenumberpattern.c
//  programs
//
//  Created by Arnab Sen on 12/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i,j,k=0,l,m=0;
    
    for (j=1; j!=6; j++) {
        for (l=0; l!=j; l++) {
            printf("%d \t",m);m++;
        }
        printf("\n");
    }
}
