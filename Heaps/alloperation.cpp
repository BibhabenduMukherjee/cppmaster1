#include <bits/stdc++.h>
using namespace std;

// heaps are basically two types
// Max heap and Min heap

// insert operation take time

// o(height of the tree) == O(logn)
//insert can done in constant time
// but the arrangement take time

void swap(int &a , int &b)
{
	int t = a;
	a = b ; 
	b = t;
}
class minHeap{

	int * arr;

	int capacity;

	int heap_size;

public:
	minHeap(int size = 10){
        heap_size = 0;

        capacity = size;
        arr = new int[capacity];
	}

	int parent(int i)
	{
		return (i-1)/2;
	}
	int left(int i){
		return (2*i) +1;
	}
	int right(int i)
	{
		return (2*i)+2;
	}

    // insert function 
	void insert(int k)
	{
		if(heap_size == capacity)
		{
			cout <<"overflow ";
			return;
		}
        heap_size++;
		
		int i = heap_size -1;
		arr[i] = k;

		while(i!=0 && arr[parent(i)] > arr[i])
		{
			swap(arr[i] , arr[parent(i)]);
			i  = parent(i);
		}
		
	}

	void print()
	{
		for(int i =0 ; i<heap_size; i++)
		{
			cout << arr[i] <<" ";
		}cout <<endl;
	}


  // getMin function return the min value
	// top of the heap;

   int getMin()
   {
   	int data = INT_MIN;
   	if(heap_size == 0)
   	{
   		cout <<"\nUnderflow" << endl;
   	}else{
   		data = arr[0];
   	}
   	return data;
   }

   // min hepify for rearrange the tree in 
   // correct order

   void minHepify(int i)
{
  int l = leftChild(i);
  int r = rightChild(i);

  int smallest = i;
  if(l < heap_size && arr[l] < arr[i])
  {
  	smallest = l;
  }
  if(r < heap_size && arr[r] < arr[smallest])
  {
  	smallest = r;
  }

  if(smallest!= i){
  	swap(arr[i] , arr[smallest]);
  	minHepify(smallest);
  }
}  
  int extractMin()
  {
  	// check for underflow
    int data = INT_MIN;

  	if(heap_size <=0){
  		cout <<"Underflow" << endl
  		
  	}else if(heap_size == 1)
  	{
      heap_size--;
      data = arr[0];
  	}else{
      // extract min
  		data = arr[0];

  		arr[0] = arr[heap_size-1];

  		heap_size--;
  		minHepify(0);
  	}

  return data;
  }

};


// question on heaps
// 1 ] heap sort
// 2 ] find k'th leargest element in using min heap


// HEAP SORT // 
// start point of hepify is (n/2) -1


void hepify()
{
	int leargest = i;

	int l = 2*i+1;
	int r = 2*i+2;

	
}


void HeapSort()
{
	for(int i = n / 2 - 1; i>=0 ; i--)
	{
		hepify(arr , n , i);
	}
}


int main()
{
   minHeap h = minHeap(10);
   h.insert(10);
   h.insert(20);
   h.insert(30);
   h.insert(5);
   // print the min heap
   h.print();


   if(h.getMin() == INT_MIN) // heap size is 0
   {
   	cout <<"NO Data Found" <<endl;
   }


  // abtract == min value should be kicked from the heap
  // replace the min value with the last value
   // call min hipify // time COMx 0(logn)



	return 0;
}