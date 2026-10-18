/* speed.exe 0063ae30 FUN_0063ae30; analysis pseudocode, not buildable source.
 * calls 0063ad30 FUN_0063ad30
 */

void FUN_0063ae30(int param_1)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087942f;
  local_c = ExceptionList;
  iVar1 = DAT_00920390 + 0x10;
  bVar2 = DAT_00920390 != 0;
  local_4 = 0;
  DAT_00920390 = iVar1;
  if (bVar2) {
    ExceptionList = &local_c;
    FUN_0063ad30(*(undefined4 *)(param_1 + 4));
  }
  ExceptionList = local_c;
  return;
}

