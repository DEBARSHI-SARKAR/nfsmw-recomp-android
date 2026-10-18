/* speed.exe 00753320 FUN_00753320; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 0074d0d0 FUN_0074d0d0
 * calls 00749460 FUN_00749460
 * calls 00460c20 FUN_00460c20
 * calls 007493a0 FUN_007493a0
 */

int FUN_00753320(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  
  if (param_4[0x5f] != 0) {
    iVar3 = FUN_007493a0(param_4[0x5f],*param_4,(int)*(char *)((int)param_4 + 7));
    iVar4 = FUN_00749460(param_4,0);
    if (iVar3 == 0) {
LAB_0075335a:
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      if (0 < param_2) {
        do {
          if (*(int *)(param_1 + iVar6 * 4) == iVar3) goto LAB_0075335a;
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_2);
      }
      iVar6 = param_2;
      if (param_2 < param_3) {
        *(int *)(param_1 + param_2 * 4) = iVar3;
        iVar6 = 1;
      }
    }
    param_2 = param_2 + iVar6;
    if (iVar4 != 0) {
      iVar3 = 0;
      if (0 < param_2) {
        do {
          if (*(int *)(param_1 + iVar3 * 4) == iVar4) goto LAB_007533b8;
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_2);
      }
      if (param_2 < param_3) {
        *(int *)(param_1 + param_2 * 4) = iVar4;
        param_2 = param_2 + 1;
      }
      else {
        param_2 = param_2 * 2;
      }
    }
  }
LAB_007533b8:
  if (param_4[0x54] == 0) {
    iVar3 = 0;
  }
  else {
    uVar5 = FUN_0074d0d0();
    iVar3 = FUN_00460c20("_WHEEL",uVar5);
  }
  if (param_4[0x54] == 0) {
    iVar4 = 0;
  }
  else {
    uVar5 = FUN_0074d0d0();
    iVar4 = FUN_00460c20("_WHEEL_INNER_MASK",uVar5);
  }
  if ((iVar3 != 0) && (iVar4 != 0)) {
    iVar6 = 0;
    if (0 < param_2) {
      do {
        if (*(int *)(param_1 + iVar6 * 4) == iVar3) {
          iVar6 = 0;
          goto LAB_00753430;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_2);
    }
    iVar6 = param_2;
    if (param_2 < param_3) {
      *(int *)(param_1 + param_2 * 4) = iVar3;
      iVar6 = 1;
    }
LAB_00753430:
    param_2 = param_2 + iVar6;
    iVar3 = 0;
    if (0 < param_2) {
      do {
        if (*(int *)(param_1 + iVar3 * 4) == iVar4) {
          iVar3 = 0;
          goto LAB_00753458;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_2);
    }
    iVar3 = param_2;
    if (param_2 < param_3) {
      *(int *)(param_1 + param_2 * 4) = iVar4;
      iVar3 = 1;
    }
LAB_00753458:
    param_2 = param_2 + iVar3;
  }
  iVar3 = param_4[0x54];
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar4 = FUN_00460bf0("SPINNER_TEXTURE");
    uVar2 = *(ushort *)(iVar3 + 10);
    if (uVar2 != 0xffff) {
      iVar3 = (int)*(short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar2 * 2);
      psVar7 = (short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar2 * 2);
      iVar6 = 0;
      if (0 < iVar3) {
        do {
          psVar7 = psVar7 + 1;
          piVar1 = (int *)(*(int *)(DAT_009b09d4 + 0x1c) + *psVar7 * 8);
          if ((iVar4 == 0) || (*piVar1 == iVar4)) {
            if (piVar1 != (int *)0x0) {
              iVar3 = piVar1[1];
              goto LAB_007534bf;
            }
            break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar3);
      }
    }
    iVar3 = 0;
  }
LAB_007534bf:
  iVar4 = param_4[0x54];
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar6 = FUN_00460bf0("SPINNER_TEXTURE");
    uVar2 = *(ushort *)(iVar4 + 10);
    if (uVar2 != 0xffff) {
      iVar4 = (int)*(short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar2 * 2);
      psVar7 = (short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar2 * 2);
      iVar8 = 0;
      if (0 < iVar4) {
        do {
          psVar7 = psVar7 + 1;
          piVar1 = (int *)(*(int *)(DAT_009b09d4 + 0x1c) + *psVar7 * 8);
          if ((iVar6 == 0) || (*piVar1 == iVar6)) {
            if (piVar1 != (int *)0x0) {
              iVar4 = piVar1[1];
              goto LAB_0075353d;
            }
            break;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar4);
      }
    }
    iVar4 = 0;
LAB_0075353d:
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00460c20("_MASK",iVar4);
    }
  }
  if ((iVar3 != 0) && (iVar4 != 0)) {
    iVar6 = 0;
    if (0 < param_2) {
      do {
        if (*(int *)(param_1 + iVar6 * 4) == iVar3) {
          iVar6 = 0;
          goto LAB_00753592;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_2);
    }
    iVar6 = param_2;
    if (param_2 < param_3) {
      *(int *)(param_1 + param_2 * 4) = iVar3;
      iVar6 = 1;
    }
LAB_00753592:
    param_2 = param_2 + iVar6;
    iVar3 = 0;
    if (0 < param_2) {
      do {
        if (*(int *)(param_1 + iVar3 * 4) == iVar4) {
          return param_2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_2);
    }
    if (param_3 <= param_2) {
      return param_2 * 2;
    }
    *(int *)(param_1 + param_2 * 4) = iVar4;
    param_2 = param_2 + 1;
  }
  return param_2;
}

