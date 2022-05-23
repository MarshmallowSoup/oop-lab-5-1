#pragma once
#include "Pair.h"
class BitString :
	public Pair
{
	BitString operator ++();
	BitString operator --();
	BitString operator ++(int);
	BitString operator --(int);

	friend BitString operator ! (BitString obj);
	friend BitString operator | (BitString obj1, BitString obj2);
	friend BitString operator & (BitString obj1, BitString obj2);
};

