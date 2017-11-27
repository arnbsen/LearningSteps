//
//  palindromecheckstr.c
//  programs
//
//  Created by Arnab Sen on 10/04/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include<string.h>
int strpal(char *a){ // Palindrome Check //
    int n=0,i,j;
    for (i=0,j=strlen(a)-1; i<(strlen(a)/2); i++,j--) {
        if (a[i]==' ') {i++;}
        if (a[j]==' ') {j--;}
        if (a[i]==a[j]) {
            n=1;}
        else n=0;}
    return n;
}
void abbr(char *a){ // Abbreviation //
    int i=0,j=0;char b[20];
   b[j++]=a[0];
    for(i=0;i<strlen(a);i++){
        
        if(a[i]>='A'&&a[i]<='Z'&&j!=1) b[j++]=a[i];
    
        else if(a[i]==' ') b[j++]=a[++i];
     }
    b[j]='\0';
    puts(b);

}
int main(){

    char s1[100],s2[20];
    gets(s1);
    if (strpal(s1)) {
        printf("It is a palindrome \n");
    }
    else printf("It is not a palindrome \n");
    
   abbr(s1);



}
