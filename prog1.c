//
//  prog1.c
//  programs
//
//  Created by Arnab Sen on 24/01/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i,j,x=0;
    for (i=1; i<5; ++i) {
        for (j=1; j<5; ++j) {
            if (!(i+j%2))
            printf("%d",x++);
        }
    }
    printf("%d",x);
}