//
//  exchangestr.c
//  programs
//
//  Created by Arnab Sen on 09/04/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100],subs1[3][20],temp1[20],temp2[20],temp3[100];
    int i,j,c=0,k,l=0,m,n;
    
    printf("Enter a string \n");
    gets(s1);
    
    for (i=0; i<2; i++) {
        if (i) {
            printf("Enter the 2nd word to excahange \n");
        }
        else { printf("Enter the 1st word to exchange \n");}
        gets(subs1[i]);
    }
    
    strcpy(subs1[2], subs1[0]);
    strcpy(temp3, s1);
   
    
    
    for (i=0; s1[i]!='\0'; i++) {
            if (s1[i]==temp1[0]) {
            for (j=0; temp1[j]!='\0'; j++) {
                if (s1[i+j]==temp1[j]) {
                    c=1;
                }
                else {c=0;}
            }
            
            if (c&&(strlen(temp1)==strlen(temp2))) {
                for (j=0; temp1[j]!='\0'; j++) {
                
                    s1[i++]=temp2[j];
                }
                i--;}
            else if (c&&(strlen(temp1)>strlen(temp2))){
                for (j=0; temp2[j]!='\0'; j++) {
                    s1[i++]=temp2[j];
                }
                
                for (k=0; s1[i+k]!='\0';k++) {
                    s1[i+k]=s1[i+(strlen(temp1)-strlen(temp2))+k];
                }
                
            }
            else if (c&&(strlen(temp1)<strlen(temp2))){
                for (j=strlen(s1); j>=i; j--) {
                    s1[j+(strlen(temp2)-strlen(temp1))]=s1[j];
                }
                for (k=0; temp2[k]!='\0'; k++) {
                    s1[i+k]=temp2[k];
                }
                    }
            
            
                }
        
            }
        
    
    
    if (strcmp(temp3, s1)) {
        printf("String is changed \nString changes to: %s \n",s1);
    }
    else   printf("String is not changed \nString remains: %s \n",s1);


}