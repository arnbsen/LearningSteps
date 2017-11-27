//
//  power2check.c
//  programs
//
//  Created by Arnab Sen on 20/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//


#include <stdio.h>
#include <math.h>
int main()
{
    int l,m;
    double i;
    printf("Enter the number \n");
    scanf("%d",&l);
    for (i=1;1; i++) {
        m=pow(2,i);
        if(l==m){printf("%d is power of 2 \n",l);break;}
        
        if(l<m){printf("%d is not a power of 2 \n",l); break;}
    }
}