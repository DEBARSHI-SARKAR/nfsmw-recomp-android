/* speed.exe 007404b0 FUN_007404b0; analysis pseudocode, not buildable source.
 * calls 0078eba0 FUN_0078eba0
 */

float10 __thiscall FUN_007404b0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar1 = *param_2 - *(float *)(param_1 + 0x70);
  fVar2 = param_2[1] - *(float *)(param_1 + 0x74);
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  fVar2 = *param_2 - *(float *)(param_1 + 0x80);
  fVar3 = param_2[1] - *(float *)(param_1 + 0x84);
  fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
  if (((DAT_009b0fb9 == '\0') && (cVar7 = FUN_0078eba0(), cVar7 == '\0')) ||
     (*(int *)(param_1 + 0xc) < 3)) {
    if (fVar2 <= fVar1) {
      return (float10)fVar2;
    }
    goto LAB_00740624;
  }
  fVar3 = *param_2 - *(float *)(param_1 + 0x90);
  fVar4 = param_2[1] - *(float *)(param_1 + 0x94);
  fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
  fVar4 = *param_2 - *(float *)(param_1 + 0xa0);
  fVar5 = param_2[1] - *(float *)(param_1 + 0xa4);
  fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
  if (*(int *)(param_1 + 0xc) < 5) {
    if (fVar3 < fVar4) {
LAB_007405fe:
      fVar8 = (float10)fVar3;
    }
    else {
      fVar8 = (float10)fVar4;
    }
  }
  else {
    fVar8 = (float10)*param_2 - (float10)*(float *)(param_1 + 0xb0);
    fVar9 = (float10)param_2[1] - (float10)*(float *)(param_1 + 0xb4);
    fVar8 = SQRT(fVar8 * fVar8 + fVar9 * fVar9);
    fVar5 = *param_2 - *(float *)(param_1 + 0xc0);
    fVar6 = param_2[1] - *(float *)(param_1 + 0xc4);
    fVar5 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
    if ((float10)fVar5 <= fVar8) {
      fVar8 = (float10)fVar5;
    }
    if ((float10)fVar4 < fVar8) {
      fVar8 = (float10)fVar4;
    }
    if ((float10)fVar3 < fVar8) goto LAB_007405fe;
  }
  if ((float10)fVar2 < fVar8) {
    fVar8 = (float10)fVar2;
  }
  if (fVar8 <= (float10)fVar1) {
    return fVar8;
  }
LAB_00740624:
  return (float10)fVar1;
}

