#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
	int ghoul = 1000;
	while(ghoul > 6) {
		cout << ghoul << "-7=" << ghoul-7 << endl;
		ghoul -= 7;
		sleep(1);
	}
	cout << "let me die";
}
