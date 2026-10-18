/* speed.exe 00773af0 FUN_00773af0; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 007711d0 FUN_007711d0
 */

void __fastcall FUN_00773af0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00881b06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b5c24;
  local_4 = 1;
  if (param_1[4] != 0) {
    FUN_00463ca0(DAT_009b38ec,param_1[4]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_007711d0();
  local_4 = 0xffffffff;
  FUN_007711d0();
  ExceptionList = local_c;
  return;
}

