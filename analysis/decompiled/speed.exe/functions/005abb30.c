/* speed.exe 005abb30 FUN_005abb30; analysis pseudocode, not buildable source.
 * calls 00594520 FUN_00594520
 */

int __fastcall FUN_005abb30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00594520();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

