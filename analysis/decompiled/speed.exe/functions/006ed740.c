/* speed.exe 006ed740 FUN_006ed740; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 * calls 0040fe20 FUN_0040fe20
 * calls 007677d0 FUN_007677d0
 * calls 00486610 FUN_00486610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_006ed740(float *param_1,float *param_2,float *param_3,int param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18 [3];
  float local_c [3];
  
  pfVar5 = param_5;
  local_48 = *param_1;
  local_44 = param_1[1];
  local_40 = param_1[2];
  local_54 = *param_1 - *param_3;
  local_50 = param_1[1] - param_3[1];
  local_4c = param_1[2] - param_3[2];
  fVar9 = (float10)FUN_005c5e80(param_5[2] * param_5[2] +
                                param_5[1] * param_5[1] + *param_5 * *param_5);
  fVar10 = (float10)FUN_005c5e80(local_54 * local_54 + local_4c * local_4c + local_50 * local_50);
  iVar4 = param_4;
  pfVar3 = param_2;
  fVar10 = fVar10 + (float10)(float)fVar9;
  local_18[1] = param_4 + 0x10;
  local_18[2] = param_4 + 0x20;
  local_18[0] = param_4;
  local_24 = (float)(fVar10 * (float10)*param_2 + (float10)local_48);
  local_20 = (float)(fVar10 * (float10)param_2[1] + (float10)local_44);
  local_1c = (float)(fVar10 * (float10)param_2[2] + (float10)local_40);
  local_c[0] = *pfVar5;
  local_c[1] = pfVar5[1];
  local_c[2] = pfVar5[2];
  uVar8 = 0;
  param_1 = (float *)&DAT_008b04d0;
  param_5 = (float *)0x0;
  do {
    local_54 = *param_1 * *pfVar5;
    local_50 = param_1[1] * pfVar5[1];
    local_4c = param_1[2] * pfVar5[2];
    FUN_00486610(&local_54,iVar4,&local_54);
    FUN_0040fe20(&local_54,&local_30);
    if (local_28 * pfVar3[2] + local_2c * pfVar3[1] + local_30 * *pfVar3 <= _DAT_00890968) {
      local_54 = local_54 + *param_3;
      local_50 = local_50 + param_3[1];
      local_4c = local_4c + param_3[2];
      cVar6 = FUN_007677d0(&local_48,&local_24,&local_54,&local_30,&local_3c,&param_2);
      if (cVar6 != '\0') {
        uVar7 = 0;
        do {
          if (uVar7 != uVar8 >> 1) {
            pfVar1 = (float *)local_18[uVar7];
            fVar2 = (local_3c - local_54) * *pfVar1 +
                    (local_38 - local_50) * pfVar1[1] + (local_34 - local_4c) * pfVar1[2];
            if (fVar2 < _DAT_00890968) {
              fVar2 = -fVar2;
            }
            if (local_c[uVar7] < fVar2) break;
          }
          uVar7 = uVar7 + 1;
          if (2 < uVar7) {
            *param_6 = local_3c;
            param_6[1] = local_38;
            param_6[2] = local_34;
            return 1;
          }
        } while( true );
      }
    }
    param_5 = (float *)((int)param_5 + 0xc);
    param_1 = param_1 + 3;
    uVar8 = uVar8 + 1;
    if (0x47 < param_5) {
      return 0;
    }
  } while( true );
}

