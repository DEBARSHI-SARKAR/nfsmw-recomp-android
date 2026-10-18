/* speed.exe 006e1ab0 FUN_006e1ab0; analysis pseudocode, not buildable source.
 * calls 006dd6f0 FUN_006dd6f0
 */

void __fastcall FUN_006e1ab0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006dd6f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

