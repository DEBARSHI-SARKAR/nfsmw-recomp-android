/* speed.exe 0073cdb0 FUN_0073cdb0; analysis pseudocode, not buildable source.
 * calls 006bf530 FUN_006bf530
 * calls 0045da70 FUN_0045da70
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0073cdb0(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar2 = DAT_00925970;
  iVar4 = *(int *)(param_2 + 0x40);
  fVar1 = SQRT(*(float *)(iVar4 + 0x204) * *(float *)(iVar4 + 0x204) +
               *(float *)(iVar4 + 0x200) * *(float *)(iVar4 + 0x200) +
               *(float *)(iVar4 + 0x208) * *(float *)(iVar4 + 0x208)) * _DAT_00904b30;
  if (*(int *)(*(int *)(param_2 + 0x68) + 0x234) == 0) {
    iVar4 = FUN_006bf530();
    if (iVar4 < 3) {
      if (*(float *)(*(int *)(param_2 + 0x68) + 0x28c) == _DAT_00890968) {
        iVar4 = 0;
      }
      else {
        iVar4 = 0x14;
      }
    }
    else if (*(float *)(*(int *)(param_2 + 0x68) + 0x28c) == _DAT_00890968) {
      iVar4 = 0;
    }
    else {
      iVar4 = 10;
    }
    *param_1 = iVar4;
  }
  else {
    *param_1 = 0;
  }
  iVar4 = 0;
  if (0 < *param_1) {
    pfVar5 = (float *)(param_1 + 3);
    do {
      if (DAT_009b0a58 == 0) {
        *pfVar5 = *pfVar5 - fVar2;
      }
      if (*pfVar5 < _DAT_00890968 == (*pfVar5 == _DAT_00890968)) {
        fVar3 = _DAT_00904b2c * pfVar5[3] * fVar2 + pfVar5[-1];
        pfVar5[-1] = fVar3;
        if (((_DAT_0089096c < fVar3) || (_DAT_0089096c < pfVar5[-2])) ||
           (pfVar5[-2] < _DAT_00890968)) {
          *pfVar5 = 0.0;
        }
        else {
          local_20 = pfVar5[-2] - _DAT_008933d4;
          local_18 = 0.0;
          local_1c = fVar3 - _DAT_00890cd4;
          FUN_0045f490(&local_20,&local_20);
          local_1c = local_1c * fVar1;
          local_18 = local_18 * fVar1;
          pfVar5[-2] = local_20 * fVar1 + pfVar5[-2];
        }
        if (_DAT_00904b34 < fVar1) {
          fVar3 = (float)((int)pfVar5[4] + 1U & 0x80000003);
          if ((int)fVar3 < 0) {
            fVar3 = (float)(((int)fVar3 - 1U | 0xfffffffc) + 1);
          }
          pfVar5[4] = fVar3;
        }
      }
      else {
        *pfVar5 = pfVar5[1];
        fVar6 = (float10)FUN_0045da70(0x3f800000);
        pfVar5[-2] = (float)fVar6;
        fVar6 = (float10)FUN_0045da70(0x3f800000);
        pfVar5[-1] = (float)fVar6;
      }
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 7;
    } while (iVar4 < *param_1);
  }
  return;
}

