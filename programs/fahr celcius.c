//
//  fahr celcius.c
//  programs
//
//  Created by Arnab Sen on 03/02/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int fahr,celsius;
    int lower,upper,step;
    lower=0;
    upper=300;
    step=20;
    
    fahr=lower;
    while (fahr<= upper) {
        celsius = 5*(fahr-32)/9;
        printf("%d\t%d\n",fahr,celsius);
        fahr=fahr+step;
    }
}