/* speed.exe 0062ef00 FUN_0062ef00; analysis pseudocode, not buildable source.
 * calls 0072c620 FUN_0072c620
 * calls 00460bf0 FUN_00460bf0
 * calls 00460c50 FUN_00460c50
 * calls 00629a90 FUN_00629a90
 * calls 0064b410 FUN_0064b410
 */

undefined4 * __thiscall FUN_0062ef00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877ee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7b18;
  iVar1 = FUN_00629a90(param_1,param_2);
  param_1[2] = iVar1;
  param_1[3] = param_3;
  if ((iVar1 != 0) && (iVar1 = FUN_00460c50(iVar1), iVar1 != 0)) {
    if (param_1[3] == 0) {
      uVar2 = FUN_00460bf0(param_1[2]);
      FUN_0072c620(uVar2);
    }
    else {
      FUN_0064b410(param_1[2],0);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

