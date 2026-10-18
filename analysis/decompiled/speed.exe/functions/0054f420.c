/* speed.exe 0054f420 FUN_0054f420; analysis pseudocode, not buildable source.
 * calls 0056bc10 FUN_0056bc10
 * calls 0059bc40 FUN_0059bc40
 * calls 005252d0 FUN_005252d0
 * calls 00543300 FUN_00543300
 */

undefined4 * __thiscall FUN_0054f420(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870738;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059bc40(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089ea94;
  FUN_00543300();
  uVar1 = param_1[4];
  uVar2 = FUN_0056bc10(0xbcb18f38);
  FUN_005252d0(uVar1,0x42adb44c,uVar2);
  ExceptionList = local_c;
  return param_1;
}

