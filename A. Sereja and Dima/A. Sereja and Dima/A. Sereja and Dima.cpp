// A. Sereja and Dima.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
   
	int cardNumber;
	cin>> cardNumber;
	//int arr[cardNumber];
	int* arr = new int(cardNumber);
	int i = 0;
	int sscore = 0;
	int dscore = 0;
	int right, left;
	bool flag = true;
	if (cardNumber >= 1 && cardNumber <= 1000)
	{
		for(i = 0 ; i<cardNumber ; i++)
		{
			cin>> arr[i];
		}
		
		left = 0;
		right = cardNumber -1;
		for (int i = 0; i < cardNumber; i++)
		{
			if (i % 2 == 0)
			{
				if (arr[right] > arr[left])
				{
					sscore += arr[right];
					--right;
				}
				else if (arr[right] < arr[left]) {
					sscore += arr[left];
					++left;
				}
				else {
					sscore += arr[left];
				}
			}
			else 
			{
				if (arr[right] > arr[left])
				{
					dscore += arr[right];
					--right;
				}
				else if (arr[right] < arr[left])
				{
					dscore += arr[left];
					++left;
				}
				else 
				{
					dscore += arr[left];
				}
			}
		}

		}
		cout << sscore << " " << dscore <<endl;
		

	}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
