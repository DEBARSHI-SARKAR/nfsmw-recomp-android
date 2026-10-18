/* speed.exe 00723330 FUN_00723330; analysis pseudocode, not buildable source.
 * calls 0045f3c0 FUN_0045f3c0
 * calls 004601b0 FUN_004601b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00723330(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  float local_60;
  int local_54;
  int local_50;
  int local_4c;
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
  float local_10;
  float local_c;
  
  local_50 = -1;
  local_4c = -1;
  local_60 = 99999.0;
  local_54 = 0;
  if (0 < *(short *)(param_1 + 0x40)) {
    do {
      iVar6 = local_54 % (int)*(short *)(param_1 + 0x40);
      local_40 = *(float *)(param_1 + 0x44 + iVar6 * 8) - *param_2;
      local_3c = *(float *)(param_1 + 0x48 + iVar6 * 8) - param_2[1];
      iVar1 = local_54 + 1;
      pfVar2 = (float *)(param_1 + 0x44 + iVar6 * 8);
      iVar6 = iVar1 % (int)*(short *)(param_1 + 0x40);
      local_44 = -(*(float *)(param_1 + 0x44 + iVar6 * 8) - *pfVar2);
      local_48 = *(float *)(param_1 + 0x48 + iVar6 * 8) - pfVar2[1];
      FUN_0045f3c0(&local_48,&local_48);
      fVar4 = local_40 * local_48 + local_44 * local_3c;
      local_38 = local_48 * _DAT_008b2a40 * fVar4;
      local_34 = local_44 * _DAT_008b2a40 * fVar4;
      local_18 = local_38 + *param_2;
      local_14 = local_34 + param_2[1];
      local_28 = local_48 * _DAT_008910c4 * fVar4;
      local_24 = local_44 * _DAT_008910c4 * fVar4;
      local_10 = local_28 + *param_2;
      local_c = local_24 + param_2[1];
      local_30 = local_38;
      local_2c = local_34;
      local_20 = local_28;
      local_1c = local_24;
      if (ABS(fVar4) < local_60) {
        cVar5 = FUN_004601b0(&local_18,param_1 + 0x44,(int)*(short *)(param_1 + 0x40));
        if ((cVar5 != '\0') ||
           (cVar5 = FUN_004601b0(&local_10,param_1 + 0x44,(int)*(short *)(param_1 + 0x40)),
           cVar5 != '\0')) {
          local_50 = local_54 % (int)*(short *)(param_1 + 0x40);
          local_4c = iVar1 % (int)*(short *)(param_1 + 0x40);
          local_60 = ABS(fVar4);
        }
      }
      local_54 = iVar1;
    } while (iVar1 < *(short *)(param_1 + 0x40));
    if ((local_50 != -1) && (local_4c != -1)) {
      uVar3 = *(undefined4 *)(param_1 + 0x44 + local_50 * 8);
      param_3[1] = *(undefined4 *)(param_1 + 0x48 + local_50 * 8);
      *param_3 = uVar3;
      uVar3 = *(undefined4 *)(param_1 + 0x44 + local_4c * 8);
      param_4[1] = *(undefined4 *)(param_1 + 0x48 + local_4c * 8);
      *param_4 = uVar3;
      return (float10)local_60;
    }
  }
  return (float10)_DAT_00890da8;
}

