/* speed.exe 007b21b0 FUN_007b21b0; analysis pseudocode, not buildable source.
 * calls 0056f250 FUN_0056f250
 * calls 00460bf0 FUN_00460bf0
 * calls 005157e0 FUN_005157e0
 * calls 007aec00 FUN_007aec00
 * calls 00747ac0 FUN_00747ac0
 * calls 005816b0 FUN_005816b0
 * calls 00524850 FUN_00524850
 * calls 0056f100 FUN_0056f100
 */

void __fastcall FUN_007b21b0(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint local_c [3];
  
  iVar3 = FUN_007aec00(0x84);
  FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 0x10));
  uVar8 = 0x84;
  uVar4 = FUN_005816b0(0x84);
  iVar5 = FUN_0056f250(uVar4,uVar8);
  local_c[0] = 0xffffc373;
  local_c[1] = 0xffffae40;
  local_c[2] = 0xffffffff;
  if ((iVar3 == 0) || (*(int *)(DAT_009ba080 + 0xc) != *(int *)(*(int *)(iVar3 + 0xc) + 0xc))) {
    if (*(int *)(DAT_009ba080 + 0xc) == iVar5) {
      iVar3 = 0x85;
      iVar5 = 0;
      do {
        FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 0x10));
        iVar6 = iVar3;
        uVar4 = FUN_005816b0(iVar3);
        iVar6 = FUN_0056f250(uVar4,iVar6);
        iVar3 = iVar3 + 1;
        if (iVar6 != 0) {
          uVar8 = 0;
          uVar4 = FUN_00460bf0(&PTR_DAT_008a15d0,0);
          bVar1 = FUN_00747ac0(uVar4,uVar8);
          uVar8 = 0;
          uVar4 = FUN_00460bf0("GREEN",0);
          bVar2 = FUN_00747ac0(uVar4,uVar8);
          uVar8 = 0;
          uVar4 = FUN_00460bf0(&DAT_008a15c0,0);
          uVar7 = FUN_00747ac0(uVar4,uVar8);
          local_c[iVar5] = uVar7 & 0xff | ((bVar1 | 0xffffff00) << 8 | (uint)bVar2) << 8;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
    }
  }
  else {
    iVar3 = 0x85;
    iVar5 = 0;
    do {
      iVar6 = FUN_007aec00(iVar3);
      iVar3 = iVar3 + 1;
      if (iVar6 != 0) {
        uVar8 = 0;
        uVar4 = FUN_00460bf0(&PTR_DAT_008a15d0,0);
        bVar1 = FUN_00747ac0(uVar4,uVar8);
        uVar8 = 0;
        uVar4 = FUN_00460bf0("GREEN",0);
        bVar2 = FUN_00747ac0(uVar4,uVar8);
        uVar8 = 0;
        uVar4 = FUN_00460bf0(&DAT_008a15c0,0);
        uVar7 = FUN_00747ac0(uVar4,uVar8);
        local_c[iVar5] = uVar7 & 0xff | ((bVar1 | 0xffffff00) << 8 | (uint)bVar2) << 8;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
  }
  uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x5d19f25,local_c[0]);
  FUN_005157e0(uVar4);
  uVar7 = local_c[1];
  uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xd312f0cb,local_c[1]);
  FUN_005157e0(uVar4);
  uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x8fe2a217,uVar7);
  FUN_005157e0(uVar4);
  uVar7 = local_c[2];
  uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xc0721eb9,local_c[2]);
  FUN_005157e0(uVar4);
  uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xc62ad685,uVar7);
  FUN_005157e0(uVar4);
  uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xb8f1f802,uVar7);
  FUN_005157e0(uVar4);
  return;
}

