/* speed.exe 005c3f90 FUN_005c3f90; analysis pseudocode, not buildable source.
 * calls 005c31a0 FUN_005c31a0
 * calls 005bdb00 FUN_005bdb00
 */

undefined4 * __thiscall FUN_005c3f90(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008746c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005c31a0(param_2,param_3);
  *param_1 = &PTR_FUN_008a2e1c;
  param_1[0x17] = *(undefined4 *)(param_2 + 0x5c);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = *(undefined4 *)(param_2 + 0x6c);
  param_1[0x1c] = *(undefined4 *)(param_2 + 0x70);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = *(undefined4 *)(param_2 + 0x84);
  uVar1 = *(undefined4 *)(param_2 + 0x88);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x22] = uVar1;
  param_1[0x29] = 0x3f800000;
  param_1[0x2a] = 0xbab60b61;
  local_4 = 0;
  param_1[0x2e] = 0xff;
  param_1[0x2d] = 0xff;
  param_1[0x2c] = 0xff;
  param_1[0x2b] = 0xff;
  param_1[0x2f] = *(undefined4 *)(param_2 + 0xbc);
  param_1[0x30] = *(undefined4 *)(param_2 + 0xc0);
  param_1[0x31] = *(undefined4 *)(param_2 + 0xc4);
  FUN_005bdb00(param_2);
  ExceptionList = local_c;
  return param_1;
}

