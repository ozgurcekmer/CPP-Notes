# Regular Expressions (Notes from Section 17.3 of C++ Primer 5e by Lippman, Lajoie, Moo)
## C++ Regular Expression (RE) Library
- Defined in ***regex*** header
- Has the following components

| component | explanation |
|:-----|:-----|
| ***regex*** | Class that represents a regular expression |
| ***regex_match*** | Matches a sequence of characters against a regular expression |
| ***regex_search*** | Finds the first subsequence that matches the regular expression |
| ***regex_replace*** | Replaces a regular expression using a given format |
| ***regex_iterator*** | Iterator adaptor that calls ***regex_search*** to iterate through the matches in a *string* |
| ***smatch*** | Container class that holds the results of searching a *string* |
| ***ssub_match*** | Results for a matched subexpression in a *string* |

## Example: ***test.cpp***
```
1 // Find the chars ei that follow a char other than c
2 string pattern("[^c]ei");
3 
4 // We want the whole word in which our pattern appears
5 pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
6 
7 // construc a regex to find pattern
8 regex r(pattern);
9 
10 // define an object to hold the result of a search
11 smatch results;

12 // define a string that has text to be investigated
13 string testStr = "receipt freind theif receive";

14 // Use r to find a match to pattern in testStr
15 if (regex_search(testStr, results, r)) // if there is a match
16 {
17	cout << results.str() << endl; // print the matching word
18 }
```
- *Line 2:* 
  - A string "pattern" to hold the regex we want to find
  - This is to find only three chars; something other than c, and then e and i
  - Entire word that contains these three chars is needed
  - The pattern [[:alpha:]] matches any alphabetic character, 
    - The symbol + is for 1 or more matches 
    - The symbol * is for 0 or more matches
- *Line 5:*
  - [[:alpha:]]* matches 0 or more chars
- *Line 8:*
  - Our regex is stored in *pattern*
  - *pattern* is used to initialise a regex object named *r*
- *Line 11:*
  - An *smatch* object (results) is defined to be passed into ***regex_search***
  - If a match is found, ***results*** will hold the details
  - The details can be printed with *results.str()*
- *Line 13:*
  - A test string to investigate is defined.