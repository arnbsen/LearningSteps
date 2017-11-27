//
//  reversepalindrome.c
//  programs
//
//  Created by Arnab Sen on 12/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int j = 0,l,m,k;
    printf("Enter a Number: \n");
    scanf("%d",&m);
    k=m;
    while (m!=0) {
        l=m%10;m=m/10;
        j=j*10+l;
    }
   
    printf("The reverse number is: %d \n",j);
    if (k==j) {
        printf("Number is palindrome \n");
    }
    else{printf("Number is not a palindrome \n");}
    
    
    
}
