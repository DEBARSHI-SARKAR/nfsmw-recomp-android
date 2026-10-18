/* speed.exe 0060bcf0 FUN_0060bcf0; analysis pseudocode, not buildable source.
 * calls 00613970 FUN_00613970
 * calls 00607b60 FUN_00607b60
 * calls 00607bb0 FUN_00607bb0
 */

int FUN_0060bcf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00613970(param_1,0,0,0x20,5);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x38);
  *(undefined1 *)(iVar1 + 6) = 0xff;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 7) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  FUN_00607b60(param_1);
  FUN_00607bb0(param_3);
  return iVar1;
}

