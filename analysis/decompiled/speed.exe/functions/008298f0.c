/* speed.exe 008298f0 FUN_008298f0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008298f0(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  
  if (-1 < param_1) {
    iVar7 = *(int *)(DAT_009c2964 + 0x18);
    if (param_1 < (int)(uint)*(byte *)(iVar7 + 0xd)) {
      piVar6 = (int *)(iVar7 + *(int *)(*(int *)(DAT_009c2964 + 0x34) + param_1 * 4) * 4);
      if (piVar6 != (int *)0x0) {
        param_1 = param_1 + 1;
        piVar6 = (int *)(*(int *)(DAT_009c2964 + 0x3c) + *piVar6 * 8);
        if (param_1 < (int)(uint)*(byte *)(iVar7 + 0xd)) {
          if ((param_1 < 0) ||
             (piVar1 = (int *)(iVar7 + *(int *)(*(int *)(DAT_009c2964 + 0x34) + param_1 * 4) * 4),
             piVar1 == (int *)0x0)) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(DAT_009c2964 + 0x3c) + *piVar1 * 8;
          }
        }
        else {
          iVar7 = *(int *)(*(int *)(DAT_009c2964 + 0x18) + 0x38) + *(int *)(DAT_009c2964 + 0x18);
        }
        iVar4 = iVar7 + -8 + (7 - (int)piVar6);
        fVar2 = _DAT_00890968;
        if (3 < (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) {
          do {
            fVar3 = (float)piVar6[1];
            if (piVar6[1] < 0) {
              fVar3 = fVar3 + _DAT_00891214;
            }
            fVar3 = (float)((piVar6[2] - *piVar6) * 0x80) / fVar3;
            if (fVar2 < fVar3) {
              fVar2 = fVar3;
            }
            fVar3 = (float)piVar6[3];
            if (piVar6[3] < 0) {
              fVar3 = fVar3 + _DAT_00891214;
            }
            fVar3 = (float)((piVar6[4] - piVar6[2]) * 0x80) / fVar3;
            if (fVar2 < fVar3) {
              fVar2 = fVar3;
            }
            fVar3 = (float)piVar6[5];
            if (piVar6[5] < 0) {
              fVar3 = fVar3 + _DAT_00891214;
            }
            fVar3 = (float)((piVar6[6] - piVar6[4]) * 0x80) / fVar3;
            if (fVar2 < fVar3) {
              fVar2 = fVar3;
            }
            fVar3 = (float)piVar6[7];
            if (piVar6[7] < 0) {
              fVar3 = fVar3 + _DAT_00891214;
            }
            fVar3 = (float)((piVar6[8] - piVar6[6]) * 0x80) / fVar3;
            if (fVar2 < fVar3) {
              fVar2 = fVar3;
            }
            piVar6 = piVar6 + 8;
          } while ((int)piVar6 < iVar7 + -0x20);
        }
        for (; piVar6 < (int *)(iVar7 + -8); piVar6 = piVar6 + 2) {
          fVar3 = (float)piVar6[1];
          if (piVar6[1] < 0) {
            fVar3 = fVar3 + _DAT_00891214;
          }
          fVar3 = (float)((piVar6[2] - *piVar6) * 0x80) / fVar3;
          if (fVar2 < fVar3) {
            fVar2 = fVar3;
          }
        }
        uVar5 = FUN_007c4b80();
        return uVar5;
      }
    }
  }
  return 0;
}

