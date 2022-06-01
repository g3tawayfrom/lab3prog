#include <iostream>
#include "lab1.h"

using namespace std;

namespace lab 
{
	Matrix operator * (Matrix m, float x)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				m.setE(i, j, m.getE(i, j) * x);
			}
		}

		return m;
	}

	Matrix operator + (Matrix m1, Matrix m2)
	{
		Matrix m;

		m = Matrix();

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				m.setE(i, j, m1.getE(i, j) + m2.getE(i, j));
			}
		}

		return m;
	}

	Matrix operator - (Matrix m1, Matrix m2)
	{
		Matrix m;

		m = Matrix();

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				m.setE(i, j, m1.getE(i, j) - m2.getE(i, j));
			}
		}

		return m;
	}

	Matrix operator * (Matrix m1, Matrix m2)
	{
		Matrix m;

		m = Matrix();

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				float sum = 0;
				for (int k = 0; k < 3; k++)
				{
					sum += m1.getE(i, k) * m2.getE(k, j);
				}
				m.setE(i, j, sum);
			}
		}

		return m;
	}

	bool operator == (Matrix m1, Matrix m2)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (m1.getE(i, j) != m2.getE(i, j))
				{
					return false;
				}
			}
		}
		return true;
	}

	bool operator != (Matrix m1, Matrix m2)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (m1.getE(i, j) != m2.getE(i, j))
				{
					return true;
				}
			}
		}
		return false;
	}

	bool operator > (Matrix m1, Matrix m2)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (m1.getE(i, j) - m2.getE(i, j) < 0)
				{
					return false;
				}
			}
		}
		return true;
	}

	bool operator < (Matrix m1, Matrix m2)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (m1.getE(i, j) - m2.getE(i, j) < 0)
				{
					return true;
				}
			}
		}
		return false;
	}
}