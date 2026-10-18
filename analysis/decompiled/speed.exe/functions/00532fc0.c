/* speed.exe 00532fc0 FUN_00532fc0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 00572360 FUN_00572360
 */

void __fastcall FUN_00532fc0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086f788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089daec;
  local_4 = 0;
  if (param_1[0xf] != 0) {
    FUN_004655f0(param_1[0xf]);
    param_1[0xf] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

