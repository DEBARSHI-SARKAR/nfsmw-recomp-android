/* speed.exe 007b1ab0 FUN_007b1ab0; analysis pseudocode, not buildable source.
 * calls 0056f250 FUN_0056f250
 * calls 00460bf0 FUN_00460bf0
 * calls 005157e0 FUN_005157e0
 * calls 007aec00 FUN_007aec00
 * calls 00747ac0 FUN_00747ac0
 * calls 005816b0 FUN_005816b0
 * calls 00524850 FUN_00524850
 * calls 0056f100 FUN_0056f100
 */

void __fastcall FUN_007b1ab0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puStack_18;
  int iStack_14;
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = FUN_007aec00(0x84);
  FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 0x10));
  uVar8 = 0x84;
  uVar4 = FUN_005816b0(0x84);
  iVar5 = FUN_0056f250(uVar4,uVar8);
  iVar6 = (**(code **)(*param_1 + 0x14))();
  if ((*(int *)(iVar6 + 0xc) != iVar5) &&
     ((iVar3 == 0 ||
      (iVar5 = (**(code **)(*param_1 + 0x14))(),
      *(int *)(iVar5 + 0xc) != *(int *)(*(int *)(iVar3 + 0xc) + 0xc))))) {
    uVar4 = FUN_00524850(param_1[4],0x5d19f25,0xffffc373);
    FUN_005157e0(uVar4);
    uVar4 = FUN_00524850(param_1[4],0xc0721eb9,0xffffffff);
    FUN_005157e0(uVar4);
    uVar4 = FUN_00524850(param_1[4],0xc62ad685,0xffffffff);
    FUN_005157e0(uVar4);
    uVar4 = FUN_00524850(param_1[4],0xb8f1f802,0xffffffff);
    FUN_005157e0(uVar4);
    uVar4 = FUN_00524850(param_1[4],0xd312f0cb,0xffffae40);
    FUN_005157e0(uVar4);
    uVar4 = FUN_00524850(param_1[4],0x8fe2a217,0xffffae40);
    FUN_005157e0(uVar4);
    return;
  }
  puStack_18 = &uStack_c;
  iVar5 = 0x85;
  iStack_14 = 3;
  do {
    iVar6 = FUN_007aec00(iVar5);
    if (((iVar6 == 0) || (iVar3 == 0)) ||
       (iVar6 = (**(code **)(*param_1 + 0x14))(),
       *(int *)(iVar6 + 0xc) != *(int *)(*(int *)(iVar3 + 0xc) + 0xc))) {
      FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 0x10));
      iVar6 = iVar5;
      uVar4 = FUN_005816b0(iVar5);
      FUN_0056f250(uVar4,iVar6);
    }
    uVar8 = 0;
    iVar5 = iVar5 + 1;
    uVar4 = FUN_00460bf0(&PTR_DAT_008a15d0,0);
    bVar1 = FUN_00747ac0(uVar4,uVar8);
    uVar8 = 0;
    uVar4 = FUN_00460bf0("GREEN",0);
    bVar2 = FUN_00747ac0(uVar4,uVar8);
    uVar8 = 0;
    uVar4 = FUN_00460bf0(&DAT_008a15c0,0);
    uVar7 = FUN_00747ac0(uVar4,uVar8);
    *puStack_18 = uVar7 & 0xff | ((bVar1 | 0xffffff00) << 8 | (uint)bVar2) << 8;
    puStack_18 = puStack_18 + 1;
    iStack_14 = iStack_14 + -1;
  } while (iStack_14 != 0);
  uVar4 = FUN_00524850(param_1[4],0x5d19f25,uStack_c);
  FUN_005157e0(uVar4);
  uVar4 = FUN_00524850(param_1[4],0xc0721eb9,uStack_4);
  FUN_005157e0(uVar4);
  uVar4 = FUN_00524850(param_1[4],0xc62ad685,uStack_4);
  FUN_005157e0(uVar4);
  uVar4 = FUN_00524850(param_1[4],0xb8f1f802,uStack_4);
  FUN_005157e0(uVar4);
  uVar4 = FUN_00524850(param_1[4],0xd312f0cb,uStack_8);
  FUN_005157e0(uVar4);
  uVar4 = FUN_00524850(param_1[4],0x8fe2a217,uStack_8);
  FUN_005157e0(uVar4);
  return;
}

