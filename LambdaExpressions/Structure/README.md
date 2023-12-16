# Structure of a Lambda Expression
## Structure
```
[] () -> return_type specifiers {};
```
- **[]:** Capture list - beginning of lambda
- **():** Parameter list
- **return_type:** Return type - can be omitted
- **specifiers:** Optional specifiers - mutable & constexpr
- **{}:** body
### Examples
```
[] () { std::cout << "Hi"; } ();
// Displays "Hi"
```
```
[] (int x) { std::cout << x; };
[] (int x, int y) { std::cout << x + y; };
```
```
auto l = [] () { std::cout << "Hi"; };
l(); // Displays "Hi"
```
```
auto l = [] (int x) { std::cout << x; };

l(10);  // displays 10
l(100); // displays 100
```
```
auto l = [] (int x, int y) -> int { return x + y; };
// or
auto l = [] (int x, int y) { return x + y; }; // MORE COMMON

std::cout << l(2, 3);   // displays 5
std::cout << l(10, 20); // displays 30
```