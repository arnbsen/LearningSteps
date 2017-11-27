//
//  fibonnaci.c
//  programs
//
//  Created by Arnab Sen on 26/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()

{
    int f1=1,f,f2=1,n,i=0;
    printf("Enter the last number");
    scanf("%d",&n);
    for (i=0; i<=n; i++) {
        f=(i<3)?(i<1)?0:1:f1+f2;
        f2=f1;f1=f;
        printf(" F %d \n",f);
    }
    
}