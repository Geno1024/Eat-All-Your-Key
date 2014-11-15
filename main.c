#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int a;
    for(a=0;a<255;a++)
    {
        keybd_event(a,KEYEVENTF_KEYUP,0,0);
    }
    return 0;
}
