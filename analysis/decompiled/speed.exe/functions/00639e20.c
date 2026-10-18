/* speed.exe 00639e20 FUN_00639e20; analysis pseudocode, not buildable source.
 * calls 00639d00 FUN_00639d00
 */

void FUN_00639e20(int param_1)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008791bf;
  local_c = ExceptionList;
  iVar1 = DAT_00920390 + 0x20;
  bVar2 = DAT_00920390 != 0;
  local_4 = 0;
  DAT_00920390 = iVar1;
  if (bVar2) {
    ExceptionList = &local_c;
    FUN_00639d00(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),DAT_0091f1b8);
  }
  ExceptionList = local_c;
  return;
}

