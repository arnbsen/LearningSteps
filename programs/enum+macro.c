//
//  enum.c
//  programs
//
//  Created by Arnab Sen on 30/04/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
/*  Macros differ from functions in the form that it replaces only the parameters passed to the macro in case of macro passing sq(3+1)
    will result in 3+1*3+1 rather than (3+1)*(3+1)i.e, just replaces    */
#include <stdio.h>
#define pattern for(i=1;i<=n;i++){  \
for (j=n; j>i; j--) {printf(" ");} \
for(k=0;k<i;k++){ printf("* ");} \
printf("\n");}
#define MAX(a,b) x=a>b?a:b
#define sq x*x
enum boolean{true=20, false=30 };



int main(){
    int i=3;
    printf("%d\t",sq);

    
}