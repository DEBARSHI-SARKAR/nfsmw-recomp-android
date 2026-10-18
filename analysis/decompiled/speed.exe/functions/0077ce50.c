/* speed.exe 0077ce50 FUN_0077ce50; analysis pseudocode, not buildable source.
 * calls 00779ea0 FUN_00779ea0
 */

void __fastcall FUN_0077ce50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    FUN_00779ea0(*(undefined4 *)(*(int *)(iVar1 + 4) + 4));
    *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 4) + 8) = *(int *)(iVar1 + 4);
  }
  return;
}

