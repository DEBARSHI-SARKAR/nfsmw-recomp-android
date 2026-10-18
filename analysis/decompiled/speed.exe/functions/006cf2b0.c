/* speed.exe 006cf2b0 FUN_006cf2b0; analysis pseudocode, not buildable source.
 * calls 006be800 FUN_006be800
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall FUN_006cf2b0(int *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  float *pfVar7;
  int iVar8;
  float local_40;
  float local_3c;
  float local_38;
  float local_20;
  float local_1c;
  float local_18;
  
  local_1c = param_2[1];
  local_20 = *param_2;
  local_18 = param_2[2];
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  if (param_4 != 0) {
    FUN_006be800(param_4,&local_20,&local_40);
  }
  bVar6 = false;
  iVar8 = 1;
  pfVar7 = (float *)(*param_1 + 0x144);
  fVar1 = (local_40 + local_20) * _DAT_008933d4;
  fVar2 = (local_3c + local_1c) * _DAT_008933d4;
  fVar3 = (local_38 + local_18) * _DAT_008933d4;
  do {
    fVar4 = ABS(pfVar7[-1]) * (local_40 - fVar1) +
            ABS(pfVar7[1]) * (local_38 - fVar3) + ABS(*pfVar7) * (local_3c - fVar2);
    fVar5 = fVar1 * pfVar7[-1] + fVar3 * pfVar7[1] + fVar2 * *pfVar7 + pfVar7[2];
    if (fVar5 + fVar4 < _DAT_00890968) {
      return '\0';
    }
    if (fVar5 - fVar4 < _DAT_00890968) {
      bVar6 = true;
    }
    iVar8 = iVar8 + 1;
    pfVar7 = pfVar7 + 4;
  } while (iVar8 < 7);
  return !bVar6 + '\x01';
}

