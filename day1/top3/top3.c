#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//find the elf with the most calories carried


int main () {

	int max, max2, max3 = 0;
	int sum = 0;
	FILE *fptr;
	char line[10];
	
	//open file
	if ( (fptr = fopen("input.txt", "r")) == NULL ){
		printf("Error!");
		exit(1);
	}


	while (fgets(line, sizeof(line), fptr) != NULL){
		sum = atoi(line) + sum;
		
		if (strcmp(line, "\n") == 0){
			if ( sum > max)
				max = sum;
			else if ( sum > max2 )
					max2 = sum;
				else if (sum > max3 )
					 max3 = sum;			 
		sum = 0;				
		}
	}
	printf("Most calories carried by top 3 Elves are : %d\n",max+max2+max3);


	fclose(fptr);
	return 0;
}
