/* speed.exe 004c5580 FUN_004c5580; analysis pseudocode, not buildable source.
 * calls 004d61d0 FUN_004d61d0
 * calls 004c0ce0 FUN_004c0ce0
 * calls 004ba2c0 FUN_004ba2c0
 * calls 0065c540 FUN_0065c540
 * calls 006539a0 FUN_006539a0
 * calls 004c0d70 FUN_004c0d70
 */

undefined4 * __fastcall FUN_004c5580(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086bccc;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_004d61d0();
  param_1[9] = 0;
  local_14 = 0;
  *param_1 = &PTR_FUN_00896bf0;
  FUN_0065c540();
  local_14._0_1_ = 1;
  FUN_006539a0();
  local_14._0_1_ = 2;
  FUN_0065c540();
  param_1[0x3b] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  param_1[0x42] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x43) = 1;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  local_14 = CONCAT31(local_14._1_3_,3);
  param_1[0x71] = 0;
  param_1[0x54] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  iVar3 = 0;
  puVar1 = param_1 + 0x61;
  do {
    puVar1[-6] = 0;
    *puVar1 = 0;
    puVar1[-0xc] = 0;
    *(undefined1 *)((int)param_1 + iVar3 + 0x19c) = 0;
    puVar1[8] = 0;
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar3 < 6);
  *(undefined1 *)(param_1 + 0x72) = 1;
  uVar2 = FUN_004c0d70(param_1,&LAB_004b3bd0);
  param_1[0x73] = uVar2;
  uVar2 = FUN_004c0ce0(param_1,&LAB_004b3cb0);
  param_1[0x74] = uVar2;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0x3f800000;
  param_1[0x3f] = 0x3f800000;
  param_1[0x42] = 0x3f800000;
  param_1[0x3e] = 0x3a83126f;
  param_1[0x37] = 0x3a83126f;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3b] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)((int)param_1 + 0x14e) = 1;
  FUN_004ba2c0(0);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)((int)param_1 + 0xd5) = 0;
  ExceptionList = local_1c;
  return param_1;
}

