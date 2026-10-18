/* speed.exe 00623900 FUN_00623900; analysis pseudocode, not buildable source.
 * calls 00447380 FUN_00447380
 * calls 0044a2b0 FUN_0044a2b0
 * calls 00460bf0 FUN_00460bf0
 * calls 0044a300 FUN_0044a300
 * calls 0044a260 FUN_0044a260
 * calls 0044b430 FUN_0044b430
 * calls 00460c50 FUN_00460c50
 * calls 0044a230 FUN_0044a230
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00623900(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008771a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x20;
  param_1[3] = param_3;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a70f0;
  param_1[2] = param_2;
  param_1[4] = param_4;
  param_1[5] = param_5;
  if (((param_2 != 0) && (iVar1 = FUN_00460c50(param_2), iVar1 != 0)) &&
     (iVar1 = FUN_00447380(), iVar1 != 0)) {
    uVar2 = FUN_00460bf0(param_1[2]);
    FUN_00447380(uVar2);
    iVar1 = FUN_0044b430(uVar2);
    if (iVar1 != 0) {
      if (_DAT_00890968 <= (float)param_1[3]) {
        FUN_0044a230(param_1[3]);
      }
      if (param_1[5] != 0) {
        FUN_0044a300();
        ExceptionList = local_c;
        return param_1;
      }
      if (param_1[4] != 0) {
        FUN_0044a260();
        ExceptionList = local_c;
        return param_1;
      }
      FUN_0044a2b0();
    }
  }
  ExceptionList = local_c;
  return param_1;
}

