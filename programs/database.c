//
//  database.c
//  programs
//
//  Created by Arnab Sen on 29/04/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  The file pointers move to next address location i.e, to the next data entry if its not closed. File should be closed first in order read it from the beginning. Dont know if it exists for Windows based compilers or not.
//  Sucessfully intergrated structures with files. To try reverse.

#include <stdio.h>
#include <string.h>

typedef struct {
    int dd;
    int mm;
    int yy;
    }dob;
typedef struct {
    char f_name[100];
    char l_name[100];
    }n;
typedef struct {
    n name;
    dob date;
}data;

data std[100];



data writedatastr(){
    data b;
    printf("Enter the first name  ");
    scanf("%s",b.name.f_name);
    printf("Enter the last name  ");
    scanf("%s",b.name.l_name);
    printf("Enter the the date of DOB \n");
    scanf("%d",&b.date.dd);
    printf("Enter the the month of DOB \n");
    scanf("%d",&b.date.mm);
    printf("Enter the the year of DOB \n");
    scanf("%d",&b.date.yy);
    return b;
    }
void writeinp(data a,FILE *b,int n){
    fprintf(b, "%d ",n);
    fputs(a.name.f_name, b);
    fprintf(b, " ");
    fputs(a.name.l_name, b);
    fprintf(b, " ");
    fprintf(b, "%d ",a.date.dd);
    fprintf(b, "%d ",a.date.mm);
    fprintf(b, "%d ",a.date.yy);
    fprintf(b, "\n");
}
void readinp(FILE *d){

    char text[100];
    int i,j;
    fscanf(d, "%d",&j);
    printf("Serial No. %d. \n",j);
    fscanf(d, "%s ",text);
    printf("First Name:  %s \n",text);
    fscanf(d, "%s",text);
    printf("Last Name: %s \n",text);
    fscanf(d, "%d",&i);
    printf("DOB: %d.",i );
    fscanf(d, "%d ",&i);
    printf("%d.",i );
    fscanf(d, "%d",&i);
    printf("%d \n",i );
    }
void readinpstr(data v){

    printf("%s",v.name.f_name);
    printf("%s",v.name.l_name);
    printf("%d \%d \%d",v.date.dd,v.date.mm,v.date.yy);




}




int main(){
    
    FILE *fptr1,*fptr2;
    int i,j,k,n=1;
    char a;
    
    fptr1=fopen("/Users/arnabsen/Desktop/Untitled1.dat", "w+");
    printf("Enter the number of data \n");
    scanf("%d",&n);
    
    
    for (i=0; i<n; i++) {
        std[i]=writedatastr();
        writeinp(std[i],fptr1,i+1);
    }
    fseek(fptr1, 0, SEEK_SET);

    fptr2=fopen("/Users/arnabsen/Desktop/Untitled1.dat", "r");

    for (j=0; !feof(fptr1); j++) {
        readinp(fptr1);
    }
    
    
}
