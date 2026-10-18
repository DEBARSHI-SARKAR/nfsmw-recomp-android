/* speed.exe 00623060 FUN_00623060; analysis pseudocode, not buildable source.
 * calls 00516c90 FUN_00516c90
 * calls 00460c50 FUN_00460c50
 * calls 005af1c0 FUN_005af1c0
 */

undefined4 * __thiscall FUN_00623060(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a6fdc;
  param_1[2] = param_2;
  param_1[3] = param_3;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = FUN_00460c50(param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_00460c50(param_1[3]);
      if (iVar1 != 0) {
        if (DAT_0091cadc != 0) {
          uVar3 = param_1[2];
          uVar4 = 0;
          uVar2 = FUN_005af1c0(param_1[3],uVar3,0);
          FUN_00516c90(uVar2,uVar3,uVar4);
        }
        ExceptionList = local_c;
        return param_1;
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

