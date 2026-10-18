/* speed.exe 006417c0 FUN_006417c0; analysis pseudocode, not buildable source.
 * calls 00641670 FUN_00641670
 */

void FUN_006417c0(int param_1)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087985f;
  local_c = ExceptionList;
  iVar1 = DAT_00920390 + 0x10;
  bVar2 = DAT_00920390 != 0;
  local_4 = 0;
  DAT_00920390 = iVar1;
  if (bVar2) {
    ExceptionList = &local_c;
    FUN_00641670(*(undefined4 *)(param_1 + 4));
  }
  ExceptionList = local_c;
  return;
}

