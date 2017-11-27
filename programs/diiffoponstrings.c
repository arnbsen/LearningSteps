//
//  diiffoponstrings.c
//  programs
//
//  Created by Arnab Sen on 07/04/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  Achieved all kinds of replacement in pattern.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[100],subs1[20],subs2[20],subs3[20],temp[100];
    int i,j,c=0,k;
    
    printf("Enter a  string \"It is case sensestive \"\n");
    gets(s1);
    printf("Enter a string to delete \n");
    gets(subs1);
    printf("Enter a string to replace \n");
    gets(subs2);
    printf("Enter a string to replace with \n");
    gets(subs3);
    strcpy(temp, s1);
    
    // for deleting string //
    
    for (i=0; s1[i]!='\0'; i++) {
        if (subs1[0]==s1[i]) {
            for (j=0; subs1[j]!='\0';j++) {
                if (subs1[j]==s1[i+j]) {
                    c=1;
                }
                else {c=0;}
                
            }
            if (c) {
                for (j=0;s1[i+j]!='\0'; j++) {
                    s1[i+j]=s1[i+strlen(subs1)+j];
                }
            }
        }
    }
    if (strcmp(temp, s1)) {
        printf("Deleted string: %s String changes to: %s \n",subs1,s1);
       }
 
    else  printf("Search string not found \nString remains: %s\n",s1);
    
    strcpy(s1, temp);
    
    // Replacing pattern of string //
    
    for (i=0; s1[i]!='\0'; i++) {
        if (s1[i]==subs2[0]) {
            for (j=0; subs2[j]!='\0'; j++) {
                if (s1[i+j]==subs2[j]) {
                    c=1;
                }
                else {c=0;}
                }
            
                if (c&&(strlen(subs2)==strlen(subs3))) {
                    for (j=0; subs2[j]!='\0'; j++) {
                        s1[i++]=subs3[j];
                                           }
                i--;}
                else if (c&&(strlen(subs2)>strlen(subs3))){
                    for (j=0; subs3[j]!='\0'; j++) {
                        s1[i++]=subs3[j];
                    }
                   
                    for (k=0; s1[i+k]!='\0';k++) {
                        s1[i+k]=s1[i+(strlen(subs2)-strlen(subs3))+k];
                    }
                   
                }
                else if (c&&(strlen(subs2)<strlen(subs3))){
                    for (j=strlen(s1); j>=i; j--) {
                        s1[j+(strlen(subs3)-strlen(subs2))]=s1[j];
                    }
                    for (k=0; subs3[k]!='\0'; k++) {
                        s1[i+k]=subs3[k];
                    }
                  }
            
        
        }
        
    }
    if (strcmp(temp, s1)) {
        printf("String is changed \nString changes to: %s \n",s1);
      }
    else   printf("String is not changed \nString remains: %s \n",s1);
    
    
    //
}