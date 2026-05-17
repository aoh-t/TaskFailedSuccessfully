#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdHide) {
    // Arguments: HWND (owner window), Text, Title, Flags
    MessageBox(
        NULL,
        "Task failed successfully.",
        "Fatal Error",
        MB_OK | MB_ICONWARNING
    );
    return 0;
}
