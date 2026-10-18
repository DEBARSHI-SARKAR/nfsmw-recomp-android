/* speed.exe 00767fd0 FUN_00767fd0; analysis pseudocode, not buildable source.
 * calls 00444dc0 FUN_00444dc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00767fd0(float *param_1,float *param_2,float *param_3,char param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  uint uVar5;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40 [4];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  local_80 = *param_1 - fVar1;
  local_7c = param_1[1] - fVar2;
  local_78 = param_1[2] - fVar3;
  local_70 = param_1[4] - fVar1;
  local_6c = param_1[5] - fVar2;
  local_68 = param_1[6] - fVar3;
  local_60 = param_1[8] - fVar1;
  local_5c = param_1[9] - fVar2;
  local_58 = param_1[10] - fVar3;
  if (param_4 == '\0') {
    local_50 = param_1[0xc] - fVar1;
    local_4c = param_1[0xd] - fVar2;
    local_48 = param_1[0xe] - fVar3;
  }
  FUN_00444dc0(&local_80,&local_70,local_40);
  FUN_00444dc0(&local_70,&local_60,local_30);
  if (param_4 == '\0') {
    FUN_00444dc0(&local_60,&local_50,local_20);
    FUN_00444dc0(&local_50,&local_80,local_10);
  }
  else {
    FUN_00444dc0(&local_60,&local_80,local_20);
  }
  uVar5 = 0;
  if (-(uint)(param_4 != '\0') != -4) {
    pfVar4 = local_40 + 1;
    do {
      if (*pfVar4 * param_2[1] + pfVar4[-1] * *param_2 + pfVar4[1] * param_2[2] < _DAT_00890968) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 4;
    } while (uVar5 < -(uint)(param_4 != '\0') + 4);
  }
  if (param_5 != (float *)0x0) {
    *param_5 = -(local_80 * *param_2 + local_7c * param_2[1] + local_78 * param_2[2]);
  }
  return 1;
}

