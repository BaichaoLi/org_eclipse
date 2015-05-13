//============================================================================
// Name        : RemoveDupItemFromSortedArray.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
 * remove duplicated item from a SORTED array, and return new length of the array.
 *
 */

int remove_dup(int arr[], int len)
{
	if(len == 0 ) return 0;
	int len_chg = 1;

	for(int ui = 0, mi= 1; mi < len-1; mi++ )
	{
		if(arr[ui] != arr[mi])
		{
			arr[++ui] = arr[mi];
			len_chg ++;
		}
	}
	return len_chg;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int arr[] = {1,2,3,3,3,4,4,5,6,7,8,8,8,9,9};
	int len = remove_dup(arr, 15);
	cout << "new array is length:" << len << endl;
	for(int i = 0; i < len; i++)
	{
		cout << arr[i] << " ," << endl;
	}
	return 0;
}
