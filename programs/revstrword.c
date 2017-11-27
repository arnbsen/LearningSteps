//
//  revstrword.c
//  programs
//
//  Created by Arnab Sen on 12/04/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <string.h>
void strrev(char *s){
    
    int i,j,n;
    char t1;
    n=strlen(s);
    for (i=0,j=n-1; i<n/2; i++,j--) {
        t1=s[i];s[i]=s[j];s[j]=t1;
    }
    
    
}

int main()
{
    char s1[100];
    char temp1;
    int n,i,j,k,l,m;
    
    printf("Enter a sting \n");
    gets(s1);
    strrev(s1);
    
    
    for (i=0; s1[i]!='\0'; i++) {
        if (s1[i]==' '||i==0) {
            for (j=++i; s1[j]!=' '&&s1[j]!='\0'; j++);
            if (i==1) {
                m=0;
            } else {
                m=i;
            }
            n=j-1;
            for (k=m,l=n; k<=m+((n-m)/2); k++,l--) {
                temp1=s1[k];s1[k]=s1[l];s1[l]=temp1;
            }
                       
        }

    }
    puts(s1);
   

}