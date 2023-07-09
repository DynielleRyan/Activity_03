#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Circular.h"


int main(int argc, char *argv[]) {
	
	Queue myQueue;
	int choice, value;
	String menuOption[7] = {"Enqueue", "Dequeue", 
							"isEmpty", "isFull",
							"Display", "Visualize",
							"Front", "Exit"};
							
	int i;
	
	initQueue(&myQueue);
	
	do{
		printf("MENU\n");
		for(i = 0; i<8; ++i){
			printf("[%d] %s\n" , i+1, menuOption[i]);
		}
		printf("Enter your choice <0 to EXIT>: ");
		scanf("%d", &choice);
		
		switch(choice) {
			
			case 1:
				printf("Enqueue\n");
				printf("Enter a number: ");
				scanf("%d", &value);
				enqueue(&myQueue, value);
				visualize(myQueue);
				break;
				
			case 2:
				printf("Dequeue\n");
				printf("Enter a number: ");
				scanf("%d", &value);
				dequeue(&myQueue, value);
				visualize(myQueue);
				break;
				
			case 3:
				printf("isEmpty\n");
				printf("Enter a number: ");
				scanf("%d", &value);
				enqueue(&myQueue, value);
				visualize(myQueue);
				break;
				
			case 4:
				printf("Enqueue\n");
				printf("Enter a number: ");
				scanf("%d", &value);
				enqueue(&myQueue, value);
				visualize(myQueue);
				break;
			
				
			case 5:
				printf("Enqueue\n");
				printf("Enter a number: ");
				scanf("%d", &value);
				enqueue(&myQueue, value);
				visualize(myQueue);
				break;
				
			case 6:
				printf("Enqueue\n");
				printf("Enter a number: ");
				scanf("%d", &value);
				enqueue(&myQueue, value);
				visualize(myQueue);
				break;
				
			case 7:
				printf("Enqueue\n");
				printf("Enter a number: ");
				scanf("%d", &value);
				enqueue(&myQueue, value);
				visualize(myQueue);
				break;
			
			case 0:
				printf("Thank you");
				break;
			
			default:
				printf("Invalid choice...\n");
				
				
				

		}
		system("pause");
	} while (choice !=0);
	printf("Bye!!\n");
	
	return 0;
}