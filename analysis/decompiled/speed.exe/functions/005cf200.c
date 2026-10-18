/* speed.exe 005cf200 FUN_005cf200; analysis pseudocode, not buildable source.
 * calls 005c7b30 FUN_005c7b30
 * calls 005c8010 FUN_005c8010
 */

undefined4
FUN_005cf200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874841;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005c8010();
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_005c7b30(param_1,param_2,param_3,param_4,param_5,param_6);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

