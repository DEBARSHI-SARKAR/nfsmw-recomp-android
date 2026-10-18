/* speed.exe 00825310 FUN_00825310; analysis pseudocode, not buildable source.
 */

void FUN_00825310(uint param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  uint uVar9;
  
  do {
    if ((param_1 & 7) == 0) {
      do {
        sVar1 = *(short *)(param_2 + -0xe + param_1 * 2);
        sVar2 = *(short *)(param_2 + -0xc + param_1 * 2);
        sVar3 = *(short *)(param_2 + -10 + param_1 * 2);
        sVar4 = *(short *)(param_2 + -8 + param_1 * 2);
        sVar5 = *(short *)(param_2 + -6 + param_1 * 2);
        sVar6 = *(short *)(param_2 + -4 + param_1 * 2);
        sVar7 = *(short *)(param_2 + -2 + param_1 * 2);
        *(float *)(param_3 + -0x20 + param_1 * 4) = (float)*(short *)(param_2 + -0x10 + param_1 * 2)
        ;
        *(float *)(param_3 + -8 + param_1 * 4) = (float)sVar6;
        *(float *)(param_3 + -0xc + param_1 * 4) = (float)sVar5;
        *(float *)(param_3 + -0x10 + param_1 * 4) = (float)sVar4;
        *(float *)(param_3 + -0x14 + param_1 * 4) = (float)sVar3;
        *(float *)(param_3 + -0x18 + param_1 * 4) = (float)sVar2;
        *(float *)(param_3 + -0x1c + param_1 * 4) = (float)sVar1;
        *(float *)(param_3 + -4 + param_1 * 4) = (float)sVar7;
        uVar9 = param_1 - 8;
        bVar8 = 7 < (int)param_1;
        param_1 = uVar9;
      } while (uVar9 != 0 && bVar8);
      return;
    }
    *(float *)(param_3 + -4 + param_1 * 4) = (float)*(short *)(param_2 + -2 + param_1 * 2);
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  return;
}

