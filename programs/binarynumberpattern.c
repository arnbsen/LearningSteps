//
//  binarynumberpattern.c
//  programs
//
//  Created by Arnab Sen on 11/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b=5,c=1,d;
    
    for (a=0; c!=0; a++) {
        b=a;
        while (b!=0) {
            if (b%2==1||b==1) {
                printf("1");}
                else { printf("0");}
            b--;
          }
        printf("\n");
    
}

}