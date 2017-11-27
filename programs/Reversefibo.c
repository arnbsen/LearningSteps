//
//  Reversefibo.c
//  programs
//
//  Created by Arnab Sen on 02/04/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    long int f1=1,f,f2=1,n,i=0;
    printf("Enter the last number");
    scanf("%ld",&n);
    for (i=0; i<=n; i++) {
        f=(i<3)?(i<1)?0:1:f1+f2;
        f2=f1;f1=f;
        

    }
    
   
    for (i=n; i>=0; i--) {
        
       
        if (i==n) {f=f1;}
        else if(i==(n-1)){f=f2;}
        else{f=f1-f2;f1=f2;f2=f;}
      
        printf("%ld \t",f);
        

}

}