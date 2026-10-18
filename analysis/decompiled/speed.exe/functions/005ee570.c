/* speed.exe 005ee570 FUN_005ee570; analysis pseudocode, not buildable source.
 * calls 005e6b90 FUN_005e6b90
 */

int __fastcall FUN_005ee570(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005e6b90();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

