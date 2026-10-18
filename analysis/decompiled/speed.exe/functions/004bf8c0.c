/* speed.exe 004bf8c0 FUN_004bf8c0; analysis pseudocode, not buildable source.
 * calls 004d61d0 FUN_004d61d0
 * calls 00464080 FUN_00464080
 * calls 00465a70 FUN_00465a70
 * calls 00464a50 FUN_00464a50
 */

undefined4 * FUN_004bf8c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0086bb96;
  local_1c = ExceptionList;
  if (param_1 == 0) {
    ExceptionList = &local_1c;
    iVar1 = FUN_00464080(DAT_008ee558);
    if (iVar1 < 0x70) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      puVar2 = (undefined4 *)FUN_00465a70(0x70,0x1000);
    }
    else {
      puVar2 = (undefined4 *)FUN_00465a70(0x70,(DAT_008ee558 & 0xf) + 0x1000);
    }
    local_14 = 0;
  }
  else {
    ExceptionList = &local_1c;
    iVar1 = FUN_00464080(DAT_008ee558);
    if (iVar1 < 0x70) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      puVar2 = (undefined4 *)FUN_00465a70(0x70,0x1040);
    }
    else {
      puVar2 = (undefined4 *)FUN_00465a70(0x70,(DAT_008ee558 & 0xf) + 0x1040);
    }
    local_14 = 1;
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004d61d0();
    puVar2[10] = 0;
    *puVar2 = &PTR_FUN_00896ea0;
    puVar2[9] = 0;
    puVar2[0xe] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    ExceptionList = local_1c;
    return puVar2;
  }
  ExceptionList = local_1c;
  return (undefined4 *)0x0;
}

