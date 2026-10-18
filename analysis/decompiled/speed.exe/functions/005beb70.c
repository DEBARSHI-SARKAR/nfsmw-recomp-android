/* speed.exe 005beb70 FUN_005beb70; analysis pseudocode, not buildable source.
 * calls 005b3b20 FUN_005b3b20
 */

void __fastcall FUN_005beb70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874328;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  param_1[3] = &PTR_LAB_008a2c18;
  FUN_005b3b20();
  *param_1 = &PTR_LAB_008a2c14;
  ExceptionList = local_c;
  return;
}

