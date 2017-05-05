// TVDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	TV *zhang = new TV("TCL", 29, 94608000);
	TV *li = new TV(*zhang);
	zhang->display();
	li->display();
	TV::display(*zhang);
	TV::display(*li);
	delete li;
	delete zhang;
    return 0;
}

