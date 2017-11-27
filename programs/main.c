//
//  main.c
//  Extra
//
//  Created by Arnab Sen on 27/12/15.
//  Copyright © 2015 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>


int main(int argc, const char * argv[]) {
    
    printf("Storage size of float : %fl \n", FLT_MIN);
    printf("Size of int64 %lu",sizeof(FLT_MAX));
    printf("MINIMUM VALUE OF INT : %lld \n", INT64_MIN);
    printf("maximun value of char: %d \n", CHAR_MAX);
    printf("minimum value of char: %d \n", CHAR_MIN);
    printf("maximun value of int 32 bit : %d \n", INT32_MAX);
    printf("Maximum value of int 64 bit %lld",INT64_MAX);
    printf("max value of float: %fl \n", FLT_MAX);
    printf("Storage size of int; %lu \n", sizeof(intmax_t));
    printf("Storage size of int : %lu \n", sizeof(int));
    printf("storage of char : %lu \n", sizeof(char));
    printf("size of file : %lu \n", sizeof(MAC_OS_X_VERSION_MIN_REQUIRED));
    printf("Size of double : %lu \n", sizeof(double));
    printf("Hello World \n");
    printf("Min value of double : %f \n", DBL_MIN );
    printf("Size of long double : %lu \n", sizeof(long));
    printf("Min value of long double : %Lf \n", LDBL_MIN);
    printf("Hello World \n");
    return 0;}


