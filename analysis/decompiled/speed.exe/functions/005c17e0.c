/* speed.exe 005c17e0 FUN_005c17e0; analysis pseudocode, not buildable source.
 * calls 005b7c30 FUN_005b7c30
 * calls 005b6550 FUN_005b6550
 * calls 005adf20 FUN_005adf20
 * calls 005bec90 FUN_005bec90
 * calls 005bc530 FUN_005bc530
 * calls 005b1670 FUN_005b1670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005c17e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (DAT_0091dcf8 == DAT_00982b78) {
    _DAT_0091dcf4 = _DAT_0091dcf4 + 1;
  }
  else {
    _DAT_0091dcf4 = 0;
    DAT_0091dcf8 = DAT_00982b78;
  }
  uVar5 = *(uint *)(param_2 + 0x1c);
  if ((uVar5 & 0x1c00000) == 0) {
    *(uint *)(param_2 + 0x1c) = (DAT_008f5798 | 0xfdffffff) & uVar5;
  }
  else {
    *(uint *)(param_2 + 0x1c) = uVar5 | 0x2000000;
  }
  iVar4 = *(int *)(param_2 + 0x54);
  iVar1 = *(int *)(iVar4 + 0x10);
  iVar2 = *(int *)(iVar4 + 0xc);
  iVar3 = *(int *)(param_1 + 0x34) + iVar1;
  *(int *)(iVar4 + 0x10) = iVar3;
  if (iVar3 < 0) {
    *(undefined4 *)(iVar4 + 0x10) = 0;
  }
  iVar3 = *(int *)(iVar4 + 0x10);
  if (iVar3 < iVar2) {
    if ((*(char *)(param_1 + 0x14) == '\0') || (*(int *)(iVar4 + 0x24) == 0)) goto LAB_005c1a33;
    uVar5 = *(uint *)(iVar4 + 0x14) & 3;
    iVar7 = iVar1;
    if (uVar5 == 0) {
LAB_005c1a22:
      uVar6 = *(undefined4 *)(param_1 + 0x30);
    }
    else if (uVar5 == 1) {
      if (iVar3 < iVar1) {
        FUN_005bc530(*(undefined4 *)(param_1 + 0x30),param_2,iVar4,iVar1,iVar2);
        iVar3 = *(int *)(iVar4 + 0x10);
        uVar6 = *(undefined4 *)(param_1 + 0x30);
        iVar7 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x30);
      }
    }
    else {
      if (uVar5 != 2) goto LAB_005c1a33;
      if (iVar1 < iVar2) {
        if (iVar2 <= iVar3) {
          FUN_005bc530(*(undefined4 *)(param_1 + 0x30),param_2,iVar4,iVar1,iVar2);
          iVar3 = *(int *)(iVar4 + 0x10) - iVar2;
          iVar7 = iVar2;
        }
        goto LAB_005c1a22;
      }
      if (iVar3 < iVar2) {
        FUN_005bc530(*(undefined4 *)(param_1 + 0x30),param_2,iVar4,iVar1 - iVar2,0);
        iVar3 = *(int *)(iVar4 + 0x10);
        uVar6 = *(undefined4 *)(param_1 + 0x30);
        iVar7 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x30);
        iVar3 = iVar3 - iVar2;
        iVar7 = iVar1 - iVar2;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x14) == '\0') goto LAB_005c1a33;
    if (*(int *)(iVar4 + 0x18) == 0) {
      uVar5 = *(uint *)(iVar4 + 0x14) & 3;
      if (uVar5 == 0) {
        if (*(int *)(iVar4 + 0x24) != 0) {
          FUN_005bc530(*(undefined4 *)(param_1 + 0x30),param_2,iVar4,iVar1,iVar2);
        }
        *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0xc) + 1;
        goto LAB_005c1a33;
      }
      if (uVar5 == 1) {
        if (0 < iVar2) {
          if (*(int *)(iVar4 + 0x24) != 0) {
            FUN_005bc530(*(undefined4 *)(param_1 + 0x30),param_2,iVar4,iVar1,iVar2);
          }
          iVar3 = *(int *)(iVar4 + 0x10) % *(int *)(iVar4 + 0xc);
          *(int *)(iVar4 + 0x10) = iVar3;
          if (*(int *)(iVar4 + 0x24) != 0) {
            FUN_005bc530(*(undefined4 *)(param_1 + 0x30),param_2,iVar4,0,iVar3);
          }
          FUN_005b7c30();
          goto LAB_005c1a33;
        }
      }
      else {
        if (uVar5 != 2) goto LAB_005c1a33;
        if (0 < iVar2) {
          *(int *)(iVar4 + 0x10) = iVar3 % (iVar2 * 2);
          goto LAB_005c1a33;
        }
      }
      *(undefined4 *)(iVar4 + 0x10) = 0;
      goto LAB_005c1a33;
    }
    FUN_005bec90(param_2,iVar4);
    iVar3 = *(int *)(iVar4 + 0x10) - iVar2;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    if (*(int *)(iVar4 + 0x24) != 0) {
      FUN_005bc530(*(undefined4 *)(param_1 + 0x30),param_2,iVar4,iVar1,iVar2);
    }
    iVar4 = *(int *)(iVar4 + 0x18);
    *(int *)(param_2 + 0x54) = iVar4;
    if (iVar4 != 0) {
      FUN_005b7c30();
    }
    *(int *)(iVar4 + 0x10) = iVar3;
    if (*(int *)(iVar4 + 0x24) == 0) goto LAB_005c1a33;
    uVar6 = *(undefined4 *)(param_1 + 0x30);
    iVar7 = 0;
  }
  FUN_005bc530(uVar6,param_2,iVar4,iVar7,iVar3);
LAB_005c1a33:
  if ((((*(char *)(param_1 + 0x14) == '\0') || (iVar1 != *(int *)(iVar4 + 0x10))) ||
      (iVar1 != *(int *)(iVar4 + 0xc) + 1)) || ((*(uint *)(param_2 + 0x1c) & 0x400000) != 0)) {
    FUN_005bec90(param_2,iVar4);
  }
  switch(*(undefined4 *)(param_2 + 0x18)) {
  case 4:
    FUN_005b6550((float)param_3);
    break;
  case 5:
    FUN_005b1670(param_2,param_3);
    break;
  case 6:
    FUN_005adf20((float)param_3);
    break;
  case 7:
    if (*(char *)(param_1 + 0x14) != '\0') {
      *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + param_3;
    }
  }
  if (((*(char *)(param_1 + 0x14) == '\x01') && (iVar1 == *(int *)(iVar4 + 0x10))) &&
     ((iVar1 == *(int *)(iVar4 + 0xc) + 1 && ((*(uint *)(param_2 + 0x1c) & 0x400000) == 0)))) {
    *(uint *)(param_2 + 0x1c) = (DAT_008f5798 | 0xfe7fffff) & *(uint *)(param_2 + 0x1c);
  }
  uVar5 = *(uint *)(param_2 + 0x1c) & (DAT_008f5798 | 0xffbfffff);
  *(uint *)(param_2 + 0x1c) = uVar5;
  if ((uVar5 & 0x1c00000) != 0) {
    *(uint *)(param_2 + 0x1c) = uVar5 | 0x2000000;
  }
  return;
}

