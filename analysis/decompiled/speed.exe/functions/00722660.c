/* speed.exe 00722660 FUN_00722660; analysis pseudocode, not buildable source.
 * calls 0045f3c0 FUN_0045f3c0
 * calls 00722540 FUN_00722540
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00722660(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (((*(byte *)(param_1 + 10) & 2) == 0) &&
     (fVar7 = (float10)FUN_00722540(param_2),
     fVar7 < (float10)_DAT_00890968 != (fVar7 == (float10)_DAT_00890968))) {
    return (float10)_DAT_00890968;
  }
  local_20 = param_3;
  iVar4 = (int)*(char *)(param_1 + 9);
  iVar6 = 0;
  if (0 < iVar4) {
    pfVar5 = (float *)(param_1 + 0x30);
    do {
      iVar6 = iVar6 + 1;
      local_10 = *param_2 - *pfVar5;
      local_c = param_2[1] - pfVar5[1];
      iVar4 = (iVar6 % iVar4 + 3) * 0x10;
      local_14 = *(float *)(iVar4 + 4 + param_1) - pfVar5[1];
      local_18 = *(float *)(iVar4 + param_1) - *pfVar5;
      fVar1 = SQRT(local_18 * local_18 + local_14 * local_14);
      FUN_0045f3c0(&local_18,&local_18);
      fVar3 = local_10 * local_18 + local_c * local_14;
      fVar2 = local_10 * local_14 + -local_18 * local_c;
      if (_DAT_00890968 <= fVar3) {
        if (fVar3 <= fVar1) {
          fVar2 = ABS(fVar2);
        }
        else {
          fVar3 = fVar3 - fVar1;
          fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
        }
      }
      else {
        fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      }
      if ((fVar2 < local_20) && (local_20 = fVar2, fVar2 < param_3)) break;
      iVar4 = (int)*(char *)(param_1 + 9);
      pfVar5 = pfVar5 + 4;
    } while (iVar6 < iVar4);
  }
  return (float10)local_20;
}

