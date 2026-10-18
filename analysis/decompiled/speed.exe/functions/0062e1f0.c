/* speed.exe 0062e1f0 FUN_0062e1f0; analysis pseudocode, not buildable source.
 * calls 0062e0d0 FUN_0062e0d0
 */

void FUN_0062e1f0(int param_1)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877d6f;
  local_c = ExceptionList;
  iVar1 = DAT_00920390 + 0x10;
  bVar2 = DAT_00920390 != 0;
  local_4 = 0;
  DAT_00920390 = iVar1;
  if (bVar2) {
    ExceptionList = &local_c;
    FUN_0062e0d0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  }
  ExceptionList = local_c;
  return;
}

