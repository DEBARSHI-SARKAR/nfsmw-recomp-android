/* speed.exe 0067aa10 FUN_0067aa10; analysis pseudocode, not buildable source.
 * calls 00675ab0 FUN_00675ab0
 */

void __fastcall FUN_0067aa10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00675ab0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

