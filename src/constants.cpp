#include "constants.h"

// 使用Cheat Engine、Reclass寻找当前玩家的EntityList LocalPlayer ViewMatrix
HMODULE hModule = GetModuleHandle(nullptr);
uintptr_t exeBaseAddress = (uintptr_t)GetModuleHandle(nullptr);


Player* localPlayerPtr = *(Player**)(exeBaseAddress + 0x0018AC00);