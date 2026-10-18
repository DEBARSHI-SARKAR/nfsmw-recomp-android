/* speed.exe 00787350 FUN_00787350; analysis pseudocode, not buildable source.
 * calls 0077fbb0 FUN_0077fbb0
 * calls 007821c0 FUN_007821c0
 * calls 00782250 FUN_00782250
 * calls 005d29d0 FUN_005d29d0
 */

void __thiscall FUN_00787350(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008822ef;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x30;
    }
    iVar1 = 0;
    if (*(int *)(iVar2 + 4) != 0) {
      iVar1 = (*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 4)) / 0x30;
    }
    ExceptionList = &local_c;
    if (iVar3 != iVar1) goto LAB_007873fe;
  }
  ExceptionList = &local_c;
  iVar2 = FUN_005d29d0(0x10,0);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  local_4 = 0xffffffff;
  *(int *)(param_1 + 0x10) = iVar2;
  FUN_0077fbb0(0x15);
  FUN_00782250((int *)(param_1 + 0x10));
LAB_007873fe:
  FUN_007821c0(param_2);
  ExceptionList = local_c;
  return;
}

