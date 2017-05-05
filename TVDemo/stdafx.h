// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: reference additional headers your program requires here

#include <iostream>
#include <cstring>
#include <iomanip>

class TV
{
public:
	TV(const char *, int = 30, int = 0);
	TV(const TV&);
	void display();
	static void display(TV&);
	~TV();

private:
	char *brand;
	int size;
	int duration;

};
