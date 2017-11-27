//
//  alloc.c
//  programs
//
//  Created by Arnab Sen on 23/06/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int **a;
    
    calloc(2, sizeof(int));
    for (int i=0; i<2; i++) {
        *(a+i)=calloc(3, sizeof(int));
    }
    a[0][0]=2;a[1][0]=3;
    a[0][1]=4; a[0][2]=5;
   
   
    for (int i=0; i<2; i++) {
        printf("%d",**a);
    }
    
    
}