/* speed.exe 00418d90 FUN_00418d90; analysis pseudocode, not buildable source.
 * calls 006ee860 FUN_006ee860
 * calls 005d59f0 FUN_005d59f0
 */

undefined4 * __thiscall FUN_00418d90(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00867c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006ee860(0);
  *param_1 = &PTR_FUN_00890f9c;
  param_1[2] = &PTR_LAB_00890f94;
  param_1[0xc] = *param_2;
  param_1[0xe] = 0;
  param_1[0x11] = param_3;
  local_4 = 0;
  uVar1 = FUN_005d59f0(&LAB_004040e0);
  param_1[0xf] = uVar1;
  uVar1 = FUN_005d59f0(&LAB_00403700);
  param_1[0x10] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

