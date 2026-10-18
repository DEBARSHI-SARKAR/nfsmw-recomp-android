/* speed.exe 00610000 FUN_00610000; analysis pseudocode, not buildable source.
 * calls 0060cac0 FUN_0060cac0
 */

void __fastcall FUN_00610000(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0060cac0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

