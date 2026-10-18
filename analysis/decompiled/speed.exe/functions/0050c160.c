/* speed.exe 0050c160 FUN_0050c160; analysis pseudocode, not buildable source.
 * calls 0045d9e0 FUN_0045d9e0
 * calls 007c4b80 FUN_007c4b80
 * calls 0050bef0 FUN_0050bef0
 */

int __thiscall FUN_0050c160(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086e04e;
  local_c = ExceptionList;
  iVar1 = param_1 + 0x80;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0x84) = iVar1;
  local_4 = 0;
  uVar3 = FUN_0050bef0(param_2);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
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
  FUN_0045d9e0(0x4f000000,&DAT_008f29e8);
  uVar3 = FUN_007c4b80();
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_3 + 0x18) & 0xffff0000;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(int *)(param_1 + 0x8c) = param_3;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  sVar2 = *(short *)(*(int *)(*(int *)(param_1 + 0x7c) + 8) + 0x9c);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(short *)(param_1 + 0x1e) = sVar2 + 2;
  ExceptionList = local_c;
  return param_1;
}

