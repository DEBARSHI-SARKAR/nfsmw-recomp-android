/* speed.exe 005a01d0 FUN_005a01d0; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_005a01d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008733a8;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = param_3;
  param_1[6] = 0x800000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar1 = param_1 + 0xc;
  local_4 = 0;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_005655f0,puVar1);
  *puVar1 = &PTR_FUN_008a0388;
  *puVar1 = &PTR_LAB_008a248c;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  *param_1 = &PTR_FUN_008a2484;
  ExceptionList = local_c;
  return param_1;
}

