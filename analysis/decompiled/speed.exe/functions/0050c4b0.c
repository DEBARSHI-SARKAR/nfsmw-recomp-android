/* speed.exe 0050c4b0 FUN_0050c4b0; analysis pseudocode, not buildable source.
 * calls 005047f0 FUN_005047f0
 */

int __fastcall FUN_0050c4b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005047f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

