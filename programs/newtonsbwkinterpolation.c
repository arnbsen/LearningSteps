//
//  newtonsbwkinterpolation.c
//  programs
//
//  Created by Arnab Sen on 06/05/17.
//  Copyright © 2017 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float factorial(int i){
    if(i==0){ return 1;}
    else{ return (float)i*factorial(i-1);}
}
int main(){
    float x[20],dif_table[10][20],res,sum,prod,xn,h;
    int i,j,n;
    
    
    printf("Enter the number the terms and the increment\n");
    scanf("%d%f",&n,&h);
    printf("Enter the initial number and the number you want to evaluate\n");
    scanf("%f%f",&x[0],&xn);
    
    //Taling input for the 1st column of the diff table
    for (i=0; i<n; i++) {
        
        printf("Enter fx[%d] for x[%d] = %g ",i,i,x[i]);
        scanf("%f",&dif_table[i][0]);
        x[i+1] = x[i] + h;
    }
    //Creating the differemce table
    for (i=1; i<n; i++) {//Column Selector
        for (j=i; j<n; j++) { //Row Selector
            dif_table[j][i] = dif_table[j][i-1] - dif_table[j-1][i-1];
        }
    }
    
    //Evaluating the final Results
    res = 0;
    for (i=0; i<n; i++) {
        prod = dif_table[n-1][i]/(powf(h,i)*factorial(i));
        for (j=0; j<i; j++) {
            prod = prod*(xn - x[n-j-1]);
        }
        res = res + prod;
    }
    printf("The result of the polynomial is = %g\n",res);
}
