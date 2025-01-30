// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include <iostream>
#include <Windows.h>

#include "constants.h"
#include "genCode.h"

void GameHook()
{

}

void GameConsole()
{
    AllocConsole();

    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);
    freopen_s(&f, "CONIN$", "r", stdin);
    std::cout << "Console Created!" << std::endl;

    while (true)
    {
        std::string input;
        std::cin >> input;
        if (input == "exit")
        {
            break;
        }
        if (input == "up")
        {
            localPlayerPtr->pos.y += 5;
        }
        if (input == "down")
        {
            localPlayerPtr->pos.y -= 5;
        }
        if (input == "print")
        {
            std::cout << "Local  Player Ptr " << localPlayerPtr << std::endl;
        }
    }

    FreeConsole();
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)GameConsole, nullptr, 0, nullptr);
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)GameHook, nullptr, 0, nullptr);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

