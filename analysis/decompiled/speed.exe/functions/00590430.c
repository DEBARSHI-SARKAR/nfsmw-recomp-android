/* speed.exe 00590430 FUN_00590430; analysis pseudocode, not buildable source.
 * calls 00580f40 FUN_00580f40
 */

int __thiscall FUN_00590430(int param_1,char param_2)

{
  int iVar1;
  ushort uVar2;
  undefined **local_14;
  char local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00872818;
  local_c = ExceptionList;
  if (param_2 == '\0') {
    uVar2 = *(short *)(param_1 + 0x8cc6) + *(short *)(param_1 + 0x8cc4) +
            *(short *)(param_1 + 0x8cc2) + *(short *)(param_1 + 0x8cc0) +
            *(short *)(param_1 + 0x8cbe) + *(short *)(param_1 + 0x8cbc) +
            *(short *)(param_1 + 0x8cba) + *(short *)(param_1 + 0x8cb8);
  }
  else {
    uVar2 = *(short *)(param_1 + 0x8cb6) + *(short *)(param_1 + 0x8cb4) +
            *(short *)(param_1 + 0x8cb2) + *(short *)(param_1 + 0x8cb0) +
            *(short *)(param_1 + 0x8cae) + *(short *)(param_1 + 0x8cac) +
            *(short *)(param_1 + 0x8caa) + *(short *)(param_1 + 0x8ca8);
  }
  local_14 = &PTR_FUN_008a0720;
  local_10 = param_2;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00580f40(&local_14);
  ExceptionList = local_c;
  return iVar1 + (uint)uVar2;
}

