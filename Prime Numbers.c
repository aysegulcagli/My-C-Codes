#include <stdio.h>
#include <math.h>

//Aysegul Cagli's homework

int main(void)
{
	int a,b;
	unsigned int counter, counter1, prime, temp;
	int sum=0;
	
	printf("Enter a lower and a upper limit from positive integers\nAnd I will calculate the sum of all the prime numbers between them:\n");
	scanf("%d%d", &a, &b);
	
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	
	for( counter=a; counter<=b; ++counter){
	if(counter==1){
		counter=counter+1;
	}
		prime=0;
		for(counter1=2; counter1<counter; ++counter1){
				
			if(counter%counter1==0){
				prime=1;
			}
		}
		if(prime==0){
			sum=sum+counter;
		}
	}
	printf("Sum is %d", sum);
}
		
	
		
			
		
	
	
		
				
			

		
	
