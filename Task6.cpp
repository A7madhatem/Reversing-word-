
# include <stdio.h>
# include <stdlib.h>
int word_length(char *pointer)     //Function to know the word length
{
   int c = 0;
 
   while( *(pointer + c) != '\0' )
      c++;
 
   return c;
}
void reverse(char *s){            //Reverse function 
	int length,e;
	char *start,*end,m;
	length=word_length(s);
	start=s;
	end=s; 
	
	for (e = 0; e < length - 1; e++)
      end++;
    
	for (e = 0; e < length/2; e++)
   {        
       m  = *end;
      *end  = *start;
      *start = m;
 
      start++;
      end--;
   }
}
void write(char*singleline){     //Writing function
	FILE *fptr;
	fptr=fopen("Task6.txt","a");
	fprintf(fptr,"\n");
	fprintf(fptr,singleline);
	
}
void read(){        //Reading function
	FILE *file_ptr;
	file_ptr=fopen("Task6.txt","r");
	char singleline[200];
	
	while (!feof(file_ptr)){
		fgets(singleline,200,file_ptr);
		puts(singleline);
	}
	reverse(singleline);
	write(singleline);  //writing
	fclose(file_ptr);
}
int main(){         //Main function
	read();
	return 0;
}
