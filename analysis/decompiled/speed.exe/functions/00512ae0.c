/* speed.exe 00512ae0 FUN_00512ae0; analysis pseudocode, not buildable source.
 * calls 00460c50 FUN_00460c50
 */

uint FUN_00512ae0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined3 uVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  undefined4 uStack_4;
  
  uStack_4 = -0x10000;
  uVar2 = FUN_00460c50(param_1);
  if ((int)uVar2 < 7) {
LAB_00512bae:
    return uVar2 & 0xffffff00;
  }
  uVar2 = FUN_00460c50(param_1);
  if (0x32 < (int)uVar2) goto LAB_00512bae;
  iVar6 = 0;
  iVar3 = FUN_00460c50(param_1);
  if (iVar3 < 1) {
    uStack_4._3_1_ = -1;
    uVar2 = CONCAT31((int3)((uint)iVar3 >> 8),0xff);
  }
  else {
    do {
      cVar1 = *(char *)(iVar6 + param_1);
      uVar4 = (undefined3)((uint)iVar3 >> 8);
      uVar2 = CONCAT31(uVar4,cVar1);
      cVar5 = (char)iVar6;
      if (cVar1 == '@') {
        if (uStack_4._2_1_ != -1) goto LAB_00512b86;
        uVar2 = CONCAT31(uVar4,cVar5);
        uStack_4 = (uint)CONCAT11(uStack_4._3_1_,cVar5) << 0x10;
        if (cVar5 == '\0') goto LAB_00512b86;
        iVar3 = FUN_00460c50(param_1);
        uVar2 = iVar3 - 1;
        bVar7 = (int)cVar5 == uVar2;
LAB_00512b6a:
        if (bVar7) goto LAB_00512b86;
      }
      else if (cVar1 == '.') {
        uVar2 = CONCAT31(uVar4,cVar5);
        uStack_4 = CONCAT13(cVar5,(undefined3)uStack_4);
        if (cVar5 != '\0') {
          iVar3 = FUN_00460c50(param_1);
          uVar2 = iVar3 - 1;
          bVar7 = (int)cVar5 == uVar2;
          goto LAB_00512b6a;
        }
        goto LAB_00512b86;
      }
      iVar6 = iVar6 + 1;
      iVar3 = FUN_00460c50(param_1);
    } while (iVar6 < iVar3);
    uVar2 = CONCAT31((int3)((uint)iVar3 >> 8),uStack_4._2_1_);
    if (uStack_4._3_1_ < uStack_4._2_1_) goto LAB_00512b86;
  }
  if ((((int)uStack_4._3_1_ != (char)uVar2 + 1) && ((char)uVar2 != -1)) && (uStack_4._3_1_ != -1)) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
LAB_00512b86:
  return uVar2 & 0xffffff00;
}

