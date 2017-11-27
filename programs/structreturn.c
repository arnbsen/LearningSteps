//
//  structreturn.c
//  programs
//
//  Created by Arnab Sen on 02/06/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int km;
    int m;
}dist;

void disp(dist *a){
    printf("%d km %d m \n",a->km,a->m);
}
void check(dist *a){
    if(a->m>=1000){
        printf("Inavlid input. meters cannot exceed 1000 \n Enter a new value:\t");
    
        scanf("%d",&a->m);}
   

}
dist sum(dist *a,dist *b){
    dist add;
    add.km=a->km+b->km;
    if(((add.m=a->m+b->m)>=1000)){
        add.m-=1000;++add.km;
    }
    return add;
}
dist subs(dist a,dist b){
    dist diff;
    if ((diff.km=a.km-b.km)<0) {
        diff.km*=-1;
        if ((diff.m=b.m-a.m)<0) {
            --diff.km;diff.m+=1000;
        }
    }
    else{
        if ( (diff.m=a.m-b.m)<0) {
            --diff.km; diff.m+=1000;
        }
    }
    return diff;
}
void inp(dist *a){
    
    printf("Enter the value in km:\t");
    scanf("%d",&a->km);
    printf("Enter the value in meters:\t");
    scanf("%d",&a->m);

}




int main(){
    dist d1,d2,add,sub;
    int com=1,n;
    
    printf("Enter the first value \n");
    inp(&d1);
    check(&d1);
    printf("Enter the second value \n");
    inp(&d2);
    check(&d2);
    
    while(com){
        printf("Press 1 to add \nPress 2 to substract \nPress 3 to display \n");
        scanf("%d",&n);

        switch (n) {
            case 1:
                add=sum(&d1,&d2);
                disp(&add);
                break;
            case 2:
                sub=subs(d1, d2);
                disp(&sub);
                break;
            case 3:
                printf("First Value \t");
                disp(&d1);
                printf("Second value \t");
                disp(&d2);
                putchar('\n');
                break;
            default:printf("Invalid choice \n");
                break;
        }
        printf("Do you want to do second operation. Press 1 to continue 0 to terminate");
        scanf("%d",&com);
    
    }
    
    
    




}
