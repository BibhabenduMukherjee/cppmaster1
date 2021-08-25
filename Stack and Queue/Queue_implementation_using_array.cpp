#include <bits/stdc++.h>
using namespace std;

const int N = 20;
class Queue{

	int *arr;
	int front;
	int back;
public:
	Queue(){

		arr = new int[N];
		front = -1;
		back = -1;
	}

	void push(int x){
		if(back == N-1)	{
			cout << "No space;"
		}

		back ++;
		arr[back] = x;

		if(front == -1){
			front++;
		}

	}

	void pop(){

		if(front == - 1 || front > back){
			cout << "No elements in queue" << endl;
			return  -1;
		} 

		front++;
	}

	int peek(){
          if(front == - 1 || front > back){
			cout << "No elements in queue" << endl;
			return  -1;
		} 

		return arr[front];

	}
	bool empty(){
       if(front == - 1 || front > back){
			return true;
		} 
		return false;
	}
};



int main(){

	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	cout << q.peek()  << endl;

	q.pop();

	cout << q.peek() << endl;



	return 0;


}