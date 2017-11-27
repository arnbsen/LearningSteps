//
//  universalloop.c
//  programs
//
//  Created by Arnab Sen on 14/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int i,j,k,l,a,x;
    char b,c,d,e,f;
    printf("Do you need a finite or Infinte loop. Press F/I");
    scanf("%s",&b);
    printf("Do you want to start with letter or number. Press L/N");
    scanf("%s",&c);
    printf("Do you want Right Inclined/Left inclined/Isoceles triangle. Press R/L/I");
    scanf("%s",&d);
    printf("Do you want tabs in between? Press Y/N");
    scanf("%s",&e);
   
    if (c=='n'||c=='N') {
    printf("Enter the max number you want to print");
        scanf("%d \n",&x);goto number;}
    else if (c=='l'||c=='L') {
        printf("Enter the starting letter \n");
        scanf("%c",&f);goto letter;
    }
    
number:
    for (i=1; i!=x;i++) {
        l=x-i;
        while (l!=0) {
            if (d=='R'||d=='r'||e=='y'||e=='Y') {
                printf("\t");l--;}
        }
        for (j=1; j!=i+1; j++) {
            printf("%d",j);
            if (d=='R'||d=='r'||e=='y'||e=='Y') {printf("\t");}
        }
        k=j-2;
        while (k!=0) {
            printf("%d",k);k--;if (e=='y'||e=='Y') {printf("\t");}
        }
        printf("\n");
    }
letter:for (i=1; i!=f;i++) {
    l=f-i;
    while (l!=0) {
        if (d=='R'||d=='r'||e=='y'||e=='Y') {
            printf("\t");l--;}
    }
    for (j=1; j!=i+1; j++) {
        printf("%c",j);
        if (d=='R'||d=='r'||e=='y'||e=='Y') {printf("\t");}
    }
    k=j-2;
    while (k!=0) {
        printf("%c",k);k--;if (e=='y'||e=='Y') {printf("\t");}
    }
    printf("\n");
    }
    
}