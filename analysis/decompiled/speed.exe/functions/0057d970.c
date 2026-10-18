/* speed.exe 0057d970 FUN_0057d970; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 00571f30 FUN_00571f30
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_0057d970(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00871e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a0f3c;
  local_4 = 0;
  if (param_1[0xc] != 0) {
    FUN_004655f0(param_1[0xc]);
  }
  FUN_00571f30(param_1[4],0);
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

