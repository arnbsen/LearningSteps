//
//  Numberpattern1.c
//  programs
//
//  Created by Arnab Sen on 11/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i=5,j,k;
    
    for (k=1; i!=0; i--) {
        j=i;
        for (k=1; j!=0; j--) {
            
            printf("%d",k);k++;
        }
        printf("\n");
    }
    



}