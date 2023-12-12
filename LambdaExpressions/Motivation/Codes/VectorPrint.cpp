#include "VectorPrint.h"

using std::cout;
using std::endl;

template <typename T>
void VectorPrint<T>::operator() (const std::vector<T>& vec) const
{
	for (auto i : vec)
	{
		cout << i << " ";
	}
	cout << endl;
}

template void VectorPrint<float>::operator() (const std::vector<float>& vec) const;
template void VectorPrint<double>::operator() (const std::vector<double>& vec) const;
template void VectorPrint<int>::operator() (const std::vector<int>& vec) const;