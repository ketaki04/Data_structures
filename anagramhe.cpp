#include <iostream>
#include <string.h>
using namespace std;
 
int main() {
	// your code goes here
	int N;
	cin >> N;
	
	string str[2];
	
	for(int i = 0; i < N ; i++)
	{
		cin >> str[0] >> str[1];
		//cin >> str[1];
		
		int arr1[26],arr2[26];
		//int arr2[26];
		
		for(int i = 0; i < 26 ; i++)
		{
			arr1[i] = 0;
			arr2[i] = 0;
		}	
		
		for(int i = 0; i < str[0].length(); i++)
			arr1[str[0][i] - '0' - 49]++;
		for(int i = 0; i < str[1].length(); i++)
			arr2[str[1][i] - '0' - 49]++;
		
		int sum = 0;
		for(int i = 0; i < 26 ; i++)
		{
			sum = abs(arr1[i]-arr2[i]) + sum;
		}
		
		
		cout << sum << endl;
	}
	
	return 0;
}