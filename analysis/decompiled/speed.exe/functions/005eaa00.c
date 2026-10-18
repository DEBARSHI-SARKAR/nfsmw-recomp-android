/* speed.exe 005eaa00 FUN_005eaa00; analysis pseudocode, not buildable source.
 * calls 005e6e80 FUN_005e6e80
 */

void __fastcall FUN_005eaa00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005e6e80();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

