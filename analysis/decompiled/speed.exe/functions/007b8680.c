/* speed.exe 007b8680 FUN_007b8680; analysis pseudocode, not buildable source.
 * calls 007a7030 FUN_007a7030
 * calls 005251a0 FUN_005251a0
 * calls 007b83a0 FUN_007b83a0
 * calls 007aec00 FUN_007aec00
 * calls 0056f250 FUN_0056f250
 * calls 005816b0 FUN_005816b0
 * calls 00515bb0 FUN_00515bb0
 * calls 00747ae0 FUN_00747ae0
 * calls 00460bf0 FUN_00460bf0
 * calls 0056f100 FUN_0056f100
 */

void __fastcall FUN_007b8680(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = FUN_007a7030();
  uVar3 = FUN_005251a0(param_1[4],0x91c4a50,0x5bc);
  FUN_00515bb0(uVar3);
  uVar3 = FUN_005251a0(param_1[4],0x2d145be3,0x682);
  FUN_00515bb0(uVar3);
  uVar1 = param_1[0x52];
  iVar6 = 0;
  if (uVar1 < 0x603) {
    if (uVar1 == 0x602) {
      iVar6 = 0x7d212cfb;
    }
    else if (uVar1 < 0x506) {
      if (uVar1 == 0x505) {
        iVar6 = -0x7589682a;
      }
      else if (uVar1 == 0x501) {
        iVar6 = 0x301dedd3;
      }
      else if (uVar1 == 0x502) {
        iVar6 = 0x48e6ca49;
      }
    }
    else if (uVar1 == 0x506) {
      iVar6 = -0x4e064f37;
    }
    else if (uVar1 == 0x601) {
      iVar6 = 0x7d212cfa;
    }
  }
  else {
    switch(uVar1) {
    case 0x603:
      iVar6 = 0x7d212cfc;
      break;
    case 0x604:
      iVar6 = 0x7d212cfd;
      break;
    case 0x605:
      iVar6 = 0x7d212cfe;
      break;
    case 0x606:
      iVar6 = 0x7d212cff;
    }
  }
  param_1[0x57] = iVar6;
  uVar3 = 0;
  iVar6 = FUN_007aec00(uVar2);
  if ((iVar6 == 0) || (*(int *)(*(int *)(iVar6 + 0xc) + 0xc) == 0)) {
    FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 0x10));
    uVar5 = FUN_005816b0(uVar2);
    iVar6 = FUN_0056f250(uVar5,uVar2);
    if (iVar6 == 0) goto LAB_007b8823;
    iVar6 = FUN_00747ae0(0xebb03e66,0);
    uVar3 = 0;
    uVar2 = FUN_00460bf0(&DAT_008b4cbc,0);
    iVar4 = FUN_00747ae0(uVar2,uVar3);
    *(bool *)(param_1 + 0x6f) = iVar6 == iVar4;
  }
  else {
    iVar6 = FUN_00747ae0(0xebb03e66,0);
    uVar3 = 0;
    uVar2 = FUN_00460bf0(&DAT_008b4cbc,0);
    iVar4 = FUN_00747ae0(uVar2,uVar3);
    *(bool *)(param_1 + 0x6f) = iVar6 == iVar4;
  }
  uVar3 = FUN_00747ae0(0xebb03e66,0);
LAB_007b8823:
  if (DAT_00905e38 != -1) {
    *(bool *)(param_1 + 0x6f) = DAT_00905e38 != 0;
    DAT_00905e38 = -1;
  }
  FUN_007b83a0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x007b8852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

