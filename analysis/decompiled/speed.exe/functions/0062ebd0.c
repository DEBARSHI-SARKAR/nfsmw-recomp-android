/* speed.exe 0062ebd0 FUN_0062ebd0; analysis pseudocode, not buildable source.
 * calls 006235d0 FUN_006235d0
 */

void FUN_0062ebd0(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = DAT_00920390;
  puStack_8 = &LAB_00877e6f;
  local_c = ExceptionList;
  iVar2 = DAT_00920390 + 0x10;
  bVar3 = DAT_00920390 != 0;
  local_4 = 0;
  DAT_00920390 = iVar2;
  if (bVar3) {
    ExceptionList = &local_c;
    FUN_006235d0(iVar1);
  }
  ExceptionList = local_c;
  return;
}

