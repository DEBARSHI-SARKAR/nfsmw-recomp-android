/* speed.exe 005730a0 FUN_005730a0; analysis pseudocode, not buildable source.
 * calls 00461160 FUN_00461160
 */

void FUN_005730a0(undefined1 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00461160(param_3);
  if (iVar1 < 1) {
    *param_1 = 0;
    return;
  }
  iVar2 = 0;
  do {
    if (iVar2 == param_2 + -1) break;
    param_1[iVar2] = 0x2a;
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar1);
  param_1[iVar2] = 0;
  return;
}

