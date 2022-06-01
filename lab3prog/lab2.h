#pragma once
#include <vector>

namespace lab
{
	class block
	{
	private:
		int n = 0;
		int* array;
	public:
		block();
		block(int);
		block(int*);
		void add(int, int);
		int get(int);
		int length();
	};

	block operator + (block, block);

	bool operator == (block, block);

	bool operator != (block, block);

	bool operator > (block, block);

	bool operator < (block, block);
}

