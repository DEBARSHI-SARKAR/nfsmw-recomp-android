/* speed.exe 006308e0 FUN_006308e0; analysis pseudocode, not buildable source.
 * calls 007451a0 FUN_007451a0
 * calls 0074d320 FUN_0074d320
 * calls 0064c370 FUN_0064c370
 * calls 00480ce0 FUN_00480ce0
 * calls 006dfaf0 FUN_006dfaf0
 * calls 0073de50 FUN_0073de50
 * calls 00509b20 FUN_00509b20
 * calls 0046e2d0 FUN_0046e2d0
 */

void __fastcall FUN_006308e0(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878268;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a7b30;
  local_4 = 0;
  FUN_0074d320();
  FUN_00509b20();
  FUN_007451a0();
  iVar1 = FUN_006dfaf0();
  if (iVar1 != 0) {
    FUN_006dfaf0();
    FUN_0073de50();
  }
  if (DAT_0092c678 != (int *)0x0) {
    (**(code **)(*DAT_0092c678 + 8))();
  }
  if (DAT_0092c674 != (int *)0x0) {
    (**(code **)(*DAT_0092c674 + 4))(1);
  }
  FUN_0064c370();
  FUN_00480ce0();
  FUN_0046e2d0(&DAT_00890978,&DAT_00890978);
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = pvStack_c;
  return;
}

