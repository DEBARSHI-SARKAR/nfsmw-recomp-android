/* speed.exe 006397f0 FUN_006397f0; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 0060b060 FUN_0060b060
 * calls 006396b0 FUN_006396b0
 */

undefined4 FUN_006397f0(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  float10 fVar3;
  float fVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087909f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00605a50(param_1);
  if (iVar1 == 2) {
    iVar1 = DAT_00920390 + 0x20;
    bVar2 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar1;
    if (bVar2) {
      uVar5 = DAT_0091f1b8;
      fVar3 = (float10)FUN_0060b060(param_1,2,DAT_0091f1b8);
      fVar4 = (float)fVar3;
      fVar3 = (float10)FUN_0060b060(param_1,1,fVar4);
      FUN_006396b0((float)fVar3,fVar4,uVar5);
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}

