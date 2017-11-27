//
//  dijstrasalgo.c
//  programs
//
//  Created by Arnab Sen on 18/03/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//  Completed with backtracking in rev order on 29/03/2016

#include <stdio.h>
#include "mylib.h"


int main()
{
    int vertex[50],edge[50][50],disp[50][50]; // Declaration of matrices
    int i,j,k,n1,v4,v1,v2,v3,l;              // Declaration of variables required
    int s1=32701,s2=32700;                    // Initialisation of sentinel values
    int com=1,m;
    
    printf("Enter the number of vertex \n"); // Setting all egde to edge to s1
    scanf("%d",&n1);
    for (i=0; i<n1; i++) {
        for (j=0; j<n1; j++) {
           disp[i][j]=s1;
        }
    }
    edge[0][0]=0;
    printf("* Instruction * \n Please enter the lowest wieght possible for set of vertices.\n");
    
    for (i=0; i<n1; i++) {
        for (j=0; j<=i; j++) {
            if (i==j) {edge[i][j]=0;}
            else {
                printf("Press 0 if there is no edge between v%d and v%d or enter the wieght of the edge \t",i+1,j+1); scanf("%d",&com);
                if (com==0) {edge[i][j]=s1;edge[j][i]=edge[i][j];continue;}
                else {edge[i][j]=com;}
                edge[j][i]=edge[i][j];}
                }
    }
    
    printf("Enter the start vertex \n");
    scanf("%d",&v1);v1--;
    printf("Enter the end vertex \n");
    scanf("%d",&v2);v2--;
    
    disp[0][v1]=0;m=0;
   
    for (j=0; j<n1; j++) {
        if (disp[0][j]==s1) {
            printf("INF \t");
        }
        else printf("%d \t",disp[0][j]);
    }
    for (i=0; i<50; i++) {
        disp[i][v1]=s2;
    }
    edge[0][v1]=s2;
    printf("\n");
    v3=v1;
    for (i=1; i<50; i++) {
        if (v2==v3) {
            break;}
        
        for (j=0; j<n1; j++) {
        if (disp[i-1][j]==m||disp[i][j]==s2) {continue;}
            disp[i][j]=min(disp[i-1][j],m+edge[v3][j]);}
        
        m=disp[i][0];v3=0;
        for (j=1; j<n1; j++) {
            if (m>disp[i][j]) {v3=j;m=disp[i][j];}
        }
        
        for (k=i; k<50; k++) {
            disp[k+1][v3]=s2;
        }
        for (j=0; j<n1; j++) {
            if (disp[i][j]==s1) {
                printf("INF \t");
            }
            else if (disp[i][j]==s2) {
                printf("X \t");
            }
            else if (disp[i][j]==m){ printf("[%d] \t ",disp[i][j]);}
            else {printf("%d \t",disp[i][j]);}
            
            
        }
         printf("\n");
        
    }
    printf("Backtracing \n");
    v4=v2;vertex[0]=v2;l=1;
    for (k=i-1; k>=0; k--) {
        if (m==disp[k][v4]) {continue;}
         m=disp[k][0];v4=0;
        for (j=0; j<n1; j++) {
            if (m>disp[k][j]) {v4=j;vertex[l]=j;m=disp[k][j];}
            }
        l++;
    }
    for (k=0; k<l; k++) {
        printf("v%d",vertex[k]+1);
        if (k<l-1) {
            printf("  to  ");
        }
    }
    printf("\n");
}


