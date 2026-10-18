/* speed.exe 005429a0 FUN_005429a0; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 004655f0 FUN_004655f0
 * calls 00517070 FUN_00517070
 */

void __fastcall FUN_005429a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0086fce3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089e3d0;
  local_4 = 1;
  FUN_00517070();
  local_4 = local_4 & 0xffffff00;
  if (param_1[0x10] != 0) {
    FUN_004655f0(param_1[0x10]);
    param_1[0x10] = 0;
  }
  DAT_0091cb1c = 0;
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

