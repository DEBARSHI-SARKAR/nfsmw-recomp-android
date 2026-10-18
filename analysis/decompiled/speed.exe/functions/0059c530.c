/* speed.exe 0059c530 FUN_0059c530; analysis pseudocode, not buildable source.
 * calls 00594520 FUN_00594520
 */

void __fastcall FUN_0059c530(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00594520();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

