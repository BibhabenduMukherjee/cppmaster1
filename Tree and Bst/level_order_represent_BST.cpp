// given a  level order of a BST 
// your task is to tell wheater this lavel order correct or 
// not

// step 
// 1 create a struct nodeDetails 
// that contains a node value and max and min

#include <bits/stdc++.h>
using namespace std;


// function for telling this 


struct NodeDetails{
	int data;
	int min , max;
};

bool levelOrderIsOfBST(int arr[] , int n)
{
 if(n==0){return true;}

 queue<NodeDetails> q;

 int i =0 ;

 NodeDetails newNode;

 newNode.data = arr[i++];
 newNode.max = INT_MAX;
 newNode.min = INT_MIN;

 q.push(newNode);

 while(i!=n and !q.empty())
 {
   NodeDetails temp = q.front();
   q.pop();

   if(i < n and (arr[i] < temp.data and arr[i] > temp.min))
   {
          newNode.data = arr[i++];
            newNode.min = temp.min;
            newNode.max = temp.data;
            q.push(newNode);          
   }

   if (i < n && (arr[i] > temp.data && 
                      arr[i] < temp.max))
        {
            // Create NodeDetails for newNode 
            /// and add it to the queue
            
           newNode.data = arr[i++];
            newNode.min = temp.data;
            newNode.max = temp.max;
            q.push(newNode);            
        }        

 }
  if (i == n)
        return true;
 return false; 
}

int main(){

     int arr[] = {7, 4, 12, 3, 6, 8, 1, 5, 10};    
    int n = sizeof(arr) / sizeof(arr[0]);    
    if (levelOrderIsOfBST(arr, n))
        cout << "Yes";
    else
        cout << "No";        
    return 0;    
	return 0;
}