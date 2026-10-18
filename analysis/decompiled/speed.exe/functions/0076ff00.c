/* speed.exe 0076ff00 FUN_0076ff00; analysis pseudocode, not buildable source.
 * calls 00764dd0 FUN_00764dd0
 * calls 0076fde0 FUN_0076fde0
 * calls 005fb340 FUN_005fb340
 * calls 00764db0 FUN_00764db0
 * calls 0045da70 FUN_0045da70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_0076ff00(int param_1,float param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  float10 fVar5;
  float local_4;
  
  puVar1 = param_3;
  if (param_2 != 3.57331e-43) {
    if (*(int *)(param_1 + 0x7c) == 4) {
      uVar3 = FUN_0076fde0();
      return param_2 == (float)(uVar3 & 0xff);
    }
    if (*(int *)(param_1 + 0x7c) == 2) {
      uVar3 = 1 << (SUB41(param_2,0) & 0x1f);
      if ((param_3 != (uint *)0x0) && ((*param_3 & uVar3) != 0)) {
        return (*param_4 & uVar3) != 0;
      }
      if (*(int *)(DAT_0091e000 + 0x1968) != 0) {
        if (*(int *)(param_1 + 0x84) == 0) {
          local_4 = 0.0;
        }
        else {
          fVar5 = (float10)(**(code **)(*(int *)(*(int *)(param_1 + 0x84) + 0x4c) + 0xd0))();
          local_4 = (float)fVar5;
        }
        FUN_005fb340(param_2);
        pfVar4 = (float *)FUN_00764dd0();
        param_2 = *pfVar4;
        pfVar4 = (float *)FUN_00764db0();
        param_3 = (uint *)*pfVar4;
        if (_DAT_0089096c < param_2) {
          param_2 = param_2 * _DAT_00890dc4;
        }
        if (_DAT_0089096c < (float)param_3) {
          param_3 = (uint *)((float)param_3 * _DAT_00890dc4);
        }
        fVar5 = (float10)FUN_0045da70(0x3f800000);
        if (((float10)(float)param_3 - (float10)param_2) * (float10)local_4 + (float10)param_2 <=
            fVar5) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          if (param_4 != (uint *)0x0) {
            *param_4 = *param_4 | uVar3;
          }
        }
        if (puVar1 == (uint *)0x0) {
          return bVar2;
        }
        *puVar1 = *puVar1 | uVar3;
        return bVar2;
      }
    }
  }
  return true;
}

