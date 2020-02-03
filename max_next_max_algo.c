#include<stdio.h>

int main() {
	int n,m,max,nextmax,i,numb;
	
	// read n
	printf("Give n :: ");
	scanf("%d",&n);
	printf("\n n= %d \n",n);
	
	
	// initialize
	scanf("%d %d",&max,&nextmax);
	if(max<nextmax)
	  swap(&max,&nextmax);
  
  
	// compute the values
	for(i=0;i<=n-1;i++) {
		scanf("%d",&numb);
		if(numb>max) {
			nextmax=max;
			max=numb;
		}
		else if(numb>nextmax)
			nextmax=numb;
	}
	
	// print result
	printf("Max = %d , NEXTMAX=%d \n",max,nextmax);
	
}

swap(i,j)
int *i,*j;
{
	int temp;
	temp= *i;
	*i=*j;
	*j=temp;
}