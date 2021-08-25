#include <bits/stdc++.h>
using namespace std;

class FrequencyStack
{
public:
	int maxF = 0;
	map<int , int> freqMap;
	map<int , stack<int>> setMap;


	void push(int x){
	int frq = freqMap[x] + 1;

	freqMap[x] = frq;

	if(frq > maxF){
		maxF = frq;
	}
      
	setMap[frq].push(x);

	}


	void pop(){
		int top = setMap[maxF].top();
		setMap[maxF].pop();

		freqMap[top]--;
		if(setMap[maxF].size() == 0){maxF--;}
		return top;
	}
};