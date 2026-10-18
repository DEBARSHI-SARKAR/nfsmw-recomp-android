/* speed.exe 0059d2a0 FUN_0059d2a0; analysis pseudocode, not buildable source.
 * calls 0058bbd0 FUN_0058bbd0
 * calls 005251e0 FUN_005251e0
 * calls 005d7930 FUN_005d7930
 * calls 00514d10 FUN_00514d10
 */

undefined4 * __thiscall FUN_0059d2a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00872fb3;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = param_3;
  param_1[6] = 0x1000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar1 = param_1 + 0xc;
  local_4 = 0;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_004060a0,puVar1);
  *puVar1 = &PTR_FUN_008a040c;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_008a1f78;
  *puVar1 = &PTR_LAB_008a1f6c;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar2 = FUN_0058bbd0(0xea903012);
  param_1[0x12] = uVar2;
  FUN_00514d10(uVar2,0x16a259,1);
  uVar2 = FUN_005251e0(param_1[4],0x9b0ac8ca);
  param_1[0x10] = uVar2;
  uVar2 = FUN_005251e0(param_1[4],0x41a55ecf);
  param_1[0x11] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

