/* speed.exe 007100b0 FUN_007100b0; analysis pseudocode, not buildable source.
 * calls 0070ffa0 FUN_0070ffa0
 * calls 004ac0e0 FUN_004ac0e0
 */

void __fastcall FUN_007100b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087fe33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b2274;
  local_4 = 1;
  FUN_0070ffa0();
  param_1[6] = &PTR_LAB_008967fc;
  local_4 = local_4 & 0xffffff00;
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    FUN_004ac0e0(param_1[7]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  param_1[9] = 0;
  param_1[10] = param_1[10] & 1;
  *param_1 = &PTR_LAB_008967fc;
  ExceptionList = local_c;
  return;
}

