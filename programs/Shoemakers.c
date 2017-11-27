//
//  Shoemakers.c
//  programs
//
//  Created by Arnab Sen on 14/08/17.
//  Copyright © 2017 Arnab Sen. All rights reserved.
//
struct shoe{
    int penalty;
    int time;
    double ratio;
    int index;
}arr[100000];

#include <stdio.h>
int main(){
    int i,j,k,l;
    int n;
    struct shoe temp;
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        scanf("%d",&arr[i].time);
        scanf("%d",&arr[i].penalty);
        arr[i].index = i;
        arr[i].ratio = (double)arr[i].penalty/(double)arr[i].time;
    }
    for (i=1; i<=n; i++) {
        for (j=2; j<=n; j++) {
            if (arr[j].ratio < arr[j-1].ratio) {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                
            }
        }
    }
    for (i=n; i>=1; i--) {
        printf("%d\n",arr[i].index);
    }







}
