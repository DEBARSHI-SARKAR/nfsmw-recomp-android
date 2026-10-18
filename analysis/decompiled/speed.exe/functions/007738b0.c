/* speed.exe 007738b0 FUN_007738b0; analysis pseudocode, not buildable source.
 * calls 00763690 FUN_00763690
 * calls 0041b250 FUN_0041b250
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007738b0(float *param_1,float *param_2,float param_3,float param_4,int *param_5)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  float local_8;
  float local_4;
  
  local_14 = param_4 * param_4;
  local_10 = param_3 * param_3;
  iVar4 = FUN_007c4b80();
  FUN_00763690(param_2,&param_3,&local_1c);
  piVar3 = param_5;
  fVar9 = (float)(int)local_1c;
  if ((int)local_1c < 0) {
    fVar9 = fVar9 + _DAT_00891214;
  }
  local_18 = *param_2 - (fVar9 * param_1[4] + *param_1);
  fVar9 = (float)(int)param_3;
  if ((int)param_3 < 0) {
    fVar9 = fVar9 + _DAT_00891214;
  }
  fVar8 = (float)((int)local_1c + iVar4);
  fVar7 = (float)((int)local_1c - iVar4);
  local_4 = (float)((int)param_3 + iVar4);
  fVar5 = (float)((int)param_3 - iVar4);
  param_2 = (float *)((param_1[4] * _DAT_008933d4 - param_4) -
                     (param_2[2] - (fVar9 * param_1[4] + param_1[2])));
  local_1c = fVar7;
  local_8 = fVar8;
  if ((uint)fVar5 <= (uint)local_4) {
    do {
      param_3 = (param_1[4] * _DAT_008933d4 - param_4) - local_18;
      param_5 = (int *)((float)param_2 * (float)param_2);
      fVar9 = fVar7;
      if ((uint)fVar7 <= (uint)fVar8) {
        do {
          fVar2 = param_3 * param_3 + (float)param_5;
          if ((((fVar2 < local_14) && (local_10 < fVar2)) && (-1 < (int)fVar5)) &&
             ((((uint)fVar5 < (uint)param_1[6] && (-1 < (int)fVar9)) &&
              ((uint)fVar9 < (uint)param_1[7])))) {
            local_c = (int)param_1[7] * (int)fVar5 + (int)fVar9;
            if ((uint)piVar3[2] <= (uint)piVar3[3]) {
              uVar6 = (**(code **)(*piVar3 + 0xc))(piVar3[3] + 1);
              FUN_0041b250(uVar6);
              fVar7 = local_1c;
            }
            piVar1 = (int *)(piVar3[1] + piVar3[3] * 4);
            if (piVar1 != (int *)0x0) {
              *piVar1 = local_c;
            }
            piVar3[3] = piVar3[3] + 1;
            fVar8 = local_8;
          }
          fVar9 = (float)((int)fVar9 + 1);
          param_3 = param_3 + param_1[4];
        } while ((uint)fVar9 <= (uint)fVar8);
      }
      param_2 = (float *)((float)param_2 + param_1[4]);
      fVar5 = (float)((int)fVar5 + 1);
    } while ((uint)fVar5 <= (uint)local_4);
  }
  return;
}

