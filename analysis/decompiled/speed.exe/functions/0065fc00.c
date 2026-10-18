/* speed.exe 0065fc00 FUN_0065fc00; analysis pseudocode, not buildable source.
 * calls 0065cfa0 FUN_0065cfa0
 */

int __fastcall FUN_0065fc00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0065cfa0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

