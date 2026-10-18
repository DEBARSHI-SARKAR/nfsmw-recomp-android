/* speed.exe 00630f10 FUN_00630f10; analysis pseudocode, not buildable source.
 * calls 00624f50 FUN_00624f50
 */

void FUN_00630f10(int param_1)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008782cf;
  local_c = ExceptionList;
  iVar1 = DAT_00920390 + 0x10;
  bVar2 = DAT_00920390 != 0;
  local_4 = 0;
  DAT_00920390 = iVar1;
  if (bVar2) {
    ExceptionList = &local_c;
    FUN_00624f50(*(undefined4 *)(param_1 + 4));
  }
  ExceptionList = local_c;
  return;
}

