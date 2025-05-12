#include<iostream>
using namespace std;
int main(){
	int *arr[5];
	int x,y,z,a,b;
	
	x=y=z=a=b=20;
	
	int *p=&x; 
	int *p1=&y; 
	int *p2=&z; 
	int *p3=&a; 
	int *p4=&b;
	
	arr[0]=p;
	arr[1]=p1;
	arr[2]=p2;
	arr[3]=p3;
	arr[4]=p4;
	
	for(int i=0;i<5;i++)
	cout<<arr[i]<<"->"; //prints address of each veriable that a pointer holds inside it
	
	cout<<endl;
	cout<<endl;
	
	
	for(int i=0;i<5;i++)
	cout<<*(arr+i)<<"->"; //does the same thing as above (as subscript operator [] is a derefferncer too)
	
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<5;i++)
	cout<<(arr+i)<<"->"; // ok this is tricky, when we make an array we do this: arr(is a pointer) to &arr[0] so, (arr + 0) == &arr[0] , similarly (arr + 1) == &arr[i] 
	
	cout<<endl;
	cout<<endl;
	
	for(int i=0;i<5;i++)
	cout<<*(*(arr+i))<<"->"; //knwoing above 2 lines we can say: if (arr+1) gives us &arr[1] which is address of 1st index of array then we can write it like *(*(address of 1st index)) -> *(address of 1st index) gives us the actual 1st index which holds a pointer (p1,p2 etc) init  -> *(p1) and we know *p1 will give the value inside p1
	
	cout<<endl;
	cout<<endl;
	
	int arr1[5];
	arr1[0]=*p;
	arr1[1]=*p1;
	arr1[2]=*p2;
	arr1[3]=*p3;
	arr1[4]=*p4;
	
	for(int i=0;i<5;i++)
	cout<<arr1[i]<<"->"; 
	
	cout<<endl;
	cout<<endl;
	
	
	for(int i=0;i<5;i++)
	cout<<*(arr1+i)<<"->"; //why not *(*(arr+i) here?? well coz look at arr1 declaration its int arr1[5]; not int *arr1[5] lol;
	
	

}
