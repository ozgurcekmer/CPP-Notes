#pragma once

#include <vector>
#include <iostream>

template <typename T>
class VectorPrint
{
private:

public:
	void operator() (const std::vector<T> &vec) const;
};