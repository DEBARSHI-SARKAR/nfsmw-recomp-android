/* speed.exe 004aaa60 FUN_004aaa60; analysis pseudocode, not buildable source.
 * calls 0045a760 FUN_0045a760
 * calls 00467c30 FUN_00467c30
 */

undefined4 __fastcall FUN_004aaa60(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086aff8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00467c30(0,0,0);
  local_4 = 0;
  if (DAT_00988e18 != 0) {
    FUN_0045a760(DAT_00988e18);
  }
  ExceptionList = local_c;
  return param_1;
}

