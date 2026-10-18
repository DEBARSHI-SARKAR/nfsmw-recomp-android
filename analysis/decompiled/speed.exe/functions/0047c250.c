/* speed.exe 0047c250 FUN_0047c250; analysis pseudocode, not buildable source.
 * calls 006bde60 FUN_006bde60
 * calls 0045e240 FUN_0045e240
 * calls 006bd940 FUN_006bd940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0047c250(float *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined1 auStack_f0 [4];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_e0 [8];
  float fStack_d8;
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [44];
  float fStack_a4;
  float fStack_a0;
  undefined1 auStack_94 [4];
  undefined1 local_90 [64];
  undefined1 auStack_50 [76];
  
  piVar7 = (int *)**(int **)(DAT_00911050 + 4);
  if (piVar7 != *(int **)(DAT_00911050 + 4)) {
    do {
      piVar1 = (int *)piVar7[2];
      (**(code **)(*piVar1 + 4))(local_90);
      FUN_0045e240(auStack_d4,auStack_94);
      fVar2 = fStack_a4 - *param_1;
      fVar3 = fStack_a0 - param_1[1];
      (**(code **)(*piVar1 + 0x10))(auStack_f0);
      fStack_d8 = fStack_e8 + _DAT_0089460c;
      fVar6 = (fStack_ec + _DAT_0089460c) * (fStack_ec + _DAT_0089460c);
      fVar5 = (fStack_e4 + _DAT_0089460c) * (fStack_e4 + _DAT_0089460c);
      fVar4 = SQRT(fVar6 + fVar5);
      if ((fStack_104 < fVar4 * fVar4) &&
         (ABS(fVar2 * fVar2 + fVar3 * fVar3) < fStack_d8 + fStack_d8)) {
        FUN_006bde60(auStack_50,auStack_d0);
        FUN_006bd940(&fStack_100,auStack_50,param_1);
        fVar2 = (fStack_100 * fStack_100 * fStack_100 * fStack_100) / (fVar5 * fVar5) +
                (fStack_fc * fStack_fc * fStack_fc * fStack_fc) / (fVar6 * fVar6);
        if ((fVar2 < _DAT_0089096c) &&
           (fVar2 = SQRT(SQRT(_DAT_0089096c - fVar2)) * fStack_d8, fStack_f8 < fVar2)) {
          fStack_f8 = fVar2;
          FUN_006bd940(auStack_e0,auStack_d0,&fStack_100);
          if ((float10)fStack_d8 - (float10)param_1[2] <= (float10)fVar4) {
            return (float10)fStack_d8 - (float10)param_1[2];
          }
          return (float10)_DAT_00890968;
        }
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)(DAT_00911050 + 4));
  }
  return (float10)_DAT_00890968;
}

