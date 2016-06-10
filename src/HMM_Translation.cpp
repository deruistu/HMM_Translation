//============================================================================
// Name        : HMM_Translation.cpp
// Author      : derui
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct alignmentTable
{
	int i;
	int i_hat;
	int J;
	int I;
};

struct lexiconTable{
	int src_word;
	int trg_word;
};

int main() {

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
