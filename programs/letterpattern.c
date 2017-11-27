//
//  letterpattern.c
//  programs
//
//  Created by Arnab Sen on 12/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i=65,j=0,k=65,l;
    for (j=1; j!=6; j++) {
        k=65;
        for (l=0; l!=j; l++) {
            printf("%c \t",k);k++;
        }
        printf("\n");
    }
}