/* speed.exe 004baec0 FUN_004baec0; analysis pseudocode, not buildable source.
 * calls 004badf0 FUN_004badf0
 * calls 004b1dd0 FUN_004b1dd0
 * calls 007edb85 FUN_007edb85
 * calls 007f0e0f FUN_007f0e0f
 * calls 007ec1bd FUN_007ec1bd
 * calls 0045ce40 FUN_0045ce40
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00462430 FUN_00462430
 * calls 007edabb FUN_007edabb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004baec0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0x60)) {
    do {
      piVar1 = *(int **)(param_1 + 0x5c);
      if (*piVar1 == -1) {
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x3c);
      }
      else {
        if (*piVar1 != -2) break;
        *(int *)(param_1 + 0x5c) = piVar1[1] + (int)piVar1;
      }
    } while (*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0x60));
  }
  FUN_007ec1bd();
  iVar5 = *(int *)(param_1 + 0x68);
  iVar8 = *(int *)(iVar5 + 0xc);
  while ((iVar8 != 0 && (iVar8 = *(int *)(iVar5 + 0xc), *(int *)(iVar8 + 4) != 1))) {
    uVar6 = *(uint *)(param_1 + 0x5c);
    uVar7 = *(int *)(iVar8 + 0x124) - 1;
    if (*(uint *)(param_1 + 100) < uVar6) {
      if (uVar6 <= uVar7) break;
LAB_004baf34:
      if (uVar7 < *(uint *)(param_1 + 100)) break;
    }
    else if (uVar6 <= uVar7) goto LAB_004baf34;
    if (iVar5 == *(int *)(param_1 + 0x68)) {
      *(int *)(param_1 + 0x68) = iVar8;
    }
    else {
      *(int *)(*(int *)(iVar5 + 8) + 0xc) = iVar8;
    }
    if (iVar5 == *(int *)(param_1 + 0x70)) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar5 + 8);
    }
    else {
      *(undefined4 *)(*(int *)(iVar5 + 0xc) + 8) = *(undefined4 *)(iVar5 + 8);
    }
    if (iVar5 == *(int *)(param_1 + 0x6c)) {
      iVar8 = *(int *)(iVar5 + 0xc);
      if (iVar8 == 0) {
        iVar8 = *(int *)(iVar5 + 8);
      }
      *(int *)(param_1 + 0x6c) = iVar8;
    }
    *(undefined4 *)(iVar5 + 4) = 0;
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1 + 0x74);
    *(int *)(param_1 + 0x74) = iVar5;
    iVar5 = *(int *)(param_1 + 0x68);
    iVar8 = *(int *)(iVar5 + 0xc);
  }
  FUN_007ec1c8();
  uVar6 = *(uint *)(param_1 + 0x5c);
  uVar7 = *(uint *)(param_1 + 100);
  if (uVar7 < uVar6) {
    iVar5 = (uVar6 - uVar7) + -0x41;
  }
  else {
    iVar5 = (*(int *)(param_1 + 0x40) - uVar7) + -0x40;
    if (iVar5 < *(int *)(param_1 + 0x18c)) {
      uVar7 = uVar7 - *(int *)(param_1 + 0x60);
      iVar5 = *(int *)(*(int *)(param_1 + 0x6c) + 0x10);
      if (iVar5 == 1) {
        if ((int)(uVar6 - *(int *)(param_1 + 0x3c)) < (int)(uVar7 + 1)) goto LAB_004bafd4;
      }
      else if ((int)((uVar6 - *(int *)(param_1 + 0x3c)) + -0x40) < (int)(uVar7 + 1))
      goto LAB_004bafd4;
      uVar6 = uVar7 & 0x8000003f;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
      }
      if ((uVar6 == 0) || (iVar5 == 1)) {
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
      }
      else {
        *(uint *)(param_1 + 0x3c) = (*(int *)(param_1 + 0x38) - uVar6) + 0x40;
      }
      FUN_007f0e0f(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x60),uVar7);
      puVar2 = *(undefined4 **)(param_1 + 0x60);
      *puVar2 = 0xffffffff;
      puVar2[1] = 8;
      iVar8 = *(int *)(param_1 + 0x3c);
      iVar5 = iVar8 + uVar7;
      *(int *)(param_1 + 0x60) = iVar8;
      *(int *)(param_1 + 100) = iVar5;
      if (**(int **)(param_1 + 0x5c) == -1) {
        *(int *)(param_1 + 0x5c) = iVar8;
        iVar5 = (*(int *)(param_1 + 0x40) - iVar5) + -0x40;
      }
      else {
        iVar5 = (int)*(int **)(param_1 + 0x5c) + (-1 - iVar5);
      }
    }
  }
  if (((*(int *)(param_1 + 0x54) == 0) && (*(int *)(param_1 + 0x4c) < param_2)) &&
     (cVar4 = FUN_004b1dd0(*(undefined4 *)(param_1 + 0x30)), cVar4 != '\0')) {
    FUN_00462430(DAT_009120e8);
    DAT_00911e98 = 1;
    *(undefined4 *)(param_1 + 0x44) = 2;
    _DAT_009120ec = FUN_0045ce40();
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x17c);
  if (((uVar6 == 0) || ((DAT_00912840 < uVar6 && (uVar6 < DAT_00912848 + DAT_00912840)))) &&
     ((DAT_009b2c14 != 0 || (DAT_009aab58 != 0)))) {
    DAT_00911ec0 = 1;
  }
  else {
    DAT_00911ec0 = 0;
  }
  DAT_00911e98 = 0;
  iVar8 = *(int *)(param_1 + 0x18c);
  if (iVar8 <= iVar5) {
    iVar3 = *(int *)(param_1 + 0x6c);
    if (*(int *)(iVar3 + 0x10) == 1) {
      if (*(int *)(iVar3 + 0x11c) < *(int *)(param_1 + 0x180) + iVar5) {
        *(int *)(param_1 + 0x188) = *(int *)(iVar3 + 0x11c) - *(int *)(param_1 + 0x180);
      }
      else {
        *(int *)(param_1 + 0x188) = iVar5;
      }
      FUN_007f0e0f(*(undefined4 *)(param_1 + 100),*(undefined4 *)(iVar3 + 0x118),
                   *(undefined4 *)(param_1 + 0x188));
      *(int *)(iVar3 + 0x118) = *(int *)(iVar3 + 0x118) + *(int *)(param_1 + 0x188);
      FUN_004badf0(0,0,param_1);
      return;
    }
    if (iVar8 < iVar5) {
      *(int *)(param_1 + 0x188) = (iVar5 / iVar8) * iVar8;
    }
    else {
      *(int *)(param_1 + 0x188) = iVar8;
    }
    DAT_00911f94 = 0;
    iVar5 = FUN_007edb85(*(undefined4 *)(param_1 + 0x17c),*(undefined4 *)(param_1 + 0x180),
                         *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x188),param_2,
                         param_1);
    *(int *)(param_1 + 0x184) = iVar5;
    if (iVar5 == 0) {
      return;
    }
    FUN_007edabb();
    return;
  }
LAB_004bafd4:
  *(undefined4 *)(param_1 + 0x44) = 2;
  return;
}

