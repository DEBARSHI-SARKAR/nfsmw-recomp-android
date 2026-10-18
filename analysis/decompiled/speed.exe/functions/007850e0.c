/* speed.exe 007850e0 FUN_007850e0; analysis pseudocode, not buildable source.
 * calls 00771eb0 FUN_00771eb0
 */

int __fastcall FUN_007850e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00771eb0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

