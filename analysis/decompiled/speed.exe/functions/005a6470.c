/* speed.exe 005a6470 FUN_005a6470; analysis pseudocode, not buildable source.
 * calls 00594570 FUN_00594570
 */

int __fastcall FUN_005a6470(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00594570();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

