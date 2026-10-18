/* speed.exe 00624830 FUN_00624830; analysis pseudocode, not buildable source.
 * calls 005257f0 FUN_005257f0
 */

void __fastcall FUN_00624830(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008773d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a732c;
  local_4 = 0;
  FUN_005257f0("EngageEventDialog.fng",param_1[3],0,0);
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

