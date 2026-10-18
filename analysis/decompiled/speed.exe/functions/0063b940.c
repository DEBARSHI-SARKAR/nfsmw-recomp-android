/* speed.exe 0063b940 FUN_0063b940; analysis pseudocode, not buildable source.
 * calls 0063b660 FUN_0063b660
 */

void FUN_0063b940(int param_1)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087952f;
  local_c = ExceptionList;
  iVar1 = DAT_00920390 + 0x40;
  bVar2 = DAT_00920390 != 0;
  local_4 = 0;
  DAT_00920390 = iVar1;
  if (bVar2) {
    ExceptionList = &local_c;
    FUN_0063b660(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                 *(undefined1 *)(param_1 + 0x24),DAT_0091f1b0,DAT_0091f1b8);
  }
  ExceptionList = local_c;
  return;
}

