#include "../include/functions.h"

using namespace std;

void draw()
{
	for (int i=0; i != 13; ++i)
	{
		if (i % 12 == 0)
			cout << "-------------------------\n";
		else cout << "|\t\t\t|\n";
	}
}
