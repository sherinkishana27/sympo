#include <stdio.h>
 
int main() {

int rows,i,j;
    
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
for (i = 0; i < rows; i++){
for (j = rows; j > i; j--){
			printf(" ");
		}
			
		for (int k = 1; k <= i + 1; k++) {
			printf(" *");
		}
		printf("\n");
	}
    
     
	return 0;
}
