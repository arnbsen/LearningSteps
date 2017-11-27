//
//  getchar.c
//  programs
//
//  Created by Arnab Sen on 06/03/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  ctype.h library contians toascii,toupper,tolower fucntions

#include <stdio.h>
#include <ctype.h>
int main()
{
    int i=3;
    char a1='a',a2;
    
    a2=getchar();
    putchar(a1);
    printf("%d \n",toascii(a2));
    printf("%c,%c \n",tolower(a2),toupper(a2));
    
}