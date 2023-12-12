#include <iostream>
#include <vector>
#include <algorithm>

#include "Multiplier.h"
#include "VectorPrint.h"

using std::cout;
using std::endl;
using std::vector;
using std::transform;
using std::for_each;

int main()
{
    typedef float T;
    VectorPrint<T> vPrint;

    vector<T> v1{ 1, 2, 3, 4 };
    Multiplier<T> mult{ 10 };
    vPrint(v1);
    transform(v1.begin(), v1.end(), v1.begin(), mult);
    vPrint(v1);

    // Use LAMBDAS instead
    // Eliminate Multiplier and VectorPrint class usage
    v1 = { 1, 2, 3, 4 };
    for_each(v1.begin(), v1.end(),
        [](T x) { cout << x << " "; });
    cout << endl;
    transform(v1.begin(), v1.end(), v1.begin(),
        [](T x) { return x * 10; });
    for_each(v1.begin(), v1.end(),
        [](T x) { cout << x << " "; });
    cout << endl;
}
