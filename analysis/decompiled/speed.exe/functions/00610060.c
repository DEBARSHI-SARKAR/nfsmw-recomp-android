/* speed.exe 00610060 FUN_00610060; analysis pseudocode, not buildable source.
 * calls 0060cc50 FUN_0060cc50
 */

void __fastcall FUN_00610060(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0060cc50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

