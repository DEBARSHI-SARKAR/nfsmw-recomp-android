/* speed.exe 00763350 FUN_00763350; analysis pseudocode, not buildable source.
 * calls 00402690 FUN_00402690
 * calls 00444dc0 FUN_00444dc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00763350(float *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float *pfVar2;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30 [4];
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  local_60 = *param_1 - *param_2;
  local_5c = param_1[1] - param_2[1];
  local_58 = param_1[2] - param_2[2];
  local_50 = param_1[4] - *param_2;
  local_4c = param_1[5] - param_2[1];
  local_54 = 0x3f800000;
  local_48 = param_1[6] - param_2[2];
  local_70 = param_1[8] - *param_2;
  local_44 = 0x3f800000;
  local_6c = param_1[9] - param_2[1];
  local_64 = 0x3f800000;
  local_68 = param_1[10] - param_2[2];
  local_34 = 0x3f800000;
  local_40 = local_70;
  local_3c = local_6c;
  local_38 = local_68;
  FUN_00444dc0(&local_60,&local_50,local_30);
  FUN_00444dc0(&local_50,&local_40,local_20);
  FUN_00444dc0(&local_40,&local_60,local_10);
  FUN_00402690(&local_70);
  uVar1 = 0;
  pfVar2 = local_30 + 1;
  do {
    if (local_6c * *pfVar2 + local_70 * pfVar2[-1] + local_68 * pfVar2[1] < _DAT_00890968) {
      return 0;
    }
    uVar1 = uVar1 + 1;
    pfVar2 = pfVar2 + 4;
  } while (uVar1 < 3);
  if (param_3 != (float *)0x0) {
    *param_3 = -(local_60 * local_70 + local_5c * local_6c + local_58 * local_68);
  }
  return 1;
}

