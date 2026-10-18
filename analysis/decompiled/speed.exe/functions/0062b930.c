/* speed.exe 0062b930 FUN_0062b930; analysis pseudocode, not buildable source.
 * calls 0062b890 FUN_0062b890
 */

void FUN_0062b930(int param_1)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087797f;
  local_c = ExceptionList;
  iVar1 = DAT_00920390 + 0x20;
  bVar2 = DAT_00920390 != 0;
  local_4 = 0;
  DAT_00920390 = iVar1;
  if (bVar2) {
    ExceptionList = &local_c;
    FUN_0062b890(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
  ExceptionList = local_c;
  return;
}

