/* speed.exe 00673120 FUN_00673120; analysis pseudocode, not buildable source.
 * calls 00452940 FUN_00452940
 * calls 0066bcc0 FUN_0066bcc0
 * calls 0066c180 FUN_0066c180
 * calls 00401ae0 FUN_00401ae0
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00673120(float param_1,undefined4 param_2,int param_3,char param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float10 fVar7;
  float local_1c;
  int local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = (int)param_1;
  uVar2 = FUN_00452940();
  if (1 < uVar2) {
    fVar7 = (float10)FUN_0066c180(param_1,param_2,&local_10,param_5);
    if (fVar7 < (float10)_DAT_00890968 == (fVar7 == (float10)_DAT_00890968)) {
      local_c = *(float *)(*(int *)(param_3 + 8) + 0x6c);
      iVar4 = *(int *)((int)param_1 + 8);
      param_1 = *(float *)(iVar4 + 0x5c);
      local_14 = 0.0;
      local_1c = 0.0;
      iVar3 = FUN_00452940();
      local_4 = (float)(iVar3 + -1);
      if (iVar3 + -1 < 0) {
        local_4 = local_4 + _DAT_00891214;
      }
      local_4 = (*(float *)(iVar4 + 0x54) - *(float *)(iVar4 + 0x5c)) / local_4;
      uVar2 = 0;
      iVar4 = FUN_00452940();
      if (iVar4 != 0) {
        local_18 = 8;
        do {
          if ((param_4 == '\0') || (local_10 <= param_1)) {
            iVar4 = *(int *)(iVar1 + 8);
            fVar7 = (float10)FUN_00401ae0(param_1,*(undefined4 *)(iVar4 + 0x5c),local_10);
            local_8 = (float)(((float10)_DAT_0089096c - fVar7) * (float10)local_c +
                             (float10)_DAT_0089096c);
            uVar5 = FUN_00452940();
            if (uVar2 < uVar5) {
              pfVar6 = (float *)(iVar4 + local_18);
            }
            else {
              pfVar6 = (float *)FUN_006269b0(4);
            }
            fVar7 = (float10)FUN_0066bcc0(iVar1,param_2,param_1,0x3f800000,param_5,0);
            local_14 = (float)((fVar7 + (float10)_DAT_0089096c) * (float10)*pfVar6 *
                               (float10)local_8 + (float10)local_14);
            local_1c = local_1c + _DAT_0089096c;
          }
          param_1 = local_4 + param_1;
          if (*(float *)(*(int *)(iVar1 + 8) + 0x58) <= param_1) break;
          local_18 = local_18 + 4;
          uVar2 = uVar2 + 1;
          uVar5 = FUN_00452940();
        } while (uVar2 < uVar5);
        if (_DAT_00890968 < local_1c) {
          return (float10)local_14 / (float10)local_1c;
        }
      }
      return (float10)_DAT_00890968;
    }
  }
  return (float10)_DAT_00890968;
}

