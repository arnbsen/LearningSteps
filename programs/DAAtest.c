//
//  DAAtest.c
//  programs
//
//  Created by Arnab Sen on 10/08/17.
//  Copyright © 2017 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int StrangeMerge(int* A,int m,int* B,int n,int* C) {
    // A has m elements, B has n elements
    int i,j,k,l;
    i = j = k = 0;
    
    while (k < m+n) {
        if (i == m) {j++; k++;}
        if (j == n) {C[k] = A[i]; i++; k++;}
        
        if (i != m && j != n) {
            if (A[i] < B[j]) {C[k] = A[i]; i++; k++;}
            if (A[i] == B[j]) {i++; j++;}
            if (A[i] > B[j]) {j++;}
        }
    }
    return k;
}
int main(){
    int A[] = {1,2,3,4,5,6,11};
    int B[] = {4,5,6,7,8,9,10};
    int C[10];
    int k = StrangeMerge(A, 7, B, 7, C);
    printf("%d\n",k);
    for (int i = 0; i<k; i++) {
        printf("%d  ",C[i]);
    }



}
