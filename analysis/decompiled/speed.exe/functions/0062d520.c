/* speed.exe 0062d520 FUN_0062d520; analysis pseudocode, not buildable source.
 * calls 0062d450 FUN_0062d450
 */

void FUN_0062d520(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = DAT_00920390;
  puStack_8 = &LAB_00877c1f;
  local_c = ExceptionList;
  iVar2 = DAT_00920390 + 0x10;
  bVar3 = DAT_00920390 != 0;
  local_4 = 0;
  DAT_00920390 = iVar2;
  if (bVar3) {
    ExceptionList = &local_c;
    FUN_0062d450(iVar1);
  }
  ExceptionList = local_c;
  return;
}

