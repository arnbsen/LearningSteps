//
//  loop1.c
//  programs
//
//  Created by Arnab Sen on 04/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b;
    b=a;
    printf("Enter one decimal value:\n");
    scanf("%d",&a);
    if (b%2!=1) {
        printf("1");
    }

    while (a/2!=0) {
        printf("%d",a%2);a=a/2;
    }
    if (a!=1) {
        printf("%d",a);}
}
