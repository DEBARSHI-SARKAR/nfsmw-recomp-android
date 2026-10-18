/* speed.exe 0061f8a0 FUN_0061f8a0; analysis pseudocode, not buildable source.
 * calls 0060cc50 FUN_0060cc50
 * calls 0065fb50 FUN_0065fb50
 * calls 00648590 FUN_00648590
 */

int __fastcall FUN_0061f8a0(int param_1)

{
  int iVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00876ad3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0060cc50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_4 = 1;
  FUN_00648590(param_1 + 0xc);
  for (uVar2 = 0;
      (*(int *)(param_1 + 0x10) != 0 &&
      (uVar2 < (uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2))); uVar2 = uVar2 + 1
      ) {
    FUN_0065fb50(*(undefined4 *)(*(int *)(param_1 + 0x10) + uVar2 * 4),0);
  }
  ExceptionList = local_c;
  return param_1;
}

