//
//  bubblesortstr.c
//  programs
//
//  Created by Arnab Sen on 08/04/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include<string.h>
int main()
{
    char s1[100][100],temp1[100],temp2[100];
    int i=0,j,pos1,l1,l2,m=-27,pos,pos2;
    
    printf("Enter the sequence of words. Enter \"END\" to terminate \n");
    
    do {
        printf("Enter the %d word \n",i+1);
        gets(s1[i]);
        if (s1[i][0]>='a'&&s1[i][0]<='z') {
            s1[i][0]=s1[i][0]-32;
        }
        
    } while (strcmp(s1[i++],"END")&&i<99);
    l1=--i;
    l1--;
    while (l1) {
        for (j=1;j<=l1; j++) {
            if (strcmp(s1[j-1], s1[j])>0) {
                strcpy(temp1, s1[j-1]);
                strcpy(s1[j-1], s1[j]);
                strcpy(s1[j], temp1);
            }
        }
        l1--;
    }
    for (j=0; strcmp(s1[j], "END"); j++) {
        puts(s1[j]);
    }

}