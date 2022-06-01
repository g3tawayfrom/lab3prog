#include <iostream>
#include "lab1.h"

using namespace std;

namespace lab
{
	Matrix::Matrix() {}

	Matrix::Matrix()
	{
		array = new float* [n];
		for (int i = 0; i < n; i++)
		{
			array[i] = new float[m];
		}
	}

	void Matrix::set()
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> array[i][j];
			}
		}
	}

	void Matrix::setE(int n, int m, float x)
	{
		array[n][m] = x;
	}

	float Matrix::getE(int n, int m)
	{
		return array[n][m];
	}

	void Matrix::output()
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << array[i][j] << " ";
			}
			cout << endl;
		}
	}
}