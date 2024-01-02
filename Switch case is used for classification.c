#include <stdio.h>

//Aysegul Cagli's homework

int main(void)
{
	int i;

	
	
	printf("Enter the current speed of wind\n1:65-117\n2:117-180\n3:182-252\n4:253-333\n5:334-419\n6:420-511\n7:Above 511\n\n\n");
	scanf("%d", &i);
	
	
		switch ( i ){
			 
			 	case 1:
			    printf("Class:F0\nWind Speed Range:65-117\nObserved Damage:Minor\n");
		     	break;
		     	
		     	case 2:
		     		printf("Class:F1\nWind Speed Range:117-180\nObserved Damage:Weak\n");
		     		break;
		     		
		     	case 3:
		     		printf("Class:F2\nWind Speed Range:182-252\nObserved Damage:Strong\n");
		     		break;
		     		
		     	case 4:
		     		printf("Class:F3\nWind Speed Range:253-333\nObserved Damage:Severe\n");
		     		break;
		     		
		     	case 5:
		     		printf("Class:F4\nWind Speed Range:334-419\nObserved Damage:Devestating\n");
		     		break;
		     		
		     	case 6:
		     		printf("Class:F5\nWind Speed Range:420-511\nObserved Damage:Incredible\n");
		     		break;
		     		
		     	case 7:
				    printf("Class:F6\nWind Speed Range:Above 511\nObserved Damage:Unthinkable\n");
		     		break;	
		     		
		     	case '\n': 
                case '\t': 
                case ' ': 
                break; 

                default: 
                    printf( "Incorrect number is entered." ); 
                    puts( " Enter a valid number." ); 
                    break; 
		     		
		     
			 }
		
	
	}
			
			
		
    	
		
		
			
		
	
	
	
	

