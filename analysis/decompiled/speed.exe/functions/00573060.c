/* speed.exe 00573060 FUN_00573060; analysis pseudocode, not buildable source.
 * calls 00460c50 FUN_00460c50
 */

void FUN_00573060(undefined1 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00460c50(param_3);
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

