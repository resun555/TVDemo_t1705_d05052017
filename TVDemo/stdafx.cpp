// stdafx.cpp : source file that includes just the standard includes
// TVDemo.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file


TV::TV(const char *brandSyncer, int sizeSyncer,  int durationSyncer) : 
	                                                                   brand(new char[strlen(brandSyncer) + 1]), 
	                                                                   size(sizeSyncer), duration(durationSyncer)
{
	strcpy(brand, brandSyncer);
}


TV::TV(const TV& tvSyncer) : 
	                         brand(new char[strlen(tvSyncer.brand) + 1]), 
	                         size(tvSyncer.size), 
	                         duration(tvSyncer.duration)
{
	strcpy(brand, tvSyncer.brand);
}


void TV::display()
{
	std::cout << std::setw(10) << "Brand: " << brand << std::endl;
	std::cout << std::setw(10) << "Size: " << size << std::endl;
	std::cout << std::setw(10) << "Duration: " << duration << std::endl;
}


void TV::display(TV& tv)
{
	std::cout << std::setw(10) << "Brand: " << tv.brand << std::endl;
	std::cout << std::setw(10) << "Size: " << tv.size << std::endl;
	std::cout << std::setw(10) << "Duration: " << tv.duration << std::endl;
}


TV::~TV()
{
	duration = 0;
	size = 0;
	delete[] brand;
}
