/* speed.exe 0078ddd0 FUN_0078ddd0; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 005758e0 FUN_005758e0
 */

void __fastcall FUN_0078ddd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00882568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b69b8;
  local_4 = 0;
  FUN_005758e0();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

