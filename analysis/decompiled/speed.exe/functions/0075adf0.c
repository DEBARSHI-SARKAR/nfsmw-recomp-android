/* speed.exe 0075adf0 thunk_FUN_0075adb0; analysis pseudocode, not buildable source.
 */

void thunk_FUN_0075adb0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_009b2a10 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_009b2a10 + -0x10;
  }
  while (iVar1 != 0x9b2a00) {
    FUN_0075abd0(param_1);
    if (*(int *)(iVar1 + 0x10) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x10) + -0x10;
    }
  }
  return;
}

