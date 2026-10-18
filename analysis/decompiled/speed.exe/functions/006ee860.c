/* speed.exe 006ee860 FUN_006ee860; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 005d8660 FUN_005d8660
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_006ee860(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087e993;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d8660(param_2 + 2);
  local_4 = 0;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = -(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 4);
  FUN_005d7930(&LAB_006e8160,param_1);
  *param_1 = &PTR_FUN_008b03dc;
  puVar1 = param_1 + 2;
  local_4 = CONCAT31(local_4._1_3_,1);
  *puVar1 = &PTR_FUN_00890970;
  param_1[3] = param_1 + 4;
  FUN_005d7930(&LAB_006e81c0,puVar1);
  *puVar1 = &PTR_FUN_008b03e4;
  _DAT_00988ec8 = _DAT_00988ec8 + 1;
  *puVar1 = &PTR_LAB_008b0598;
  *param_1 = &PTR_FUN_008b0590;
  param_1[9] = 0;
  param_1[10] = 0;
  ExceptionList = local_c;
  return param_1;
}

