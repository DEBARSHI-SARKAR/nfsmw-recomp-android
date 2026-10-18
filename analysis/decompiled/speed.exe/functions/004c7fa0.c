/* speed.exe 004c7fa0 FUN_004c7fa0; analysis pseudocode, not buildable source.
 * calls 00464080 FUN_00464080
 * calls 004c5580 FUN_004c5580
 * calls 00465a70 FUN_00465a70
 * calls 00464a50 FUN_00464a50
 */

undefined4 __thiscall FUN_004c7fa0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086bea6;
  local_c = ExceptionList;
  if (param_2 == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_00464080(DAT_008ee558,param_1);
    if (iVar1 < 0x1e0) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      iVar1 = FUN_00465a70(0x1e0,0x1000);
    }
    else {
      iVar1 = FUN_00465a70(0x1e0,(DAT_008ee558 & 0xf) + 0x1000);
    }
    local_4 = 0;
  }
  else {
    ExceptionList = &local_c;
    iVar1 = FUN_00464080(DAT_008ee558,param_1);
    if (iVar1 < 0x1e0) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      iVar1 = FUN_00465a70(0x1e0,0x1040);
    }
    else {
      iVar1 = FUN_00465a70(0x1e0,(DAT_008ee558 & 0xf) + 0x1040);
    }
    local_4 = 1;
  }
  if (iVar1 != 0) {
    uVar2 = FUN_004c5580(iVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

