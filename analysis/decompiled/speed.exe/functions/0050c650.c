/* speed.exe 0050c650 FUN_0050c650; analysis pseudocode, not buildable source.
 * calls 0045ce40 FUN_0045ce40
 * calls 0050bfb0 FUN_0050bfb0
 * calls 0050c260 FUN_0050c260
 */

int __thiscall FUN_0050c650(int param_1,int param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086e0eb;
  local_c = ExceptionList;
  iVar1 = param_1 + 8;
  ExceptionList = &local_c;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0xc) = iVar1;
  local_4 = 0;
  uVar3 = FUN_0050bfb0(param_2);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  *(uint *)(param_1 + 0x18) = param_3 | 0x10;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  uVar3 = FUN_0045ce40();
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (param_2 != 0) {
    cVar2 = FUN_0050c260(param_3);
    if (cVar2 == '\0') {
      uVar4 = *(uint *)(param_1 + 0x18) & 0xfffffff7;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x18) | 8;
    }
    *(uint *)(param_1 + 0x18) = uVar4;
  }
  ExceptionList = local_c;
  return param_1;
}

