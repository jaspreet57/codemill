#include <bits/stdc++.h>

using namespace std;


/**
 * Micro and Queue problem solved from below link
 * https://www.hackerearth.com/practice/data-structures/queues/basics-of-queues/tutorial
 */

void setFileStreams(){
	#ifndef ONLINE_JUDGE
		// for getting input from input.txt
		freopen("input.txt", "r", stdin);
		// for writing output to output.txt
		freopen("output.txt", "w", stdout);
	#endif
}



int n = 101, front = 0, rear = 0;

int size() {
	return (rear - front);
}

void enqueue(int queue[], int element) {
	queue[rear] = element;
	rear += 1;
}

int dequeue(int queue[]) {
	if(front == rear) {
		return -1;
	}

	int element = queue[front];
	front += 1;
	return element;
}

int main() {
	setFileStreams();
	int queue[n];
	int T;
	char Op;
	int x;
	int elementDequeued;
	cin >> T;
	for(int i=0; i<T; i++) {
		cin >> Op;
		if(Op == 'E'){
			cin >> x;
			enqueue(queue, x);
			cout << size() << endl; 
		} else if (Op == 'D') {
			elementDequeued = dequeue(queue);
			cout << elementDequeued << " " << size() << endl;
		}
	}
	return 0;
}