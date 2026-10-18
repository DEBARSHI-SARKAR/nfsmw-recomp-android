/* speed.exe 006eea40 FUN_006eea40; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 005d8660 FUN_005d8660
 */

undefined4 * __thiscall FUN_006eea40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e9eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d8660(1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 2);
  FUN_005d7930(&LAB_006e8160,param_1);
  *param_1 = &PTR_FUN_008ab398;
  param_1[8] = DAT_008a2fb4;
  param_1[9] = DAT_008a2fb8;
  param_1[10] = DAT_008a2fbc;
  param_1[0xb] = 0;
  param_1[0xc] = DAT_008a2fb4;
  param_1[0xd] = DAT_008a2fb8;
  param_1[0xe] = DAT_008a2fbc;
  param_1[0xf] = 0;
  param_1[0x10] = param_3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = param_2;
  ExceptionList = local_c;
  return param_1;
}

