/* speed.exe 005abb90 FUN_005abb90; analysis pseudocode, not buildable source.
 * calls 005945c0 FUN_005945c0
 */

int __fastcall FUN_005abb90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005945c0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

