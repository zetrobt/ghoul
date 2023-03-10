#include <cstdio>
#include <unistd.h>

int main()
{
	int ghoul = 1000;
	while(ghoul > 6) {
		printf("%d-7=%d\n", ghoul, ghoul-7);
		ghoul -= 7;
		sleep(1);
	}
	printf("let me die");
}
