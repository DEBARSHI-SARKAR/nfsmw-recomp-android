/* speed.exe 006245a0 FUN_006245a0; analysis pseudocode, not buildable source.
 * calls 005fab40 FUN_005fab40
 * calls 006022d0 FUN_006022d0
 */

undefined4 * __thiscall FUN_006245a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877358;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  *param_1 = &PTR_FUN_008a72c8;
  param_1[2] = param_2;
  local_4 = 0;
  if ((DAT_00925e90 == 6) && (param_2 != 0)) {
    iVar2 = FUN_006022d0(param_2);
    iVar1 = DAT_0091e00c;
    if (iVar2 != 0) {
      uVar3 = FUN_005fab40();
      *(undefined4 *)(iVar1 + 0x2d4) = uVar3;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

