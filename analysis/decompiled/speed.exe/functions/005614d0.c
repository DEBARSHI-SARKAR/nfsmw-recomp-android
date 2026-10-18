/* speed.exe 005614d0 FUN_005614d0; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 005488b0 FUN_005488b0
 * calls 00593920 FUN_00593920
 * calls 0055b8c0 FUN_0055b8c0
 */

undefined4 * __thiscall FUN_005614d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00871156;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  *param_1 = &PTR_FUN_0089e730;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  puVar1 = param_1 + 0x55;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *puVar1 = puVar1;
  param_1[0x56] = puVar1;
  *(undefined1 *)((int)param_1 + 0x171) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)((int)param_1 + 0x172) = 0;
  *(undefined1 *)((int)param_1 + 0x173) = 0;
  param_1[0x5d] = 0x41a00000;
  local_4 = 1;
  *(bool *)((int)param_1 + 0x171) = DAT_0091cfb9 == '\0';
  FUN_00514c70(param_1[0x49]);
  param_1[0x43] = 10;
  FUN_0055b8c0();
  FUN_005488b0();
  ExceptionList = local_c;
  return param_1;
}

