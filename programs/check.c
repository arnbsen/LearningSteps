//
//  check.c
//  programs
//
//  Created by Arnab Sen on 18/04/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
typedef struct{
    int i; int j;
}p1;
void scan(p1* a,p1* b){
    scanf("%d %d %d %d",&a->i,&a->j,&b->i,&b->j);
};
void disp(p1* a,p1* b){
    printf("%d %d %d %d",a->i,a->j,b->i,b->j);
};

int main()
{
    p1 c1,c2,*c3,*c4;
    scan(&c1, &c2);
    disp(&c1, &c2);
    int a;
    
    a=scanf("%d");

    printf("%d",a);



}