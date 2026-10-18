/* speed.exe 005f6ee0 FUN_005f6ee0; analysis pseudocode, not buildable source.
 * calls 005e6a30 FUN_005e6a30
 */

int __fastcall FUN_005f6ee0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005e6a30();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

