#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <Winuser.h>

int main() {
  for (size_t i = 0; i < 100; i++) {
    HWND wh = GetConsoleWindow();
    MoveWindow(wh, 100, 100, 640, 250, TRUE);
    printf("%s", "asdfdsfasd");

  }
}
