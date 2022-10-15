#include <Windows.h>

int main()
{
	ShowWindow(GetConsoleWindow(), 1);

	while (true)
		system("git add . && git commit -am \"da\" && git push");

	return 0;
}