//
//  ascii.c
//  programs
//  Date Modified 04/02/2016
//  Created by Arnab Sen on 04/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  the interconvertiblity of ch1=ch was a faliure; the if else was not working for lower case: problem solved by replacing ch1 by ch

#include <stdio.h>
int main()
{
    char ch;
    int ch1;
    ch1=ch;
    printf("Enter any expression:");
    scanf("%c",&ch);
    printf("The ASCII value of entered Character is %d \n",ch);
    
   if (ch>=97&&ch<=122) {
        printf("The ASCII value of lowercase=%d \n,Lower case character=%c \n",ch-32,ch-32);
    }
   else if (ch>=65&&ch<=122){ printf("The ASCII value of uppercase=%d \n,Upper case character=%c \n",ch+32,ch+32);}
   
    else{ printf("It is a special character or number with ASCII value: %d \n",ch);}
    
}