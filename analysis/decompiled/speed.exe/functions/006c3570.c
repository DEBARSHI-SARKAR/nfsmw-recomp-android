/* speed.exe 006c3570 FUN_006c3570; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 006c3440 FUN_006c3440
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c3570(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  int iStack_18;
  undefined1 local_8 [8];
  
  iVar6 = 0;
  (**(code **)(*DAT_0098298c + 0x4c))(DAT_0098298c,0,local_8,0,0);
  iVar7 = 0;
  iVar5 = DAT_008f9af0;
  if (0 < DAT_008f9af0) {
    do {
      iVar9 = 0;
      if (0 < iVar5) {
        do {
          fVar8 = (float)DAT_008f9af0 - _DAT_0089096c;
          FUN_006c3440((float)iVar9 / fVar8,DAT_008f94b0);
          FUN_006c3440((float)iVar7 / fVar8,DAT_008f94b4);
          FUN_006c3440(extraout_EDX,DAT_008f94b8);
          FUN_006c3440((float)iVar7 / fVar8,DAT_008f94bc);
          uVar1 = FUN_007c4b80();
          uVar2 = FUN_007c4b80();
          uVar3 = FUN_007c4b80();
          uVar4 = FUN_007c4b80();
          *(uint *)(iStack_18 + (iVar5 * iVar9 + iVar7) * 4) =
               ((uint)CONCAT11(uVar1,uVar2) << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff;
          iVar9 = iVar9 + 1;
          iVar5 = DAT_008f9af0;
        } while (iVar9 < DAT_008f9af0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  (**(code **)(*DAT_0098298c + 0x50))(DAT_0098298c,0);
  _DAT_0093de68 = DAT_008f94b0;
  _DAT_0093de74 = DAT_008f94bc;
  _DAT_0093de6c = DAT_008f94b4;
  _DAT_0093de70 = DAT_008f94b8;
  (**(code **)(*DAT_0093e870 + 0x4c))(DAT_0093e870,0,&stack0xffffffdc,0,0);
  iVar5 = 0;
  if (0 < DAT_008f9af8) {
    do {
      uVar3 = FUN_007c4b80();
      uVar3 = uVar3 & 0xff;
      uVar4 = FUN_007c4b80();
      *(uint *)(iVar6 + iVar5 * 4) = ((uVar3 << 8 | uVar3) << 8 | uVar3) << 8 | uVar4 & 0xff;
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_008f9af8);
  }
  (**(code **)(*DAT_0093e870 + 0x50))(DAT_0093e870,0);
  _DAT_00982c5c = DAT_008f94f0;
  return;
}

