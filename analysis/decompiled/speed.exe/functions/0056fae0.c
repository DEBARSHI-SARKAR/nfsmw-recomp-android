/* speed.exe 0056fae0 FUN_0056fae0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0045db30 FUN_0045db30
 * calls 0045dbf0 FUN_0045dbf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056fae0(undefined4 param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined2 uVar8;
  float *unaff_ESI;
  float10 fVar9;
  
  fVar6 = (unaff_ESI[4] - *unaff_ESI) * _DAT_008933d4;
  fVar7 = (unaff_ESI[5] - unaff_ESI[1]) * _DAT_008933d4;
  *unaff_ESI = (*unaff_ESI - fVar6) - param_2;
  unaff_ESI[1] = (unaff_ESI[1] - fVar7) - param_3;
  unaff_ESI[2] = (unaff_ESI[2] - fVar6) - param_2;
  unaff_ESI[3] = (unaff_ESI[3] - fVar7) - param_3;
  unaff_ESI[4] = (unaff_ESI[4] - fVar6) - param_2;
  unaff_ESI[5] = (unaff_ESI[5] - fVar7) - param_3;
  unaff_ESI[6] = (unaff_ESI[6] - fVar6) - param_2;
  unaff_ESI[7] = (unaff_ESI[7] - fVar7) - param_3;
  uVar8 = FUN_007c4b80();
  fVar9 = (float10)FUN_0045db30(uVar8);
  fVar1 = (float)fVar9;
  fVar9 = (float10)FUN_0045dbf0(uVar8);
  fVar2 = *unaff_ESI;
  fVar3 = unaff_ESI[2];
  fVar4 = unaff_ESI[4];
  fVar5 = unaff_ESI[6];
  *unaff_ESI = (float)(fVar9 * (float10)*unaff_ESI + (float10)fVar1 * (float10)unaff_ESI[1] +
                       (float10)fVar6 + (float10)param_2);
  unaff_ESI[1] = (float)((fVar9 * (float10)unaff_ESI[1] - (float10)fVar1 * (float10)fVar2) +
                         (float10)fVar7 + (float10)param_3);
  unaff_ESI[2] = (float)((float10)fVar1 * (float10)unaff_ESI[3] + fVar9 * (float10)unaff_ESI[2] +
                         (float10)fVar6 + (float10)param_2);
  unaff_ESI[3] = (float)((fVar9 * (float10)unaff_ESI[3] - (float10)fVar1 * (float10)fVar3) +
                         (float10)fVar7 + (float10)param_3);
  unaff_ESI[4] = (float)((float10)fVar1 * (float10)unaff_ESI[5] + fVar9 * (float10)unaff_ESI[4] +
                         (float10)fVar6 + (float10)param_2);
  unaff_ESI[5] = (float)(fVar9 * (float10)unaff_ESI[5] - (float10)fVar1 * (float10)fVar4) + fVar7 +
                 param_3;
  unaff_ESI[6] = (float)((float10)fVar1 * (float10)unaff_ESI[7] + fVar9 * (float10)unaff_ESI[6] +
                         (float10)fVar6 + (float10)param_2);
  unaff_ESI[7] = (float)(fVar9 * (float10)unaff_ESI[7] - (float10)fVar1 * (float10)fVar5) + fVar7 +
                 param_3;
  return;
}

