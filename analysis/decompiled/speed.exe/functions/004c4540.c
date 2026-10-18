/* speed.exe 004c4540 FUN_004c4540; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 004b2530 FUN_004b2530
 */

void __fastcall FUN_004c4540(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086bc57;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00897494;
  local_4 = 0;
  FUN_004b2530();
  local_4 = 0xffffffff;
  if (-1 < (int)param_1[6]) {
    FUN_004b2530();
    if (param_1[4] != 0) {
      FUN_004655f0(param_1[4]);
    }
  }
  ExceptionList = local_c;
  return;
}

