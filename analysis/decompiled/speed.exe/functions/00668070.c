/* speed.exe 00668070 FUN_00668070; analysis pseudocode, not buildable source.
 * calls 00782f10 FUN_00782f10
 * calls 005d06a0 FUN_005d06a0
 */

void __thiscall FUN_00668070(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  
  FUN_00782f10(param_2,param_3);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x24) = param_4;
  FUN_005d06a0(param_2,*(int *)(param_1 + 4) + 0x14);
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_2 + 0x38);
  return;
}

