/* speed.exe 006d1f90 FUN_006d1f90; analysis pseudocode, not buildable source.
 * calls 006c6cc0 FUN_006c6cc0
 */

void FUN_006d1f90(float *param_1,undefined4 param_2)

{
  int *piStack_7c;
  undefined4 uStack_78;
  int *piStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
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
  float local_18;
  float local_14;
  
  local_60 = param_1[5];
  local_70 = *param_1 - param_1[0xc];
  local_68 = param_1[2];
  local_5c = param_1[6];
  local_50 = param_1[2];
  local_6c = param_1[1] - param_1[0x11];
  local_48 = param_1[7];
  local_44 = param_1[6];
  local_58 = *param_1 + param_1[0x11];
  local_38 = param_1[2];
  local_30 = param_1[7];
  local_2c = param_1[8];
  local_54 = param_1[1] - param_1[0xc];
  local_64 = param_1[4];
  local_20 = param_1[2];
  local_40 = *param_1 + param_1[0xc];
  local_14 = param_1[8];
  local_3c = param_1[1] + param_1[0x11];
  local_18 = param_1[5];
  piStack_74 = (int *)0x0;
  local_28 = *param_1 - param_1[0x11];
  local_24 = param_1[1] + param_1[0xc];
  uStack_78 = param_2;
  piStack_7c = (int *)0x6d2059;
  local_4c = local_64;
  local_34 = local_64;
  local_1c = local_64;
  FUN_006c6cc0();
  piStack_74 = *(int **)(DAT_0093de9c + 0x48);
  uStack_78 = 0x6d206e;
  (**(code **)(*piStack_74 + 0x104))();
  piStack_7c = *(int **)(DAT_0093de9c + 0x48);
  uStack_78 = 0;
  (**(code **)(*piStack_7c + 0x100))();
  (**(code **)(*DAT_00982bdc + 0x14c))(DAT_00982bdc,6,2,&piStack_7c,0x18);
  (**(code **)(**(int **)(DAT_0093de9c + 0x48) + 0x108))(*(int **)(DAT_0093de9c + 0x48));
  return;
}

