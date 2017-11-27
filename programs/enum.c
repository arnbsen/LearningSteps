//
//  enum.c
//  programs
//
//  Created by Arnab Sen on 05/06/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
typedef enum Ranks {FIRST, SECOND} Order;
int main()
{
    Order data = 20;   //ERROR 20 is not a Order
    if (data == FIRST)
    {
        printf("Hello \n");
    }
}
