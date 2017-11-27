//
//  Area of circle.c
//  Extra
//
//  Created by Arnab Sen on 23/01/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    int r;
    float a,p,c;
    
    printf("Enter the value of radius: \n");
    scanf("%d", &r);
    a=((22/7)*(r*r));
    p=((2*(22/7))*r);
    c=(r*r);
    printf("Area of circle is %f",a);
    printf("perimeter of circle %f \n",p);
    printf("Square of radius: %f \n",c);
    return 0;
    
    
}