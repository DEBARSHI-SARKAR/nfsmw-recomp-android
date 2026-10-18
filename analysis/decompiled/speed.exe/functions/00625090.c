/* speed.exe 00625090 FUN_00625090; analysis pseudocode, not buildable source.
 * calls 005257f0 FUN_005257f0
 */

void __fastcall FUN_00625090(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008774f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a74cc;
  local_4 = 0;
  FUN_005257f0("SixDaysLater.fng",param_1[2],0,0);
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

