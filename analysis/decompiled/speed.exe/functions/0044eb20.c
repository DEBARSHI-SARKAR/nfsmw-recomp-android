/* speed.exe 0044eb20 FUN_0044eb20; analysis pseudocode, not buildable source.
 * calls 0044d510 FUN_0044d510
 */

int __thiscall FUN_0044eb20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_009260d8 == 0) && (DAT_0090d9ec == '\0')) {
    if (*(char *)(param_1 + 0x14) == '\0') {
      FUN_0044d510();
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x2c) + -4;
    }
    while( true ) {
      if (param_1 == -0x2c) {
        iVar2 = 0;
      }
      else {
        iVar2 = param_1 + 0x28;
      }
      if (iVar1 == iVar2) goto LAB_0044eb7a;
      if (*(int *)(iVar1 + 0xc) == param_2) break;
      if (*(int *)(iVar1 + 4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 4) + -4;
      }
    }
  }
  else {
LAB_0044eb7a:
    iVar1 = 0;
  }
  return iVar1;
}

