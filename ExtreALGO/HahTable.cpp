#include <bits/stdc++.h>
using namespace std;

class HashTable{
	int BUCKET;
	list<int> *table;

	Hash(int v);
	void insertItem(int v);
	void deleteItem(int v);

	int hashF(int v){
		return (v%BUCKET);
	}

};
HashTable::Hash(int b){
this->BUCKET = BUCKET;
table = new list<int>[BUCKET];
}

HashTable::insertItem(int x){
	int index = hashF(x);
	table[index].push_back(x);

}
HashTable::deleteItem(int x){
	index = hashF(x);
   auto i;
	for ( i=table[index].begin(); i != table[index].end();  ++i)
	{
		if(*i==x) break;
	}

	if(i!=table[index].end() ){
		table.[index].erase(i);
	}
}