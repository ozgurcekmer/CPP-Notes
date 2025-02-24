# C++ Lambda Expressions
## Motivation Code
- Two classes are written 
    1. Multiplier
    2. VectorPrint
- Each of these classes has an overloaded operator() member function
- Lambda functions can be used to eliminate the need of these classes
- Easier maintenance & modification

```
class Multiplier
{
private:
  int num{};

public:
  Multiplier(int n) : num {n} {}
  int operator() (int n) const
  {
    return num*n;
  }
};
```

```
vector<int> vec {1, 2, 3, 4};
Multiplier mult{10};

transform(vec.begin(), vec.end(), vec.begin(), mult);
// or
// transform(vec.begin(), vec.end(), vec.begin(), Multiplier(10));

// vec now contains {10, 20, 30, 40}
```

- Another example
```
template <typename T>
struct Displayer
{
  void operator() (const T &data)
  {
    cout << data << " ";
  }
};
```
```
Displayer<int> d1;
Displayer<string> d2;

d1(100);
// d1.operator(100);
// displays 100

d2("Frank");
// d2.operator("Frank");
// displays Frank
```