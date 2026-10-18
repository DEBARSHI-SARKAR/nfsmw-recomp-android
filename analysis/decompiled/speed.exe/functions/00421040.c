/* speed.exe 00421040 FUN_00421040; analysis pseudocode, not buildable source.
 * calls 006f8180 FUN_006f8180
 * calls 006ee930 FUN_006ee930
 */

void __fastcall FUN_00421040(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00867e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00891358;
  param_1[2] = &PTR_LAB_00891350;
  param_1[0x12] = &PTR_LAB_0089134c;
  local_4 = 0;
  FUN_006f8180(param_1 + 0x12);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00890f9c;
  param_1[2] = &PTR_LAB_00890f94;
  FUN_006ee930();
  ExceptionList = local_c;
  return;
}

