	
#include <stdio.h>
#include <stdlib.h>
#include "Circular.h"

void initQueue(Queue *q){
	q->front = 7;
	q->rear = 6;
	int i;
	
	for(i=0; i < MAX; ++i){
		q->elems[i] = EMPTY;
	}
}


void enqueue (Queue *q, int item){
	if(!isFull(*q)){
		q->rear = (q->rear + 1) % MAX;
		q->elems[q->rear] = item;
	}
}


void dequeue(Queue *q){
	if(!isEmpty(*q)){
		q->elems[q->front] = EMPTY;
		q->front = (q->front+1) % MAX;
	}
}


int front (Queue q);
	if(!isEmpty(q)){
		return q.elems[q.front];
	}
	
	
bool isEmpty(Queue q){
	return (q.rear + 1) % MAX == q.front;
}


bool isFull(Queue q){
	return (q.rear + 2) % MAX == q.front;
}


void visualize (Queue q){
	int i;
	printf("%5s | %5\n", "INDEX", "VALUE");
	printf("--------------\n");
	for(i=0; i < MAX; ++i){
		printf("%5d | ", i);
		if(q.elems[i] !=EMPTY){
			printf("%5d | ", q.elems[i]);
		}else {
			printf("%5s | ", " ");
			if(i == q.front){
				printf("FRONT");
			}else if (i == q.rear){
				printf("REAR");
			}
			
		}
		printf("\n");
	}
	
	printf("-------------------------\n");
	
}




