/* speed.exe 0045cc70 FUN_0045cc70; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004c OutputDebugStringA
 * calls 007c5e60 _printf
 */

void FUN_0045cc70(char param_1,LPCSTR param_2)

{
  char cVar1;
  
  if (DAT_0090e630 != 0) {
    if ((DAT_0090e634 != (code *)0x0) && (DAT_0090e638 == '\0')) {
      DAT_0090e638 = 1;
      cVar1 = (*DAT_0090e634)((int)param_1,param_2);
      DAT_0090e638 = '\0';
      if (cVar1 != '\0') {
        DAT_0090e638 = 0;
        return;
      }
    }
    _printf("%s",param_2);
    OutputDebugStringA(param_2);
  }
  return;
}

