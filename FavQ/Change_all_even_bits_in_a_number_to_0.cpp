//
//
// Input : 30
//Output : 10
//Binary representation of 11110. 
//Bits at Even positions are highlighted. 
//After making all of them 0, we get 01010
//
//

int Change_Even_Bit_TO_Zero(int a){
	return (a& 0xaaaaaaaa); 
}

 #include <bits.stdc++.h>
 using namespace std;


 int main(){
  
  int t;
  while(t--){

   int n ; 
   cin >> n;

cout << Change_Even_Bit_TO_Zero(n);


  }

   
   

  return 0;
 }
