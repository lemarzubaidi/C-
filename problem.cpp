#include <iostream>
#include<cstdlib>
#include <iomanip>
using namespace std;
/*void fillarrary(int arr[3][3], short row, short col) {
	int count = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			count++;
			arr[i][j] = count;	
		}
	}
}
void tran(int arr[3][3],int tranarr[3][3], short row, short col) {
	
	for (int i = 0; i <row; i++)
	{	
		for (int j = 0; j <col; j++)
		{
			
			tranarr[i][j]= arr[j][i];
		}
	}
}
void print(int arr[3][3], short row, short col) {
	cout << "the following is a 3x3 orderd matrix:\n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << setw(5) << arr[i][j] << " ";
		}cout << endl;
	}
}*/
int randnum(int from, int to) {
	return rand() % (to - from + 1) + from;
}
void fillmatrix1(int arr[3][3], short row, short col) {
	for (short i = 0; i < row; i++)
	{
		for (short j = 0; j < col; j++)
		{
			
			arr[i][j] = randnum(1,100);
		}
	}
}
/*void mul(int resarr[3][3], int arr1[3][3], int arr2[3][3], short row, short col) {
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			resarr[i][j] = arr1[i][j] * arr2[i][j];
		}
	}

}*/
int sumallmatrix(int arr[3][3], short row, short col) {
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
void print(int arr[3][3], short row, short col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//printf("  %0*d  ", 2, arr[i][j]);
			cout << " "<<arr[i][j]<<" ";
		}cout << endl;
	}
}
/*void printmidrow(int arr[3][3], short row, short col) {
	short midrow = row / 2;
	cout << "Middle row of matrix1 is:\n";
	for (int i = 0; i <col; i++)
	{
		printf("  %0*d  ", 2, arr[midrow][i]);
	}
}
void printmidcol(int arr[3][3], short row,short col) {
	short midcol = col / 2;
	cout << "Middle col of matrix1 is:\n";
	for (int i = 0; i < row; i++)
	{
		printf("  %0*d  ",2,arr[i][midcol]);
	}
}*/
bool equallling(int arr1[3][3],int arr2[3][3],short row,short col) {
	
	return sumallmatrix(arr1, row, col) == sumallmatrix(arr2,row, col);
	
}
bool myequal(int arr1[3][3], int arr2[3][3], short row, short col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr1[i][j] != arr2[i][j])
				return false;
			
		}
	}
	return true;
}
bool identity(int arr1[3][3], short row, short col) {
	int num = arr1[0][0];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			
			if (i == j && arr1[i][j] != num) 
				return false;
			
			if (i != j && arr1[i][j] != 0) 
			return false;
		}

	}
	return true;
}
int count(int arr[3][3], short row, short col,int num) {
	int count = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if ( arr[i][j]==num)
				count++;
		}
	}
	return count;
}
bool isspare(int arr[3][3], short row, short col) {
	short spa = row * col;
	return (count(arr, 3, 3, 0) >= (ceil)((float)spa / 2));
}
bool sarech(int arr[3][3], short row, short col,int num) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == num)
				return true;
		}
	}
	return false;
}
void inter(int arr1[3][3], int arr2[3][3], short row, short col) {
	int num = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <col ; j++)
		{
			num = arr1[i][j];
			if(sarech(arr2, 3, 3, num)) {
				cout <<setw(3)<< num<<"   ";
			}
		}
	}
	
}
int min(int arr1[3][3], short row, short col) {
	int num = arr1[0][0];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <col ; j++)
		{
			if (num >= arr1[i][j])
				num = arr1[i][j];

		}

	}
	return num;
}
int max(int arr1[3][3], short row, short col) {
	int num = arr1[0][0];
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (num <= arr1[i][j]) {
				num = arr1[i][j];
			}
		}

	}
	return num;
}
bool pli(int arr1[3][3], short col, short row) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col/2; j++)
		{
			if (arr1[i][j] != arr1[i][col - i - 1])
				return false;
		}
	}
	return true;
}
int main()
{
	srand((unsigned)time(NULL));
	int arr1[3][3], arr2[3][3];
    fillmatrix1(arr1, 3, 3);
	cout << "Matrix1:\n";
	print(arr1, 3, 3);
	cout << endl;
/*	int num;
	cout << "please enter your number:";
	cin >> num;*/
   /* fillmatrix1(arr2, 3, 3);
	cout << "Matrix2:\n";
	print(arr2, 3, 3);
	cout << endl;*/
	/*if (identity(arr1, 3, 3))
		cout << "scalar";
	else
		cout << "not scalar";*/
	
	//if (isspare(arr1,3,3))
	//	cout << "sparse";
	//else
	//	cout << "not sparse";
	/*if (sarech(arr1, 3, 3, num))
		cout << "exist";
	else
		cout << "not exist";*/
	//inter(arr1, arr2, 3, 3);
	if (pli(arr1, 3, 3))
		cout << "is is\n";
	else
		cout << "not ";





























	/*if (myequal(arr1, arr2, 3, 3))
		cout << "are equal";
	else
		cout<<"are not equal";*/

	/*if (equallling(arr1, arr2, 3, 3))
		cout << "yes: matrices are equal" << endl;
	else
		cout << "No: matrices are NOT equal" << endl;
*/














	//cout << sumallmatrix(arr1, 3, 3);
	//printmidrow(arr1, 3,3);
	//cout << endl;
	//printmidcol(arr1, 3,3);
	//cout << endl;
	//cout << "Matrix2:\n";
	//fillmatrix1(arr2, 3, 3);
	//print(arr2, 3, 3);
	//cout << "Result:\n";
	//mul(resarr,arr1, arr2, 3, 3);
	//print(resarr, 3, 3);
	/*int arr[3][3];
	int tranarr[3][3];
	fillarrary(arr, 3, 3);
	cout << endl;
	print(arr, 3, 3);
	cout << endl << endl;
	tran(arr,tranarr, 3, 3);
	cout << endl;
	print(tranarr, 3, 3);*/
	/*srand((unsigned)time(NULL));
	int arr[3][3];
	int arr1[3];
	fill(arr, 3, 3);
	cout << " the following is a 3x3 random matrix:\n";
	print(arr, 3, 3);
	cout << endl;
	sumcolarr(arr, arr1, 3, 3);
	printcoll(arr1, 3);
	//summatrixrows(arr, arr1, 3, 3);
	//printfull(arr1, 3);*/
	
}
