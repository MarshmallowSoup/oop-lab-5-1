#pragma once
#include "BaseBitString.h"
class OpenBitString :
	public BaseBitString
{
public:
	OpenBitString operator ++();
	OpenBitString operator --();
	OpenBitString operator ++(int);
	OpenBitString operator --(int);
	OpenBitString& operator = (const OpenBitString& obj);

	friend OpenBitString operator ! (OpenBitString obj);
	friend OpenBitString operator | (OpenBitString obj1, OpenBitString obj2);
	friend OpenBitString operator & (OpenBitString obj1, OpenBitString obj2);
};

