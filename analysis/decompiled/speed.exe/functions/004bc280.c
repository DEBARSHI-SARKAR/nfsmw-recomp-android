/* speed.exe 004bc280 FUN_004bc280; analysis pseudocode, not buildable source.
 * calls 004b3560 FUN_004b3560
 * calls 00464080 FUN_00464080
 * calls 00465a70 FUN_00465a70
 * calls 00464a50 FUN_00464a50
 */

undefined4 * FUN_004bc280(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086b9f6;
  local_c = ExceptionList;
  if (param_1 == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_00464080(DAT_008ee558);
    if (iVar1 < 0x168) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      puVar2 = (undefined4 *)FUN_00465a70(0x168,0x1000);
    }
    else {
      puVar2 = (undefined4 *)FUN_00465a70(0x168,(DAT_008ee558 & 0xf) + 0x1000);
    }
    local_4 = 0;
  }
  else {
    ExceptionList = &local_c;
    iVar1 = FUN_00464080(DAT_008ee558);
    if (iVar1 < 0x168) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      puVar2 = (undefined4 *)FUN_00465a70(0x168,0x1040);
    }
    else {
      puVar2 = (undefined4 *)FUN_00465a70(0x168,(DAT_008ee558 & 0xf) + 0x1040);
    }
    local_4 = 1;
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004b3560();
    *puVar2 = &PTR_FUN_00896b90;
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

