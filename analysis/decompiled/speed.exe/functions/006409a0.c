/* speed.exe 006409a0 FUN_006409a0; analysis pseudocode, not buildable source.
 * calls 0056bc60 FUN_0056bc60
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_006409a0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879798;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a6cdc;
  local_4 = 0;
  if (DAT_0092d884 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*DAT_0092d87c;
  }
  iVar1 = (**(code **)(*piVar2 + 0x20))();
  if (iVar1 == 0) {
    *param_1 = &PTR_LAB_008a66f8;
    ExceptionList = pvStack_c;
    return;
  }
  if (DAT_0092d884 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*DAT_0092d87c;
  }
  (**(code **)(*piVar2 + 0x20))();
  piVar2 = (int *)FUN_005d59f0(&LAB_005650b0);
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    pvVar4 = (void *)0x0;
    uVar3 = FUN_0056bc60(0xee236ed9,0,0x5230faf6,0,0,5);
    (**(code **)(iVar1 + 4))(uVar3);
    *param_1 = &PTR_LAB_008a66f8;
    ExceptionList = pvVar4;
    return;
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = pvStack_c;
  return;
}

