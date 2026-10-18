/* speed.exe 0057e110 FUN_0057e110; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 00503360 FUN_00503360
 */

void __fastcall FUN_0057e110(undefined4 *param_1)

{
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00871f38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a0fa4;
  local_4 = 0;
  local_10 = param_1;
  if (param_1[0xd] != 0) {
    local_14 = param_1[0xd];
    FUN_00503360(&local_14,1);
  }
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

