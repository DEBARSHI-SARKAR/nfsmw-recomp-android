/* speed.exe 006389f0 FUN_006389f0; analysis pseudocode, not buildable source.
 * calls 006388f0 FUN_006388f0
 */

void FUN_006389f0(int param_1)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878ddf;
  local_c = ExceptionList;
  iVar1 = DAT_00920390 + 0x20;
  bVar2 = DAT_00920390 != 0;
  local_4 = 0;
  DAT_00920390 = iVar1;
  if (bVar2) {
    ExceptionList = &local_c;
    FUN_006388f0(DAT_0091f1b8,DAT_0091f1b4,*(undefined4 *)(param_1 + 4));
  }
  ExceptionList = local_c;
  return;
}

