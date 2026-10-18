/* speed.exe 007248a0 FUN_007248a0; analysis pseudocode, not buildable source.
 * calls 007244f0 FUN_007244f0
 * calls 0045f3c0 FUN_0045f3c0
 * calls 0045f9f0 FUN_0045f9f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_007248a0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float local_24;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar5 = FUN_0045f9f0(param_1 + 0xc,param_1 + 0x14,param_2,0);
  if (iVar5 != 0) {
    iVar5 = (int)*(char *)(param_1 + 10);
    pfVar7 = (float *)(param_1 + 0x24);
    cVar4 = FUN_007244f0(pfVar7);
    if (cVar4 != '\0') {
      iVar6 = 0;
      fVar1 = param_2[1] - *(float *)(param_1 + 0x28);
      local_24 = SQRT((*param_2 - *pfVar7) * (*param_2 - *pfVar7) + fVar1 * fVar1);
      if (0 < iVar5) {
        do {
          iVar6 = iVar6 + 1;
          local_10 = *param_2 - *pfVar7;
          local_c = param_2[1] - pfVar7[1];
          local_14 = *(float *)(param_1 + 0x28 + (iVar6 % iVar5) * 8) - pfVar7[1];
          local_18 = *(float *)(param_1 + 0x24 + (iVar6 % iVar5) * 8) - *pfVar7;
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
          if (fVar2 < local_24) {
            local_24 = fVar2;
          }
          iVar5 = (int)*(char *)(param_1 + 10);
          pfVar7 = pfVar7 + 2;
        } while (iVar6 < iVar5);
      }
      return (float10)local_24;
    }
  }
  return (float10)_DAT_00890968;
}

