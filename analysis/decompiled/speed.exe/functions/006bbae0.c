/* speed.exe 006bbae0 FUN_006bbae0; analysis pseudocode, not buildable source.
 * calls 006b8de0 FUN_006b8de0
 * calls 005d0370 FUN_005d0370
 * calls 006eea10 FUN_006eea10
 * calls 006bb410 FUN_006bb410
 */

void __fastcall FUN_006bbae0(undefined4 *param_1)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087e166;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008ad83c;
  param_1[2] = &PTR_LAB_008ad834;
  param_1[0x13] = &PTR_LAB_008ad818;
  param_1[0x15] = &PTR_LAB_008ad798;
  param_1[0x18] = &PTR_LAB_008ad778;
  local_4 = 1;
  if (param_1[0x21] != 0) {
    FUN_006eea10(param_1[0x21]);
    param_1[0x21] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_006bb410(local_10,*(undefined4 *)param_1[0x2a],(undefined4 *)param_1[0x2a]);
  if (param_1[0x2a] != 0) {
    FUN_005d0370(param_1[0x2a],0x18,0);
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  local_4 = 0xffffffff;
  FUN_006b8de0();
  ExceptionList = local_c;
  return;
}

