/* speed.exe 00430170 FUN_00430170; analysis pseudocode, not buildable source.
 * calls 0041c8a0 FUN_0041c8a0
 */

int __fastcall FUN_00430170(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041c8a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0xf) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

