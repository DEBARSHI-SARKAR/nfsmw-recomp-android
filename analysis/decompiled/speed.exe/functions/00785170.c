/* speed.exe 00785170 FUN_00785170; analysis pseudocode, not buildable source.
 * calls 00772030 FUN_00772030
 */

int __fastcall FUN_00785170(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00772030();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

