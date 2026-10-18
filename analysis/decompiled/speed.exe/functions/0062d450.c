/* speed.exe 0062d450 FUN_0062d450; analysis pseudocode, not buildable source.
 * calls 0062c9a0 FUN_0062c9a0
 * calls 005258b0 FUN_005258b0
 * calls 005705d0 FUN_005705d0
 * calls 00516b90 FUN_00516b90
 */

undefined4 * __fastcall FUN_0062d450(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877bf7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  *param_1 = &PTR_FUN_008a6de4;
  local_4 = 0;
  uVar2 = FUN_005705d0();
  cVar1 = FUN_00516b90(uVar2);
  if (cVar1 != '\0') {
    FUN_005258b0(0);
    if (DAT_00925e90 == 6) {
      iVar3 = DAT_00920390 + 0x10;
      bVar4 = DAT_00920390 != 0;
      local_4 = CONCAT31(local_4._1_3_,1);
      DAT_00920390 = iVar3;
      if (bVar4) {
        FUN_0062c9a0(0);
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

