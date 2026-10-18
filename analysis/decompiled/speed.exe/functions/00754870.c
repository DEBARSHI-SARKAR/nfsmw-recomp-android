/* speed.exe 00754870 FUN_00754870; analysis pseudocode, not buildable source.
 * calls 0074cd10 FUN_0074cd10
 */

void __fastcall FUN_00754870(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074cd10();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

