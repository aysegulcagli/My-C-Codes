#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 
#define MAX_WORDS   1000
int rec( char search[100], char news[500][100], int her ); 

int result;
int main()
{
	FILE *file; 
	FILE* fpp;
	FILE* fp;
	FILE*file1; 
	FILE* ptr;
		FILE *fptr;
		 FILE *files;
	
	char ch;
	char c[120];
	char line[100];
	char words[1000][100];
	char kelime[20];
	char yeni[100];
	char ab[100];
	char ignorel[1000][100];    
	char vocab[500][100];
	char news[500][100];
    char search[500][100];
    char kelimeler[MAX_WORDS][50];
    char word[50];
    char eklenecekKelime[200]; 
   
    

  

    int  count[MAX_WORDS]; 
   	int  f, j, i, len, index, isUnique, u, v, tt, a, e, p;
    int  k , s, b; 
    
	s=0;
	 v=0;
	
	printf("Enter a file name:");
	fscanf(stdin, "%s", c);
	
	ptr = fopen(c, "r");
	if (NULL == ptr) {
		printf("file can't be opened \n");
	}
	printf("content of this file:\n");
	
while (fgets(line, sizeof(line), ptr)) {
		printf("%s", line); 
		}
	printf("\n\n\n");
	
		ptr = fopen(c, "r");
	if (NULL == ptr) {
		printf("file can't be opened \n");
	}
	
if((file=fopen(c,"r")) == NULL){ 
        printf("Input File Could Not Be Opened!\n"); 
        exit(1); 
        } 
        a=0;
while(b != EOF){ 


            b = fscanf(file,"%s",kelime); 
            strcpy(words[a],kelime);
            
            a++;
        } 

 if((file1=fopen("ignorel.txt","r")) == NULL){ 
        printf("Input File Could Not Be Opened!\n"); 
        exit(1); 
        } 
        k=0;
        while(s != EOF){ 
            s = fscanf(file1,"%s",eklenecekKelime); 
            strcpy(ignorel[k],eklenecekKelime);
          
            k++;
        } 
        
        printf("\n\n\n");
        printf("All words without the ones in ignore list:\n");
        int flag;
        
       for(e=0;e<200;e++){
       	flag=0;
       	for(f=0;f<200;f++){	
       		if(strcmp(words[e], ignorel[f])==0){
       		        		 	
       		    flag=1;
       		   	break;
			}
			if(strcmp( words[e],"")==0)
		        e=200;
		   }  
		   if(flag==0){
		   	printf("%s, ", words[e]);
   }
 }
   
int bayrak;
 fptr = fopen(c, "r");
    if (fptr == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read previleges.\n");
        exit(EXIT_FAILURE);
    }

    for (i=0; i<MAX_WORDS; i++)
        count[i] = 0;
        
        
    index = 0;
    
    while (fscanf(fptr, "%s", word) != EOF)
    {
        strlwr(word);

        len = strlen(word);
        if (ispunct(word[len - 1]))
            word[len - 1] = '\0';


        isUnique = 1;
        for (i=0; i<index && isUnique; i++)
        {
            if (strcmp(kelimeler[i], word) == 0)
                isUnique = 0;
        }

     
        if (isUnique) 
        {
            strcpy(kelimeler[index], word);
            count[index]++;

            index++;
        }
        else
        {
            count[i - 1]++;
        }
    }

    fclose(fptr);

    printf("\n\n");
    printf("\nOccurrences of all distinct words in file: \n");
    for (i=0; i<index; i++)
    {
        
         
       	bayrak=0;
       	for(f=0;f<200;f++){
       		
       	 if(strcmp(kelimeler[i], ignorel[f])==0){
       		        		 	
       		bayrak=1;
       		break;
			}
			if(strcmp( kelimeler[i],"")==0)
		    f=200;
		   }
		   
		   if(bayrak==0){
		   	  printf("%-15s, %d\n", kelimeler[i], count[i]);
   }
      
    }
	
	
	
	 fpp=fopen("words.txt","w"); 
     if(fpp==NULL)
     {
     	printf("Couldn't open the file");
     	return 0;
     	
	 }
	 
	 for(j=0; j<index ;j++){
	 
       	bayrak=0;
       	for(f=0;f<200;f++){
       		
       	 if(strcmp(kelimeler[j], ignorel[f])==0){
       		        		 	
       	bayrak=1;
       	break;
		}
		if(strcmp( kelimeler[j],"")==0)
	  f=200;
		   }
		   
		   if(bayrak==0){
		   	  fprintf(fpp, "%-15s, %d\n", kelimeler[j], count[j]);
		   	  strcpy(news[s], kelimeler[j]);
		   	  s++;
	
   }
   
}

    printf("\n\nThe sorted order of words:");
    
   for(tt=0;tt<s;tt++){
   for(j=tt+1;j<s;j++){
      if(strcmp(news[tt],news[j])>0){
         strcpy(ab,news[tt]);
         strcpy(news[tt],news[j]);
         strcpy(news[j],ab);
      }
   }
   
   
}

for(tt=0;tt<s;tt++){
	printf("\n%s", news[tt]);
}

char src[100];
while(strcmp(src,"0")!=0){
 
   printf( "\n\n\n\nEnter a word:(enter 0 to exit)\n" );
   
   scanf( "%s", &src );
   
   	if(strcmp(src,"0")==0)
   	break;
   	
   	 result = rec( src, news, 0 );

   if(result==-1){
   	   printf( "The word -%s- doesn't exist.\n", src );

   }
   else {
   	   printf("The word -%s- exists.", src);
   }
   }
}
   
   int rec( char search[100], char news[500][100], int u )      
{            
int v=100;

if(strcmp(news[u], search)==0){
	return u;
}    
else if(u==v){
	return -1;
}
else{
	rec(search, news, (u+1));
}                             
}                            


	
	


    
