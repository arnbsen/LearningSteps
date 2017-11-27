//
//  cmdlnt2.c
//  programs
//
//  Created by Arnab Sen on 10/05/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int ptr(int a, int b){
    int *s;
    s=malloc(sizeof(int));
    *s=a+b;
    return *s;
    }
int main(){

    printf("%d",ptr(2,4));
    



}