//
//  binaryrecursion.c
//  programs
//
//  Created by Arnab Sen on 07/06/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void binaryrec(int n){
    if(n/2==0) printf("1");
    else  {binaryrec(n/2);printf("%d",n%2);}
    
}
int main(){


    binaryrec(7);



}