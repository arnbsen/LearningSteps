#include<stdio.h>
int main()
{
  int edge[50][50],index[20];
  int i,j,k,l,v1,v2,v3,n1,m,sum=0,com=1;
  int s1=32701,s2=32700;
	printf("Enter the number of vertex \n");
    scanf("%d",&n1);
  printf("* Instruction * \n Please enter the lowest wieght possible for set of vertices.\n");
    
    for (i=0; i<n1; i++) {
        for (j=0; j<=i; j++) {
            if (i==j) {edge[i][j]=s1;}
            else {
                printf("Press 0 if there is no edge between v%d and v%d or enter the wieght of the edge \t",i+1,j+1); scanf("%d",&com);
                if (com==0) {edge[i][j]=s1;edge[j][i]=edge[i][j];continue;}
                else {edge[i][j]=com;}
                edge[j][i]=edge[i][j];}
                }
    }
printf("Enter the start vertex \n");
    scanf("%d",&v1);v1--;v3=v1;
for(l=0;l<n1-1;){
	printf("v%d ",v3+1);
	for(k=0;k<2;k++){
		m=edge[v3][0];
		for(i=0;i<n1;i++){
                         if(m>edge[v3][i]){ v2=i;m=edge[v3][i];}
				}
			sum+=edge[v3][v2];
		for(j=0;j<n1;j++){
			if(j==v2){edge[v3][v2]=s1;}
				}
		printf("to v%d",v2+1);
		v3=v2;l++;
				}
		v3=v1;
		}
}
