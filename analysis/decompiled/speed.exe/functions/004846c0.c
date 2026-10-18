/* speed.exe 004846c0 FUN_004846c0; analysis pseudocode, not buildable source.
 * calls 0046eae0 FUN_0046eae0
 * calls 0046a300 FUN_0046a300
 * calls 00470890 FUN_00470890
 * calls 00652ad0 _malloc
 * calls 00482160 FUN_00482160
 */

undefined4 * __thiscall FUN_004846c0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a9c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00470890(param_2,0xe);
  *param_1 = &PTR_LAB_00894f70;
  param_1[0x20] = param_3;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  iVar2 = param_1[7];
  *(undefined1 *)(iVar2 + 0x2a0) = 1;
  local_4 = 0;
  *(undefined4 *)(iVar2 + 0x2ac) = DAT_008f82f4;
  pvVar3 = _malloc(0x84);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0046a300(0,0x3f800000);
  }
  param_1[0x21] = uVar4;
  pvVar3 = _malloc(0x84);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0046a300(0,0x3f800000);
  }
  param_1[0x22] = uVar4;
  puVar5 = _malloc(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0x3f800000;
    *(undefined2 *)(puVar5 + 10) = 0;
    *(undefined2 *)((int)puVar5 + 0x2a) = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  param_1[0x23] = puVar5;
  puVar5 = _malloc(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0x3f800000;
    *(undefined2 *)(puVar5 + 10) = 0;
    *(undefined2 *)((int)puVar5 + 0x2a) = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  param_1[0x24] = puVar5;
  puVar5 = _malloc(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0x3f800000;
    *(undefined2 *)(puVar5 + 10) = 0;
    *(undefined2 *)((int)puVar5 + 0x2a) = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  param_1[0x25] = puVar5;
  puVar5 = _malloc(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0x3f800000;
    *(undefined2 *)(puVar5 + 10) = 0;
    *(undefined2 *)((int)puVar5 + 0x2a) = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  param_1[0x26] = puVar5;
  puVar5 = _malloc(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0x3f800000;
    *(undefined2 *)(puVar5 + 10) = 0;
    *(undefined2 *)((int)puVar5 + 0x2a) = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  param_1[0x27] = puVar5;
  puVar5 = _malloc(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0x3f800000;
    *(undefined2 *)(puVar5 + 10) = 0;
    *(undefined2 *)((int)puVar5 + 0x2a) = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  param_1[0x28] = puVar5;
  puVar5 = _malloc(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0x3f800000;
    *(undefined2 *)(puVar5 + 10) = 0;
    *(undefined2 *)((int)puVar5 + 0x2a) = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  param_1[0x29] = puVar5;
  puVar5 = _malloc(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0x3f800000;
    *(undefined2 *)(puVar5 + 10) = 0;
    *(undefined2 *)((int)puVar5 + 0x2a) = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  param_1[0x2a] = puVar5;
  puVar5 = _malloc(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0x3f800000;
    *(undefined2 *)(puVar5 + 10) = 0;
    *(undefined2 *)((int)puVar5 + 0x2a) = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  param_1[0x2b] = puVar5;
  pvVar3 = _malloc(0x84);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0046a300(1,0x3f800000);
  }
  param_1[0x2c] = uVar4;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  FUN_0046eae0();
  param_1[0x34] = 0x3f800000;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0x3f800000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0x3f800000;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0x3f800000;
  uVar4 = param_3[1];
  uVar1 = param_3[2];
  param_1[0x44] = *param_3;
  param_1[0x45] = uVar4;
  param_1[0x46] = uVar1;
  uVar4 = param_3[5];
  uVar1 = param_3[6];
  param_1[0x48] = param_3[4];
  param_1[0x49] = uVar4;
  param_1[0x4a] = uVar1;
  FUN_00482160(1,1);
  ExceptionList = local_c;
  return param_1;
}

