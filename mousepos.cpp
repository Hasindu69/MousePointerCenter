#include <windows.h>

int main() {
  // Get the screen width and height
  int screenWidth = GetSystemMetrics(SM_CXSCREEN);
  int screenHeight = GetSystemMetrics(SM_CYSCREEN);

  // Calculate the center coordinates
  int centerX = screenWidth / 2;
  int centerY = screenHeight / 2;

  // Set the mouse position to the center coordinates
  SetCursorPos(centerX, centerY);

  return 0;
}