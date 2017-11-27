//
//  result.c
//  programs
//
//  Created by Arnab Sen on 25/05/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
#include <string.h>
typedef struct{
    long int reg_no;
    char f_name[50];
    char l_name[50];
    int subcode[5];
    int marksub[5];
    char grade[5][3];
    char grade7[3];
    char grade8[3];
    char grade9[3];
    char grade10[5];
    int total;
    float pc;
    int ser;
}stud;

stud og[100],temp1,temp2;
stud readinp(FILE *a){
    int i; stud d;
    d.total=0;
    fscanf(a, "%ld",&d.reg_no);
    fscanf(a, "%s",d.f_name);
    fscanf(a, "%s",d.l_name);
    for (i=0; i<6; i++) {
        fscanf(a, "%d",&d.subcode[i]);
        fscanf(a, "%d",&d.marksub[i]);
        
        fscanf(a, "%s",d.grade[i]);
    }
    fscanf(a, "%s",d.grade7);
    fscanf(a, "%s",d.grade8);
    fscanf(a, "%s",d.grade9);
    fscanf(a, "%s",d.grade10);
    d.total=d.marksub[0]+d.marksub[1]+d.marksub[2]+d.marksub[3]+d.marksub[4];
    d.pc=((float)d.total)/5.000000;
       return d;
}
void wriieinp(FILE *a,stud d){
    int i; static int j=1;
    fprintf(a, "%d \t",j++);
    fprintf(a, "%ld \t",d.reg_no);
    fprintf(a, "%s \t",d.f_name);
    fprintf(a, "%s \t",d.l_name);
    for (i=0; i<5; i++) {
            fprintf(a, "%d \t",d.marksub[i]);
    }
    fprintf(a, "%d \t",d.total);
    fprintf(a, "%g \n",d.pc);
    
}


int main()
{
    FILE *a,*b,*c;
    int i,j=0,k,l,n1,n2;
    char h[1000];
    char f[1000];
    a=fopen("/Users/arnabsen/Desktop/read1.txt", "r+");
    b=fopen("/Users/arnabsen/Desktop/read.txt", "w+");
    
    
   
    for (i=0;!feof(a); i++) {
        og[i]=readinp(a);
       
    }
    
    
    l=i;
    n1=l;
      while (l>=0) {
        for (k=1; k<l; k++) {
            if(og[k-1].total<og[k].total){temp1=og[k-1];
                og[k-1]=og[k];og[k]=temp1;}
        }
        l--;
    }
    
    for (i=0; i<n1; i++) {
        wriieinp(b, og[i]);
    }
    
  
    
    
    
           
    
    for(j=0;j<i;j++){
    printf(" %d %ld %s %s %g \n",j+1,og[j].reg_no,og[j].f_name,og[j].l_name,og[j].pc);
    }
    
    
}

