//
//  predictor_corrector.c
//  programs
//
//  Created by Arnab Sen on 15/05/17.
//  Copyright © 2017 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
float eqn1(float x, float y){
    return x*x + y*y;
}
int main()
{
    float res, x0,y0,xn,h,x,y,yk,eps=0.0001;
    int i,j,n;
    
    
    printf("Enter x0, y0, xn, h");
    scanf("%f%f%f%f",&x0,&y0,&xn,&h);
    n = (int)(xn-x0)/h;
    x =x0;
    y = y0;
    yk = y0;
    y = y0 + h*eqn1(x, y);
    do{
        x = x + h;
        yk = y;
        y = y + (h/2)*(eqn1(x,y) + eqn1(x + h, yk));
    }while((fabsf((y-yk)/yk))< eps);
    
    printf("Res = %g\n",y);
}
