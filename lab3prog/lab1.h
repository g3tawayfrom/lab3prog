#pragma once

namespace lab 
{
	class Matrix
	{
	private:
		int n = 3, m = 3;
		float** array;
	public:
		Matrix();
		void set();
		void setE(int, int, float);
		float getE(int, int);
		void output();
	};

	Matrix operator * (Matrix, float);

	Matrix operator + (Matrix, Matrix);

	Matrix operator - (Matrix, Matrix);

	Matrix operator * (Matrix, Matrix);

	bool operator == (Matrix, Matrix);

	bool operator != (Matrix, Matrix);

	bool operator > (Matrix, Matrix);

	bool operator < (Matrix, Matrix);
}