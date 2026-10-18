/* speed.exe 004be8e0 FUN_004be8e0; analysis pseudocode, not buildable source.
 * calls 004884a0 FUN_004884a0
 * calls 004048c0 FUN_004048c0
 * calls 007854b0 FUN_007854b0
 * calls 004100e0 FUN_004100e0
 * calls 00401960 FUN_00401960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004be8e0(int param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_58 [88];
  
  if ((DAT_008ef998 < 2) &&
     (param_2 = *(float *)(param_1 + 0x2c) - param_2, *(float *)(param_1 + 0x2c) = param_2,
     param_2 <= _DAT_00890968)) {
    *(undefined4 *)(param_1 + 0x2c) = DAT_008ee764;
    if ((DAT_00912120 != *(int *)(param_1 + 0x38)) &&
       ((DAT_00912120 == 3 || (*(int *)(param_1 + 0x38) == 3)))) {
      iVar1 = *(int *)(param_1 + 0x14);
      local_88 = -DAT_00914564;
      local_80 = DAT_00914560;
      local_84 = DAT_00914568;
      local_70 = *(float *)(*(int *)(iVar1 + 0x34) + 0x40);
      local_78 = -*(float *)(*(int *)(iVar1 + 0x34) + 0x44);
      local_74 = *(float *)(*(int *)(iVar1 + 0x34) + 0x48);
      fVar2 = (float10)FUN_004100e0(&local_88,&local_78);
      local_8c = (float)fVar2;
      if ((float10)DAT_008ee768 < fVar2) {
        local_8c = DAT_008ee768;
      }
      local_84 = local_84 + _DAT_00890d3c;
      local_68 = local_88 - local_78;
      local_64 = local_84 - local_74;
      local_60 = local_80 - local_70;
      local_5c = local_7c - local_6c;
      FUN_004884a0(&local_68,&local_68);
      FUN_004048c0();
      local_68 = 0.0;
      local_64 = 4.2039e-45;
      iVar1 = FUN_007854b0(&local_88,local_58,2);
      if (iVar1 != 0) {
        fVar2 = (float10)FUN_00401960(&local_88,local_58);
        if (fVar2 < (float10)local_8c * (float10)local_8c - (float10)_DAT_00890dd8) {
          *(undefined1 *)(param_1 + 0x30) = 1;
          return;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}

