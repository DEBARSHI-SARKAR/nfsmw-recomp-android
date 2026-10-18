/* speed.exe 0062eb10 FUN_0062eb10; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 00623500 FUN_00623500
 * calls 0060b060 FUN_0060b060
 */

undefined4 FUN_0062eb10(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  float10 fVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00877e4f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00605a50(param_1);
  if (iVar1 == 1) {
    iVar1 = DAT_00920390 + 0x10;
    bVar2 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar1;
    if (bVar2) {
      fVar3 = (float10)FUN_0060b060(param_1,1);
      FUN_00623500((float)fVar3);
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}

