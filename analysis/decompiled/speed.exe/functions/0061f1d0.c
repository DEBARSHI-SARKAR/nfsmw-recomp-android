/* speed.exe 0061f1d0 FUN_0061f1d0; analysis pseudocode, not buildable source.
 * calls 0060cc50 FUN_0060cc50
 */

int __fastcall FUN_0061f1d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0060cc50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

