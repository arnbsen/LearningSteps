//
//  timestruct.c
//  programs
//
//  Created by Arnab Sen on 03/06/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
typedef struct {
    int hr;
    int min;
    int sec;
}t;
void add(t t1, t t2){
    t add;
    add.hr=0;
    add.min=0;
    int day=0;
    if ((add.sec=t1.sec+t2.sec)>=60) {
        ++add.min;add.sec-=60;
    }
    if ((add.min=add.min+t1.min+t2.min)>=60) {
        ++add.hr;add.min-=60;
    }
    if ((add.hr=add.hr+t1.hr+t2.hr)>=24) {
        ++day; add.hr-=24;
    }
    if (day) {
        printf("%d day ",day);
    }
    printf("%d hr %d min %d sec \n",add.hr,add.min,add.sec);

}
void subs(t t1,t t2){
    t subs;
    if ((subs.hr=t1.hr-t2.hr)<0) {
        subs.hr*=-1;
        if ((subs.min=t2.min-t1.min)<0) {
            --subs.hr;subs.min+=60;
        }
        if ((subs.sec=t2.sec-t1.sec)<0) {
            --subs.min; subs.sec+=60;
        }
    }
    else{
        if((subs.min=t1.min-t2.min)<0){--subs.hr;subs.min+=60;}
        if ((subs.sec=t1.sec-t2.sec)<0) {--subs.min;subs.sec+=60;}
        }
    printf("%d hr %d min %d sec \n",subs.hr,subs.min,subs.sec);
}
void disp(t t1){ printf("%d hr %d min %d sec \n",t1.hr,t1.min,t1.sec);}
void inp(t *t1){
    printf("Enter the time in hrs:\t");
    scanf("%d",&t1->hr);
    printf("in mins:\t");
    scanf("%d",&t1->min);
    printf("in sec:\t");
    scanf("%d",&t1->sec);
    putchar('\n');
}
void check(t *t1){

    if (t1->hr>=24) {
        printf("Invalid Input. Hrs cannot exceed 24 hrs\nRe-enter value:\t");
        scanf("%d",&t1->hr);
    }
    if (t1->min>=60) {
        printf("\nInvalid Input. Mins cannot exceed 60\nRe-enter value:\t");
        scanf("%d",&t1->min);
    }
    if (t1->sec>=60) {
        printf("Invalid input. Secs cannot exceed 60\nRe-enter value:\t");
        scanf("%d",&t1->sec);
    }
}
int main(){
    
    t a,b;
    int com=1,n;
    printf("Enter the first value \n");
    inp(&a);
    check(&a);
    printf("Enter the second value \n");
    inp(&b);
    check(&b);
    
    while(com){
        printf("Press 1 to add \nPress 2 to substract \nPress 3 to display \n");
        scanf("%d",&n);
        
        switch (n) {
            case 1:
                add(a,b);
                break;
            case 2:
               subs(a,b);
                break;
            case 3:
                printf("First Value \t");
                disp(a);
                printf("Second value \t");
                disp(b);
                putchar('\n');
                break;
            default:printf("Invalid choice \n");
                break;
        }
        printf("Do you want to do second operation. Press 1 to continue 0 to terminate");
        scanf("%d",&com);
        
    }
    
    
    
    
}