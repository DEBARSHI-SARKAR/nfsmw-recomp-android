/* speed.exe 007252f0 FUN_007252f0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007252f0(int param_1,int param_2,float *param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  
  if (param_4 == 0) {
    iVar4 = *(int *)(param_1 + 0x1d0 + param_2 * 4);
    iVar6 = iVar4 + 1;
    *(int *)(param_1 + 0x1d0 + param_2 * 4) = iVar6;
    fVar2 = (float)*(int *)(param_1 + 0x1d0 + param_2 * 4);
    if (iVar6 < 0) {
      fVar2 = fVar2 + _DAT_00891214;
    }
    iVar4 = iVar4 + 2;
    fVar3 = (float)iVar4;
    if (iVar4 < 0) {
      fVar3 = fVar3 + _DAT_00891214;
    }
    fVar2 = fVar2 / fVar3;
    iVar4 = param_2 * 0x50 + param_1;
    fVar3 = _DAT_0089096c - fVar2;
    *(float *)(iVar4 + 0x40) = fVar2 * *(float *)(iVar4 + 0x40) + fVar3 * *param_3;
    *(float *)(iVar4 + 0x44) = fVar2 * *(float *)(iVar4 + 0x44) + fVar3 * param_3[1];
    *(float *)(iVar4 + 0x48) = fVar2 * *(float *)(iVar4 + 0x48) + fVar3 * param_3[2];
    *(float *)(iVar4 + 0x4c) = fVar2 * *(float *)(iVar4 + 0x4c) + fVar3 * param_3[3];
    *(float *)(iVar4 + 0x50) = fVar2 * *(float *)(iVar4 + 0x50) + fVar3 * param_3[4];
  }
  else {
    if (param_3 != (float *)0x0) {
      pfVar5 = (float *)(param_2 * 0x50 + 0x40 + param_1);
      for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar5 = *param_3;
        param_3 = param_3 + 1;
        pfVar5 = pfVar5 + 1;
      }
    }
    *(undefined4 *)(param_1 + 0x1d0 + param_2 * 4) = 1;
  }
  iVar4 = param_1 + param_2 * 0xc;
  iVar6 = param_2 * 0x50 + param_1;
  pcVar1 = *(code **)(iVar6 + 0x8c);
  *(undefined4 *)(iVar4 + 0xc) = 1;
  if (pcVar1 == (code *)0x0) {
    *(undefined4 *)(iVar4 + 4) = param_5;
  }
  else {
    (*pcVar1)(param_2,param_1);
  }
  if (*(float *)(iVar6 + 0x50) < _DAT_00890dc4) {
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
  return;
}

