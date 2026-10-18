/* speed.exe 005f7d00 FUN_005f7d00; analysis pseudocode, not buildable source.
 * calls 005e6e40 FUN_005e6e40
 */

int __fastcall FUN_005f7d00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005e6e40();
  *(int *)(param_1 + 8) = iVar1;
  *(undefined1 *)(iVar1 + 0xf) = 1;
  *(int *)(*(int *)(param_1 + 8) + 4) = *(int *)(param_1 + 8);
  *(undefined4 *)*(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 8);
  *(int *)(*(int *)(param_1 + 8) + 8) = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return param_1;
}

