#include <stdio.h>
#include <stdlib.h>
int main(){
    system("xcopy /y stsupport.exe %windir% > nul");
    system("xcopy /y stsupport.ico %windir% > nul");
    system("xcopy /y stsupport.html %windir% > nul");
    system("reg import softech.reg > nul");
    system("del softech.reg stsupport.exe stsupport.ico stsupport.html > nul");
    system("echo ping 192.0.28.9 -n 1 -w 3000 > %temp%\\ssfi.bat");
    system("echo cls >> %temp%\\ssfi.bat");
    system("echo del %cd%\\Instalador.exe >> %temp%\\ssfi.bat");
    system("echo cls >> %temp%\\ssfi.bat");
    system("echo del %cd%\\SuporteSoftech.zip >> %temp%\\ssfi.bat");
    system("echo exit >> %temp%\\ssfi.bat");
    system("start %temp%\\ssfi.bat");
}
