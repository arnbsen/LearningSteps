//
//  primenumbers.c
//  programs
//
//  Created by Arnab Sen on 15/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i,j,k=0,l;
    printf("The prime nos are \n");
    for (i=1; i<101; i++) {
        for (j=1,k=0; k<3&&j<=i; j++) {
            l=i%j;
            if (l==0) {k++;}}
        if(k==2) printf("%d \t",i);
    }
}
