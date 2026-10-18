/* speed.exe 004588f0 FUN_004588f0; analysis pseudocode, not buildable source.
 * calls 00457c50 FUN_00457c50
 * calls 004574f0 FUN_004574f0
 * calls 00659250 FUN_00659250
 */

undefined4 FUN_004588f0(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869d41;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = FUN_004574f0(param_1);
  uVar2 = *(uint *)(iVar4 + 8);
  uVar1 = *(undefined2 *)(iVar4 + 0xc);
  cVar3 = '\x01' - (uVar2 < 0x10);
  uVar7 = 4;
  if (uVar2 != 0) {
    uVar7 = uVar2;
  }
  iVar4 = (-(uint)(cVar3 != '\0') & 8) + 8;
  uVar5 = ((uVar7 * param_2 + 0x3f + iVar4 & 0xffffffc0) - iVar4) / uVar7;
  iVar4 = uVar5 * uVar7 + iVar4;
  DAT_0090dcd4 = DAT_0090dcd4 + iVar4;
  if (DAT_0090dcd0 < DAT_0090dcd4) {
    DAT_0090dcd0 = DAT_0090dcd4;
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(iVar4,0);
  }
  local_4 = 0;
  if (iVar4 != 0) {
    uVar6 = FUN_00457c50(uVar2,param_2,uVar5,uVar1,cVar3);
    ExceptionList = pvStack_c;
    return uVar6;
  }
  ExceptionList = pvStack_c;
  return 0;
}

