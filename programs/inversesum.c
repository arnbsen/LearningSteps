//
//  inversesum.c
//  programs
//
//  Created by Arnab Sen on 12/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include<stdio.h>
int main()
{
    float i,j,k=0.00000;
    printf("The number \n");
    scanf("%1f",&i);
    for (j=1; j!=i+1; j++) {
        k=k+(1/j);
    }
    printf("%5.5f \n",k);
    
}
