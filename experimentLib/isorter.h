#pragma once

#ifdef _EXPORTING
   #define CLASS_DECLSPEC    __declspec(dllexport)
#else
   #define CLASS_DECLSPEC    __declspec(dllimport)
#endif

using namespace std;

class CLASS_DECLSPEC ISorter 
{

public:
	ISorter() {};	
	~ISorter() {};

	virtual	void sort() = 0;
};
