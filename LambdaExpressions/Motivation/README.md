# C++ Lambda Expressions
## Motivation
- Prior to C++11
    - Function objects
    - Function pointers
    - Many short functions are written that control algorithm
    - These short functions would be encapsulated in small classes to produce function objects
    - Many times the classes and functions are far removed from where they are used leading to modification, maintenance, and testing issues
    - Compiler cannot effectively inline these functions for efficiency
### Example
```
class Multiplier
{
private:
    int num{};

public:
    Multiplier(int n) : num{n} {}
    int operator() (int n) const
    {
        return num * n;
    }
};
```
```
std::vector<int> vec {1, 2, 3, 4};
Multiplier mult{10};

std::transform(vec.begin(), vec.end(), vec.begin(), mult);

// vec now contains {10, 20, 30, 40}

```