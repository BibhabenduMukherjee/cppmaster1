// int max range is 
// 2147483647 


int addOvf(int* result, int a, int b) 
{ 
    *result = a + b; 
    if(a > 0 && b > 0 && *result < 0) 
        return -1; 
    if(a < 0 && b < 0 && *result > 0) 
        return -1; 
    return 0; 
} 
int main(){

	int a= 2147483640;
	int b= 10;

	int res = new int[(sizeof(int))];


   cout<<addOvf(res, x, y); 

	return 0;
}