//
//  adder.c
//  programs
//
//  Created by Arnab Sen on 10/06/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int adder(int A,int B){

    return ((A&B)^(A|B))|(A^B);




}
int main(){

    int i,j;
    scanf("%d %d",&i,&j);
    printf("%d \n",adder(i, j));
      



}