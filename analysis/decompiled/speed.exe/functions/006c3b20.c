/* speed.exe 006c3b20 FUN_006c3b20; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0073dab0 FUN_0073dab0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006c3b20(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iStack_18;
  undefined1 local_8 [8];
  
  (**(code **)(*DAT_00982900 + 0x4c))(DAT_00982900,0,local_8,0,0);
  uVar4 = 0;
  fVar5 = 0.0;
  if (DAT_008f9b08 != 0) {
    iVar7 = param_1 + 0x10;
    iVar8 = param_1 + 0x50;
    do {
      fVar6 = fVar5;
      FUN_0073dab0(fVar5,iVar7);
      uVar1 = FUN_007c4b80();
      FUN_0073dab0(fVar5,iVar8);
      uVar2 = FUN_007c4b80();
      FUN_0073dab0(fVar5,param_1 + 0xb0);
      uVar3 = FUN_007c4b80();
      fVar5 = fVar6 + _DAT_00899dd0;
      *(uint *)(iStack_18 + uVar4 * 4) =
           ((uVar1 | 0xffffff00) << 8 | uVar2 & 0xff) << 8 | uVar3 & 0xff;
      uVar4 = uVar4 + 1;
    } while (uVar4 < DAT_008f9b08);
  }
  (**(code **)(*DAT_00982900 + 0x50))(DAT_00982900,0);
  return;
}

