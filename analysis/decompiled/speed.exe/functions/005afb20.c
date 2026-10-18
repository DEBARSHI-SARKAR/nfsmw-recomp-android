/* speed.exe 005afb20 FUN_005afb20; analysis pseudocode, not buildable source.
 */

char * __fastcall FUN_005afb20(char *param_1)

{
  ulonglong uVar1;
  uint in_EAX;
  uint uVar2;
  
  uVar2 = 1;
  if (in_EAX != 0) {
    do {
      uVar2 = uVar2 * 10;
    } while (uVar2 < in_EAX || uVar2 - in_EAX == 0);
  }
  while (uVar2 = uVar2 / 10, uVar2 != 0) {
    uVar1 = (ulonglong)in_EAX;
    in_EAX = in_EAX - (int)(uVar1 / uVar2) * uVar2;
    *param_1 = (char)(uVar1 / uVar2) + '0';
    param_1 = param_1 + 1;
  }
  *param_1 = '\0';
  return param_1;
}

