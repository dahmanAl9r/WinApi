#include <windows.h>
const char g_szClassName[] = "MyWindowClass";
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow){
    /*تسجيل فئة النافذة-1*/
    WNDCLASSEX wc;
    wc.cbSize = sizeof(WNDCLASSEX);
    wc.style = 0;
    wc.lpfnWndProc = WNDPROC;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon(NULL,IDI_APPLICATION);
    wc.hCursor = LoadCursor(NULL,IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = g_szClassName;
    wc.hIconSm = LoadIcon(NULL,IDI_APPLICATION);

    if(!RegisterClassEx(&wc)){
        MessageBox(NULL,"Window Register Failed","Error!",MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }
    /*الخطوة 2 : انشاء النافذة*/
    HWND hwnd;
    hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,g_szClassName,
                         "The title of my Window",
                         WS_OVERLAPPEDWINDOW,
                         CW_USEDEFAULT,CW_USEDEFALUT,240,120,
                         NULL,NULL,hInstance,NULL);
    if (hwnd = NULL){
        MessageBox((NULL,"Window Create Failed !","Error!",MB_ICONEXCLAMATION | MB_OK));
        return 0;
    }

}
