/* speed.exe 0063a090 FUN_0063a090; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 * calls 00639f20 FUN_00639f20
 */

undefined4 FUN_0063a090(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087923f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00605a50(param_1);
  if (iVar1 == 3) {
    iVar1 = DAT_00920390 + 0x20;
    bVar3 = DAT_00920390 != 0;
    local_4 = 0;
    DAT_00920390 = iVar1;
    if (bVar3) {
      uVar7 = DAT_0091f1b8;
      fVar4 = (float10)FUN_0060b060(param_1,3,DAT_0091f1b8);
      fVar6 = (float)fVar4;
      fVar4 = (float10)FUN_0060b060(param_1,2,fVar6);
      fVar5 = (float)fVar4;
      FUN_0060b060(param_1,1,fVar5);
      uVar2 = FUN_007c4b80();
      FUN_00639f20(uVar2,fVar5,fVar6,uVar7);
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}

