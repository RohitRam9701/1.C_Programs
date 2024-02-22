#include <windows.h>
int main()
{
    // Path to the program or file you want to open
    const char* filePath = "C:\\Program Files\\Microsoft PC Manager\\MSPCManager.exe";

    // Use ShellExecute to open the program or file
    HINSTANCE result = ShellExecute(NULL, "open", filePath, NULL, NULL, SW_SHOW);

    // Check if the operation was successful
    if ((int)result > 32)
    {
        printf("Program opened successfully.\n");
    }
    else
    {
        printf("Failed to open the program.\n");
    }

    return 0;
}


//C:/Program Files (x86)/eScan/ShortCut.EXE