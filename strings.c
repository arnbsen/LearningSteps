//
//  strings.c
//  programs
//
//  Created by Arnab Sen on 09/03/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main()
{
    long i,j;
    char str[100000];
    char str1[1000],str2[1000],str3[1000][1000];
    int c1=0,c2=0,c3=0,c4=0,c5=0;
    
    printf("Enter a string \n");
    gets( str);
    printf("Enter Second string \n");
    gets(str1);
    
    i=strlen(str);
    printf("%ld",i);
    if (str[i-1]!='.') {
        str[i+1]=str[i];str[i]='.';}
    puts(str);
    for (i=0; str[i]!=0; i++) {
        if (str[i]>66&&str[i]<91) {c1++;}
        else if(str[i]>98&&str[i]<123) {c2++;}
        else {c4++;}
        if (str[i]=='.'){c3++;}
        else if (str[i]==','||str[i]==';'||str[i]=='"'||str[i]==':'||str[i]=='('||str[i]==')'){continue;}
        else if (str[i]==' '||str[i]=='.'){c5++;}
    }
    printf("No of uppercase=%d,No of lowercase=%d,No of lines=%d,No of words=%d \n",c1,c2,c3,c5);
    j=strcmp(str, str1);
    strcat(str2, str1);
    strcpy(str3[0], str1);
    strcpy(str3[1], str2);
    puts(str3[0]);
    printf("j=%ld \n",j);
    puts(str3[1]);
}