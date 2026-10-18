/* speed.exe 0067a9e0 FUN_0067a9e0; analysis pseudocode, not buildable source.
 * calls 00675a10 FUN_00675a10
 */

void __fastcall FUN_0067a9e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00675a10();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

