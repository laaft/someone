#include<stdio.h>
#include<stdlib.h>
struct stack{
	int top;
	unsigned capacity;
    int* arr;
};
struct stack* creatstack(unsigned capacity){
	struct stack* stack;
 	stack=(struct stack*)malloc(sizeof(struct stack));
  stack->top=-1;
 	stack->capacity=capacity;
 	stack->arr=(int*)malloc(stack->capacity*sizeof(int));
}
 int full(struct stack* stack){
 	return stack->top==stack->capacity;
 }
 int empty(struct stack* stack){
 	return stack->top==-1;
 }
 void push(struct stack* stack,int k){
 	if(full(stack))
 	return;
 	stack->arr[++stack->top]=k;
 	printf("%d\n",k);
 }
 int pop(struct stack* stack){
 	if(empty(stack))
 	return(-1);
 	return stack->arr[stack->top--];
 }
 int peek(struct stack* stack){
 	if(empty(stack))
 	return(-1);
 	return stack->arr[stack->top];
 }


 
 int main(){
 	struct stack* stack=creatstack(20);
 	push(stack,5);
 	push(stack,22);
 	push(stack,12);
 	push(stack,76);
 	printf("%d\n",pop(stack));
 	printf("%d\n",pop(stack));
 	return 0;
 }
