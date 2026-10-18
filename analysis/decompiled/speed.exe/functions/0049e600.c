/* speed.exe 0049e600 FUN_0049e600; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_0049e600(int param_1,float param_2,float param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  
  fVar2 = _DAT_0089096c / param_3;
  pfVar4 = (float *)((int)param_2 * 0x70 + 0x10 + param_1);
  pfVar1 = (float *)(*(int *)(param_1 + 8) * 0x70 + -0x60 + param_1);
  if (*(int *)(param_1 + 0xc) != param_4) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        *(undefined4 *)(param_4 + iVar3 * 4) = 0x3f800000;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 8));
    }
    *(int *)(param_1 + 0xc) = param_4;
  }
  pfVar6 = pfVar4 + 0x1c;
  *pfVar4 = param_3 * *pfVar4;
  pfVar4 = (float *)(((int)pfVar1 + (0x70 - (int)pfVar6)) / 0x70);
  if (3 < (int)pfVar4) {
    uVar5 = (int)pfVar6 + (0x60 - param_1);
    do {
      if (*(float *)(param_1 + -0x54 + uVar5) == param_2) {
        uVar7 = (uVar5 - 0x70) / 0x70;
        *(float *)(param_4 + uVar7 * 4) = fVar2 * *(float *)(param_4 + uVar7 * 4);
      }
      if (pfVar6[0x1f] == param_2) {
        *(float *)(param_4 + (uVar5 / 0x70) * 4) = fVar2 * *(float *)(param_4 + (uVar5 / 0x70) * 4);
      }
      if (pfVar6[0x3b] == param_2) {
        uVar7 = (uVar5 + 0x70) / 0x70;
        *(float *)(param_4 + uVar7 * 4) = fVar2 * *(float *)(param_4 + uVar7 * 4);
      }
      if (pfVar6[0x57] == param_2) {
        uVar7 = (uVar5 + 0xe0) / 0x70;
        *(float *)(param_4 + uVar7 * 4) = fVar2 * *(float *)(param_4 + uVar7 * 4);
      }
      pfVar6 = pfVar6 + 0x70;
      pfVar4 = pfVar1 + -0x54;
      uVar5 = uVar5 + 0x1c0;
    } while ((int)pfVar6 <= (int)pfVar4);
  }
  if (pfVar6 <= pfVar1) {
    do {
      if (pfVar6[3] == param_2) {
        uVar5 = (-0x10 - param_1) + (int)pfVar6;
        pfVar4 = (float *)(uVar5 * 0x24924925);
        uVar5 = uVar5 / 0x70;
        *(float *)(param_4 + uVar5 * 4) = fVar2 * *(float *)(param_4 + uVar5 * 4);
      }
      pfVar6 = pfVar6 + 0x1c;
    } while (pfVar6 <= pfVar1);
  }
  return pfVar4;
}

