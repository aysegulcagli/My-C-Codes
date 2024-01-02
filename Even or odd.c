#include <stdio.h>
#include <math.h>

//Aysegul Cagli's homework

int main( void )
{
	unsigned int n;
	float sum=0;
	float power;
	int i;
	
	printf("Enter a number:\n");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		if(i%2==0){
			power= -1*pow(i, -2);
		sum=sum+power;
		}
		else{
			power=pow(i, -2);
		sum=sum+power;
			
		}
		
	}
	
	printf("The result is %.4f", sum);
}


