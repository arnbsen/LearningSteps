//
//  infinteloop.c
//  programs
//
//  Created by Arnab Sen on 09/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include<stdio.h>
int main()
{
    int i,j,a=1,b=0;
    
    for (i=1; a==1; i++) {
        j=i;
        while (j!=0) {
            printf("*");j--;
        }
        printf("\n");
    }
    

}
