/* speed.exe 004b9e60 FUN_004b9e60; analysis pseudocode, not buildable source.
 * calls 00464080 FUN_00464080
 * calls 004eb610 FUN_004eb610
 * calls 00465a70 FUN_00465a70
 * calls 00464a50 FUN_00464a50
 */

undefined4 * FUN_004b9e60(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086b856;
  local_c = ExceptionList;
  if (param_1 == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_00464080(DAT_008ee558);
    if (iVar1 < 0x140) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      puVar2 = (undefined4 *)FUN_00465a70(0x140,0x1000);
    }
    else {
      puVar2 = (undefined4 *)FUN_00465a70(0x140,(DAT_008ee558 & 0xf) + 0x1000);
    }
    local_4 = 0;
  }
  else {
    ExceptionList = &local_c;
    iVar1 = FUN_00464080(DAT_008ee558);
    if (iVar1 < 0x140) {
      FUN_00464a50(DAT_008ee558,0,0x7fffffff);
      puVar2 = (undefined4 *)FUN_00465a70(0x140,0x1040);
    }
    else {
      puVar2 = (undefined4 *)FUN_00465a70(0x140,(DAT_008ee558 & 0xf) + 0x1040);
    }
    local_4 = 1;
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004eb610();
    *puVar2 = &PTR_FUN_00896a60;
    *(undefined1 *)((int)puVar2 + 0x139) = 1;
    *(undefined1 *)(puVar2 + 0x4a) = 0;
    *(undefined1 *)(puVar2 + 0x4c) = 0;
    puVar2[0x4d] = 0;
    *(undefined1 *)(puVar2 + 0x4e) = 0;
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

