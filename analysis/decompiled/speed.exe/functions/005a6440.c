/* speed.exe 005a6440 FUN_005a6440; analysis pseudocode, not buildable source.
 * calls 00594520 FUN_00594520
 */

int __fastcall FUN_005a6440(int param_1)

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

