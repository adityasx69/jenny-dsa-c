#include <stdio.h>

#define N 5

int stack[N];
int top = -1;

void push(){
    int x;
    printf("Enter the number to push: ");
    scanf("%d", &x);

    if(top == N-1){
        printf("Overflow Condition!\n");
    }
    else{
        top++;
        stack[top] = x;
        printf("%d pushed into stack\n", x);
    }
}

void pop(){
    int item;

    if(top == -1){
        printf("Underflow Condition!\n");
    }
    else{
        item = stack[top];
        top--;
        printf("%d popped into stack\n", item);
    }
}

void peek(){
    int peek;

    if(top == -1){
        printf("Underflow Condition!\n");
    }
    else{
        peek = stack[top];
        printf("%d\n", peek);
    }
}

void display(){

        for(int i=top; i>=0; i--){
            printf("%d ", stack[i]);
        }
    printf("\n");
}

int main(){

    int choice;
    do {
        printf("\n1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. QUIT\n");

        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch(choice){
            case 1 : push(); break;
            case 2 : pop(); break;
            case 3 : peek(); break;
            case 4 : display(); break;
            case 5 : printf("Exit\n"); break;
            default: printf("Invalid choice\n");
        }

    } while(choice != 5);

    return 0;
}