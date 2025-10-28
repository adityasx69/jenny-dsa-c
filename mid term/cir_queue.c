#define N 5
int queue[N];

int front = -1;
int rear = -1;

void enqueue(int x){
    if (front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else if(((rear+1)%N)==front){
        printf("Queue is full\n");
    }
    else{
        rear = (rear+1)%N;
        queue[rear] = x;
    }
}

