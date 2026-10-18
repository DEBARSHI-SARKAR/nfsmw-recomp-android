/* speed.exe 00652e70 FUN_00652e70; analysis pseudocode, not buildable source.
 * calls 00652d40 FUN_00652d40
 */

void __fastcall FUN_00652e70(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((0 < iVar1) && (iVar1 < 7)) {
    FUN_00652d40(*(undefined4 *)(param_1 + 4));
    *(int *)(param_1 + 8) = iVar1;
  }
  return;
}

