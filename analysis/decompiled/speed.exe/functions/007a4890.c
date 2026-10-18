/* speed.exe 007a4890 FUN_007a4890; analysis pseudocode, not buildable source.
 * calls 0051f4b0 FUN_0051f4b0
 * calls 00572360 FUN_00572360
 */

void __fastcall FUN_007a4890(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00882978;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b731c;
  local_4 = 0;
  FUN_0051f4b0();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

