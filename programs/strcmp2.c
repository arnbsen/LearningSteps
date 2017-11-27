//
//  strcmp2.c
//  programs
//
//  Created by Arnab Sen on 07/06/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){

    char a[100][1000],temp1[1000],temp2[1000];
    int i=0,j,k,l,index;
    
    printf("TYPE \"END \" when finished \n");
    
    do{
        printf("Enter %d th word \n",i);
        gets(a[i]);
        toupper(a[i][0]);
    
    }
    while (strcmp(a[i++], "END"));
    i-=2;
    while (i) {
        l=0;index=i;
        for (j=1; j<=i; j++) {
            if (strcmpi(a[j-1], a[j])>0) {
               strcpy(temp1, a[j]);strcpy(temp2, a[j-1]);strcpy(a[j-1], temp1);strcpy(a[j], temp2);            }
        }
        i--;
    }
    
    for (j=0; strcmp(a[j], "END"); j++) {
        printf("%s \n",a[j]);
    }


}
