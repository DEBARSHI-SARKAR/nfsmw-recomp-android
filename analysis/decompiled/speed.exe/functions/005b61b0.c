/* speed.exe 005b61b0 FUN_005b61b0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005b61b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  
  uVar3 = *(uint *)(param_1 + 0x5c);
  if (((byte)uVar3 & 0x60) == 0x60) {
    return;
  }
  if ((uVar3 & 0x20) != 0) {
    param_2 = 0;
  }
  if ((uVar3 & 0x40) != 0) {
    param_3 = 0;
  }
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    if ((uVar3 & 0x20) == 0) {
      uVar4 = *(uint *)(param_1 + 0x60);
      uVar12 = *(int *)(param_1 + 0x88) + param_2;
      if ((uVar3 & 4) == 0) {
        if ((int)uVar12 < 0) {
          iVar8 = *(int *)(param_1 + 0x78);
          uVar9 = uVar4 + uVar12;
          uVar2 = *(undefined4 *)(iVar8 + 4 + uVar9 * 0xc);
          *(undefined4 *)(param_1 + 0x94) = uVar2;
          *(undefined4 *)(param_1 + 0x70) = uVar2;
          do {
            iVar1 = uVar9 * 0xc;
            uVar9 = (uVar9 + 1) % uVar4;
            *(float *)(param_1 + 0x70) = *(float *)(iVar8 + iVar1) + *(float *)(param_1 + 0x70);
          } while (uVar9 != *(uint *)(param_1 + 0x88));
        }
        else {
          if ((int)uVar12 < (int)uVar4) goto LAB_005b6222;
          uVar9 = *(uint *)(param_1 + 0x88);
          iVar8 = *(int *)(param_1 + 0x78);
          *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x70);
          do {
            uVar10 = uVar9 % uVar4;
            uVar9 = uVar9 + 1;
            *(float *)(param_1 + 0x94) =
                 *(float *)(iVar8 + uVar10 * 0xc) + *(float *)(param_1 + 0x94);
          } while (uVar9 != uVar12);
        }
        *(uint *)(param_1 + 0x5c) = uVar3 | 8;
        *(uint *)(param_1 + 0x88) = uVar12 % uVar4;
      }
      else {
        if ((int)uVar4 <= (int)uVar12) {
          uVar12 = uVar4 - 1;
        }
        if ((int)uVar12 < 0) {
          uVar12 = 0;
        }
LAB_005b6222:
        iVar8 = *(int *)(param_1 + 0x78);
        *(uint *)(param_1 + 0x88) = uVar12;
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar8 + 4 + uVar12 * 0xc);
      }
      uVar3 = *(uint *)(param_1 + 0x88);
      fVar5 = _DAT_00890968;
      if (uVar3 < uVar4) {
        pfVar11 = (float *)(iVar8 + uVar3 * 0xc);
        iVar8 = *(int *)(param_1 + 0x60) - uVar3;
        do {
          fVar5 = fVar5 + *pfVar11;
          pfVar11 = pfVar11 + 3;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if ((*(uint *)(param_1 + 0x5c) & 4) == 0) {
        if (fVar5 < *(float *)(param_1 + 0x68)) {
          *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 8;
        }
      }
      else if (fVar5 < *(float *)(param_1 + 0x68)) {
        *(float *)(param_1 + 0x94) =
             *(float *)(param_1 + 0x94) - (*(float *)(param_1 + 0x68) - fVar5);
      }
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x20;
    }
    if (param_3 == 0) goto LAB_005b6336;
  }
  uVar3 = *(uint *)(param_1 + 0x5c);
  if ((uVar3 & 0x40) != 0) goto LAB_005b6336;
  uVar12 = *(int *)(param_1 + 0x8c) + param_3;
  uVar4 = *(uint *)(param_1 + 100);
  if ((uVar3 & 4) == 0) {
    if ((int)uVar12 < 0) {
      iVar8 = *(int *)(param_1 + 0x7c);
      uVar9 = uVar4 + uVar12;
      uVar2 = *(undefined4 *)(iVar8 + 4 + uVar9 * 0xc);
      *(undefined4 *)(param_1 + 0x98) = uVar2;
      *(undefined4 *)(param_1 + 0x74) = uVar2;
      do {
        iVar1 = uVar9 * 0xc;
        uVar9 = (uVar9 + 1) % uVar4;
        *(float *)(param_1 + 0x74) = *(float *)(iVar8 + iVar1) + *(float *)(param_1 + 0x74);
      } while (uVar9 != *(uint *)(param_1 + 0x8c));
    }
    else {
      if ((int)uVar12 < (int)uVar4) goto LAB_005b62ca;
      uVar9 = *(uint *)(param_1 + 0x8c);
      iVar8 = *(int *)(param_1 + 0x7c);
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x74);
      do {
        uVar10 = uVar9 % uVar4;
        uVar9 = uVar9 + 1;
        *(float *)(param_1 + 0x98) = *(float *)(iVar8 + uVar10 * 0xc) + *(float *)(param_1 + 0x98);
      } while (uVar9 != uVar12);
    }
    *(uint *)(param_1 + 0x5c) = uVar3 | 8;
    *(uint *)(param_1 + 0x8c) = uVar12 % uVar4;
  }
  else {
    if ((int)uVar4 <= (int)uVar12) {
      uVar12 = uVar4 - 1;
    }
    if ((int)uVar12 < 0) {
      uVar12 = 0;
    }
LAB_005b62ca:
    iVar8 = *(int *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x8c) = uVar12;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar8 + 4 + uVar12 * 0xc);
  }
  uVar3 = *(uint *)(param_1 + 0x8c);
  fVar5 = _DAT_00890968;
  if (uVar3 < uVar4) {
    pfVar11 = (float *)(iVar8 + uVar3 * 0xc);
    iVar8 = *(int *)(param_1 + 100) - uVar3;
    do {
      fVar5 = fVar5 + *pfVar11;
      pfVar11 = pfVar11 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((*(uint *)(param_1 + 0x5c) & 4) == 0) {
    if (fVar5 < *(float *)(param_1 + 0x6c)) {
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x10;
    }
  }
  else if (fVar5 < *(float *)(param_1 + 0x6c)) {
    *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x98) - (*(float *)(param_1 + 0x6c) - fVar5);
  }
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x40;
LAB_005b6336:
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 2;
  fVar5 = *(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x70);
  fVar7 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x74);
  *(float *)(param_1 + 0x9c) = fVar5;
  *(float *)(param_1 + 0xa0) = fVar7;
  fVar6 = SQRT(fVar5 * fVar5 + fVar7 * fVar7);
  if (_DAT_00890cd4 <= fVar6) {
    fVar6 = _DAT_0089096c / fVar6;
    *(float *)(param_1 + 0x9c) = fVar6 * fVar5;
    *(float *)(param_1 + 0xa0) = fVar7 * fVar6;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x98);
    uVar3 = *(uint *)(param_1 + 0x5c);
    *(uint *)(param_1 + 0x5c) = uVar3 & 0xffffff9d;
    if (*(int *)(param_1 + 0x88) == 0) {
      *(uint *)(param_1 + 0x5c) = uVar3 & 0xffffff95;
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    if (*(int *)(param_1 + 0x8c) == 0) {
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xffffffef;
      *(undefined4 *)(param_1 + 0x74) = 0;
      return;
    }
  }
  return;
}

