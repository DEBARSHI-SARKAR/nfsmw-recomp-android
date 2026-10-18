/* speed.exe 005129d0 FUN_005129d0; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 0056c6e0 FUN_0056c6e0
 */

void __fastcall FUN_005129d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086e308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089b294;
  local_4 = 0;
  if (param_1[0xc] != 0) {
    FUN_0056c6e0(param_1[0xc]);
    param_1[0xc] = 0;
  }
  DAT_0091ca6f = 0;
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

