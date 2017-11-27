//
//  structure.c
//  programs
//
//  Created by Arnab Sen on 16/04/16.
//  Copyright © 2016 Arnab Sen. All rights reserved.
//

#include <stdio.h>
int main()
{
    struct name{
    
        char f_name[20];
        char l_name[20];
        struct dob{
            int dd;
            int mm;
            int yy;
        
        }dob;
    
    }n;
    
    printf("Enter the first name \n");
    gets(n.f_name);
    printf("Enter last name \n");
    gets(n.l_name);
    printf("Enter DOB \"dd mm yy \" \n");
    scanf("%d %d %d",&n.dob.dd,&n.dob.mm,&n.dob.yy);
    
    printf("%s %s \n %d-%d-%d \n",n.f_name,n.l_name,n.dob.dd,n.dob.mm,n.dob.yy);
           
    
    
    

}