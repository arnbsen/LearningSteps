//
//  fininte5numberpattern.c
//  programs
//
//  Created by Arnab Sen on 12/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i,j,k,l;
    for (i=1; i!=6; i++) {
        j=5-i;
        while (j!=0) {
            printf("\t");j--;
        }
        l=1;
        while (l!=i+1) {
            printf("%d \t",l);l++;
        }
        printf("\n");
    }


}