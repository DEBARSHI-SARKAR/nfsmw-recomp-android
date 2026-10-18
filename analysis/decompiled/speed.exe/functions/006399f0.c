/* speed.exe 006399f0 FUN_006399f0; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 00639890 FUN_00639890
 * calls 0060b060 FUN_0060b060
 */

undefined4 FUN_006399f0(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008790ff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00605a50(param_1);
  if (iVar1 == 4) {
    iVar1 = DAT_00920390 + 0x20;
    bVar2 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar1;
    if (bVar2) {
      uVar7 = DAT_0091f1b8;
      fVar3 = (float10)FUN_0060b060(param_1,4,DAT_0091f1b8);
      fVar6 = (float)fVar3;
      fVar3 = (float10)FUN_0060b060(param_1,3,fVar6);
      fVar5 = (float)fVar3;
      fVar3 = (float10)FUN_0060b060(param_1,2,fVar5);
      fVar4 = (float)fVar3;
      fVar3 = (float10)FUN_0060b060(param_1,1,fVar4);
      FUN_00639890((float)fVar3,fVar4,fVar5,fVar6,uVar7);
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}

