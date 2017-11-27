//
//  voweldectectswitch.c
//  programs
//  Date Modified: 02/02/2016
//  Created by Arnab Sen on 02/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    char l;
    printf("Enter a letter: \n");
    scanf("%c",&l);
    switch (l) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': printf("You have entered a vowel \n");
            break;
        default:printf("You have entered a consonent \n");
            break;
    }
}