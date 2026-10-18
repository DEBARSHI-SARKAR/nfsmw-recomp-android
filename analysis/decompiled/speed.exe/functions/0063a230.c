/* speed.exe 0063a230 FUN_0063a230; analysis pseudocode, not buildable source.
 * calls 0063a140 FUN_0063a140
 */

void FUN_0063a230(int param_1)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087927f;
  local_c = ExceptionList;
  iVar1 = DAT_00920390 + 0x10;
  bVar2 = DAT_00920390 != 0;
  local_4 = 0;
  DAT_00920390 = iVar1;
  if (bVar2) {
    ExceptionList = &local_c;
    FUN_0063a140(*(undefined4 *)(param_1 + 4),DAT_0091f1b8);
  }
  ExceptionList = local_c;
  return;
}

