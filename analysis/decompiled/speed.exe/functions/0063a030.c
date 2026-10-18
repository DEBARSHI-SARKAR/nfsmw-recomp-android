/* speed.exe 0063a030 FUN_0063a030; analysis pseudocode, not buildable source.
 * calls 00639f20 FUN_00639f20
 */

void FUN_0063a030(int param_1)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087921f;
  local_c = ExceptionList;
  iVar1 = DAT_00920390 + 0x20;
  bVar2 = DAT_00920390 != 0;
  local_4 = 0;
  DAT_00920390 = iVar1;
  if (bVar2) {
    ExceptionList = &local_c;
    FUN_00639f20(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc),DAT_0091f1b8);
  }
  ExceptionList = local_c;
  return;
}

