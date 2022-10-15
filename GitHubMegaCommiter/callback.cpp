#include "utils.h"

LRESULT KBCallBack(int code, WPARAM wParam, LPARAM lParam)
{
	
	if (code >= 0)
		if (wParam == WM_KEYDOWN)
		{
			system("git add . && git commit -am \"da\" && git push");
		}
			

	return CallNextHookEx(hook, code, wParam, lParam);
}