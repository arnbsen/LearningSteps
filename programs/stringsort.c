//
//  stingsort.c
//  programs
//
//  Created by Arnab Sen on 04/04/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  strcpy dont work self string. Have to use extern string
//  Completed on 06/04/2016.

#include <stdio.h>
#include <string.h>


int main()
{
    char s1[100][100],temp1[100],temp2[100];
    int i=0,j,pos1,l1,l2,m,pos,pos2;
    
    printf("Enter the sequence of words. Enter \"END\" to terminate \n");
    
    do {
        printf("Enter the %d word \n",i+1);
        gets(s1[i]);
        if (s1[i][0]>='a'&&s1[i][0]<='z') {
            s1[i][0]=s1[i][0]-32;
        }
        
    } while (strcmp(s1[i++],"END")&&i<99);
    
    
   
   
    for (i=0; strcmp(s1[i], "END"); i++) {
        pos=i;m=s1[i][0];l1=0;l2=m;pos1=i;pos2=i;
       
        for (j=i+1; strcmp(s1[j], "END"); j++) {
            if (strcmp(s1[pos1], s1[j])>0) {
                pos1=j;
            }
            
            if (m>s1[j][0]) {
                pos1=j;m=s1[j][0];
            }
            else if (s1[i][0]==s1[j][0]){
                if (strcmp(s1[i], s1[j])>l1) {
                    pos2=j;l1=strcmp(s1[i], s1[j]);l2=s1[j][0];
                }
            }
        }
        
        if (strcmp(s1[pos1], s1[pos2])>0){pos=pos2;}
        else {pos=pos1;}
        strcpy(temp1, s1[i]);strcpy(temp2, s1[pos]);strcpy(s1[i], temp2);strcpy(s1[pos], temp1);
    }
    
    
    
    for (j=0; strcmp(s1[j], "END"); j++) {
        puts(s1[j]);
    }
}