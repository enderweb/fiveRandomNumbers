#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(int argc, char *argv[]) 
{
	//Re-seed number generator//
	time_t now;
	time(&now);
	srand(now);
	rand();
	//Print out a list of random numbers//
	for (int i=0; i<5; i++) {
		cout << rand() % 100 << endl;
	}
	return 0;
}
