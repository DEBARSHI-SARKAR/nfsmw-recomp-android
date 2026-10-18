/* speed.exe 005910a0 FUN_005910a0; analysis pseudocode, not buildable source.
 * calls 005816b0 FUN_005816b0
 */

uint __thiscall FUN_005910a0(int *param_1,int param_2)

{
  uint in_EAX;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 == param_2) {
      in_EAX = FUN_005816b0();
      if (in_EAX == 0x29) {
        return 1;
      }
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 5;
  } while (iVar1 < 200);
  return in_EAX & 0xffffff00;
}

