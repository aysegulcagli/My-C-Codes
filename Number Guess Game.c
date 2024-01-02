//Aysegul Cagli's Guess Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



int main( )
{
	int i,j ,d, guess, number,e=0, n, s, f=0, h, w;
	int A[]= {0,1,2,3,4,5,6,7,8,9};
	int G[]={0,1,2,3,4,5,6,7,8,9};
	int Z[1000];
	int temp;
	
	
	int gn=0, m, x=0;
	
	
	printf("??????????????????\n");
	printf("??? GUESS GAME ???\n");
	printf("??????????????????\n");
	srand(time(NULL));
	
	printf("\nEnter a digit number between 4-10:\n");
	scanf("%d", &d);

	for(i=0;i<d;i++){
	A[i]=rand()%10;
	if(A[0]==0){
		A[0]=rand()%10;
	}
	for(j=0;j<i;j++)
	{
		if(A[i]==A[j] ){
			i--;
			j=i;
		}
	
		
	}
	
	
}

	
	
	while(e!=d)
	{
	e=0;
	f=0;
	printf("\nEnter a guess:\n");
	scanf("%d", &guess);
	
	if(x==gn){
		Z[x]=guess;
		x++;
	}
	gn++;
	
	


	

	for(h=d-1;h>=0;h--){
		G[h]=guess%10;
		guess=guess/10;
	}
	
	
	for(n=0;n<d;n++){
		if (A[n]==G[n])
	{
		e++;
	}
	for(s=0;s<d;s++){
		if(A[n]!=G[n]&& A[n]==G[s]){
			f++;
		}
	}
	
	}
	printf("+%d", e);
	printf("-%d", f);
	printf("\n");
}


if(e==d){
	printf("\nCongrats! The secret number is: ");
	for(m=0;m<d;m++)
	{
		printf("%d", G[m]);
	
		
	}
	
	printf("\nThe guess number is: %d\n", gn);
	printf("Your guesses in ascending order: \n ");
	for(x=0;x<gn;x++){
		for(w=gn-2;w>=0;w--){
			if(Z[w+1]<Z[w]){
				temp=Z[w+1];
				Z[w+1]=Z[w];
				Z[w]=temp;
				
			}
			
		}
		printf("%d\t", Z[x]);
	
	}

     
}

	
}
    	
	
    
   
	
	

