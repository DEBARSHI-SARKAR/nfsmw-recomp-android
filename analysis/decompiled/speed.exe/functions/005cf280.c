/* speed.exe 005cf280 FUN_005cf280; analysis pseudocode, not buildable source.
 * calls 005c8010 FUN_005c8010
 * calls 005c7a70 FUN_005c7a70
 */

undefined4 FUN_005cf280(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874861;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005c8010();
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_005c7a70(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

