/* speed.exe 00622600 FUN_00622600; analysis pseudocode, not buildable source.
 * calls 00511a90 FUN_00511a90
 * calls 005302c0 FUN_005302c0
 */

void __fastcall FUN_00622600(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876fa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6de4;
  local_4 = 0;
  iVar1 = FUN_00511a90();
  if (iVar1 != 0) {
    iVar1 = FUN_00511a90();
    if (*(int *)(iVar1 + 4) == 6) {
      FUN_00511a90();
      FUN_005302c0();
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

