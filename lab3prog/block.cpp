#include <iostream>
#include "lab2.h"

using namespace std;

namespace lab
{
	block::block() 
	{
		array = new int[0];
	};

	block::block(int x)
	{
		n = x;
		array = new int[x];
	}

	block::block(int* array)
	{
		n = sizeof array;
		this->array = array;
	}

	void block::add(int x, int i)
	{
		array[i] = x;
	}

	int block::get(int i)
	{
		return array[i];
	}

	int block::length()
	{
		return n;
	}
}