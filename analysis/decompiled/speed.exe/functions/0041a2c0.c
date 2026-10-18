/* speed.exe 0041a2c0 FUN_0041a2c0; analysis pseudocode, not buildable source.
 * calls 007675c0 FUN_007675c0
 * calls 0041a230 FUN_0041a230
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0041a2c0(float *param_1,float *param_2,float param_3,float *param_4,float *param_5,
                    float param_6)

{
  float10 fVar1;
  float fVar2;
  float local_74 [3];
  float local_68 [3];
  float local_5c [3];
  float local_50 [3];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_10 [2];
  float local_8;
  
  local_74[0] = *param_1;
  local_74[2] = param_1[2];
  local_50[0] = *param_4;
  local_50[2] = param_4[2];
  local_5c[0] = *param_2;
  local_5c[2] = param_2[2];
  local_68[0] = *param_5;
  local_68[2] = param_5[2];
  local_74[1] = 0.0;
  local_50[1] = 0.0;
  local_5c[1] = 0.0;
  local_68[1] = 0.0;
  fVar1 = (float10)FUN_0041a230(local_74,local_5c,local_50,local_68);
  fVar2 = (float)fVar1;
  fVar1 = (float10)_DAT_00890968;
  if ((float10)fVar2 < fVar1 == ((float10)fVar2 == fVar1)) {
    local_30 = local_74[0];
    local_2c = _DAT_00890968;
    local_20 = (local_5c[0] - local_68[0]) * fVar2 + local_74[0];
    local_24 = 0x3f800000;
    local_28 = local_74[2];
    local_40 = local_50[0];
    local_1c = (float)((float10)fVar2 * fVar1);
    local_38 = local_50[2];
    local_18 = (local_5c[2] - local_68[2]) * fVar2 + local_74[2];
    local_34 = 0x3f800000;
    local_3c = _DAT_00890968;
    FUN_007675c0(&local_40,&local_30,local_10,fVar2,local_50[0],_DAT_00890968,local_50[2]);
    local_44 = (local_40 - local_10[0]) * (local_40 - local_10[0]) +
               (local_38 - local_8) * (local_38 - local_8);
    fVar1 = (float10)FUN_005c5e80(local_44);
    if ((float10)param_3 + (float10)param_6 < fVar1) {
      return (float10)_DAT_00890968;
    }
    fVar1 = (float10)fVar2;
  }
  return fVar1;
}

