#include <iostream>
#include <string>
#include <regex>

using std::cout;
using std::endl;
using std::string;
using std::regex;
using std::smatch;
using std::regex_search;

int main()
{
	// Find the chars ei that follow a char other than c
	string pattern("[^c]ei");

	// We want the whole word in which our pattern appears
	pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	
	// construc a regex to find pattern
	regex r(pattern);

	// define an object to hold the result of a search
	smatch results;

	// define a string that has text to be investigated
	string testStr = "receipt freind theif receive";

	// Use r to find a match to pattern in testStr
	if (regex_search(testStr, results, r)) // if there is a match
	{
		cout << results.str() << endl; // print the matching word
	}

  // First try to GPU stuff
  string patternGpu("gpu");

  // GPU solver names should start with "gpu"
  patternGpu = patternGpu + "[[:alpha:]]*";
  regex rGpu(patternGpu);
  smatch resultsGpu;
  string gpuStr0 = "GpuSolver";
  string gpuStr1 = "gpuSolver";
  string gpuStr2 = "gpuReduction";
  string gpuStr3 = "cpuGgpu";
  string gpuStr4 = "CpuSg";

  cout << gpuStr0 << ": " << regex_search(gpuStr0, resultsGpu, rGpu) << endl;
  cout << gpuStr1 << ": " << regex_search(gpuStr1, resultsGpu, rGpu) << endl;
  cout << gpuStr2 << ": " << regex_search(gpuStr2, resultsGpu, rGpu) << endl;
  cout << gpuStr3 << ": " << regex_search(gpuStr3, resultsGpu, rGpu) << endl;
  cout << gpuStr4 << ": " << regex_search(gpuStr4, resultsGpu, rGpu) << endl;

}