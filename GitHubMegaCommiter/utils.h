#pragma once
#include <Windows.h>
#include <iostream>

LRESULT KBCallBack(int code, WPARAM wParam, LPARAM lParam);

static HHOOK hook;