#include "constants.h"

// ʹ��Cheat Engine��ReclassѰ�ҵ�ǰ��ҵ�EntityList LocalPlayer ViewMatrix
HMODULE hModule = GetModuleHandle(nullptr);
uintptr_t exeBaseAddress = (uintptr_t)GetModuleHandle(nullptr);


Player* localPlayerPtr = *(Player**)(exeBaseAddress + 0x0018AC00);