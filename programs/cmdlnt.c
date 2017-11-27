//
//  cmdlnt.c
//  programs
//
//  Created by Arnab Sen on 05/05/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[]){



    int i,sum=0;
    for (i=0; i<argc; i++) {
        sum+=atoi(argv[i]);    }

    printf("%d",sum);

}





