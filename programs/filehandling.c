//
//  filehandling.c
//  programs
//
//  Created by Arnab Sen on 27/04/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  Mount point as it is should be included in C for UNIX based systems.


#include <stdio.h>
#include <string.h>

int main()
{
    FILE *a,*b;
    
    
    char f[1000];
    a=fopen("/Users/arnabsen/Desktop/file1.txt", "r+");
    b=fopen("/Users/arnabsen/Desktop/file2.txt", "w");
    
    while ( fscanf(a, "%s",f)&&!feof(a)) {
        
        fprintf(b, "%s \n",f);
        
    }
   
    
    
    fseek(a, 4, SEEK_SET);
    
    
    
}