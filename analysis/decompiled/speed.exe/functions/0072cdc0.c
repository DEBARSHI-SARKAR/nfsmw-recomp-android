/* speed.exe 0072cdc0 FUN_0072cdc0; analysis pseudocode, not buildable source.
 * calls 006510f0 FUN_006510f0
 * calls 0072cd40 FUN_0072cd40
 */

undefined4 * FUN_0072cdc0(float *param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  piVar12 = &DAT_009a3950;
  if ((*(int *)(&DAT_009a3bb0 + param_2 * 4) != 0) &&
     (iVar5 = *(int *)(*(int *)(&DAT_009a3bb0 + param_2 * 4) + 0x18), iVar5 != 0)) {
    iVar9 = FUN_006510f0(fVar2,fVar3,fVar4);
    if (iVar9 != 0) {
      sVar1 = *(short *)(iVar9 + 0xe);
      iVar5 = *(int *)(iVar5 + 0x1c);
      iVar13 = 0;
      if (0 < -(int)sVar1) {
        psVar10 = (short *)(iVar9 + 0x1c);
        do {
          if ((int *)0x9a39ef < piVar12) break;
          iVar9 = *psVar10 * 0x20 + iVar5;
          fVar6 = ABS(fVar2 - *(float *)(iVar9 + 0x10));
          fVar8 = ABS(fVar3 - *(float *)(iVar9 + 0x14));
          fVar7 = ABS(fVar4 - *(float *)(iVar9 + 0x18));
          if (fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7 <
              *(float *)(iVar9 + 0x1c) * *(float *)(iVar9 + 0x1c)) {
            iVar11 = FUN_0072cd40(*(undefined4 *)(iVar9 + 4));
            *(int *)(iVar11 + 0x10) = iVar9;
            *piVar12 = iVar11;
            piVar12 = piVar12 + 1;
          }
          iVar13 = iVar13 + 1;
          psVar10 = psVar10 + 1;
        } while (iVar13 < -(int)sVar1);
        if (piVar12 != &DAT_009a3950) {
          *piVar12 = 0;
          return &DAT_009a3950;
        }
      }
    }
  }
  return (undefined4 *)0x0;
}

