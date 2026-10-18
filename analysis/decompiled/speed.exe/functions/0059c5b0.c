/* speed.exe 0059c5b0 FUN_0059c5b0; analysis pseudocode, not buildable source.
 * calls 005945c0 FUN_005945c0
 */

void __fastcall FUN_0059c5b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005945c0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

