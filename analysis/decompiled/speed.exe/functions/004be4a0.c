/* speed.exe 004be4a0 FUN_004be4a0; analysis pseudocode, not buildable source.
 * calls 004b0720 FUN_004b0720
 * calls 0045f3c0 FUN_0045f3c0
 * calls 004ab890 FUN_004ab890
 * calls 004b5620 FUN_004b5620
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004be4a0(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  
  fVar2 = *(float *)(param_1 + 0x54) - param_2;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(float *)(param_1 + 0x54) = fVar2;
  if (fVar2 < _DAT_00890968) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  param_2 = *(float *)(param_1 + 100) - param_2;
  *(float *)(param_1 + 100) = param_2;
  if (param_2 < _DAT_00890968) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x34);
  local_54 = *(undefined4 *)(iVar3 + 0x14);
  local_58 = *(undefined4 *)(iVar3 + 0x10);
  FUN_0045f3c0(&local_60,&local_58);
  fVar2 = *(float *)(*(int *)(*(int *)(param_1 + 0x18) + 0x34) + 0xa4) * _DAT_0089655c;
  local_60 = local_60 * fVar2 + *(float *)(iVar3 + 0x40);
  local_5c = local_5c * fVar2 + *(float *)(iVar3 + 0x44);
  local_48 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x48);
  *(undefined4 *)(param_1 + 0x34) = 3;
  local_50 = local_60;
  local_4c = local_5c;
  iVar3 = FUN_004b5620(&local_50,3);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 4;
    iVar3 = FUN_004b5620(&local_50,4);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x34) = 5;
      iVar3 = FUN_004b5620(&local_50,5);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
    }
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    if ((*(int *)(param_1 + 0x34) != 0) &&
       (((*(float *)(param_1 + 0x54) < _DAT_00890dc4 && (*(int *)(param_1 + 0x58) == iVar3)) ||
        (*(int *)(param_1 + 0x58) != iVar3)))) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x34);
      _DAT_00914910 =
           SQRT(*(float *)(iVar1 + 0x58) * *(float *)(iVar1 + 0x58) +
                *(float *)(iVar1 + 0x54) * *(float *)(iVar1 + 0x54) +
                *(float *)(iVar1 + 0x50) * *(float *)(iVar1 + 0x50));
      FUN_004b0720();
      if (_DAT_00890dc4 < DAT_00914914) {
        *(undefined1 *)(param_1 + 0x3c) = 1;
        *(int *)(param_1 + 0x58) = iVar3;
        *(undefined4 *)(param_1 + 0x54) = 0x40400000;
        fVar2 = *(float *)(*(int *)(*(int *)(param_1 + 0x18) + 0x34) + 0x48) + _DAT_00890bf8;
        *(float *)(param_1 + 0x40) = local_50;
        *(float *)(param_1 + 0x44) = local_4c;
        *(float *)(param_1 + 0x48) = fVar2;
        iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x34);
        _DAT_00914910 =
             SQRT(*(float *)(iVar1 + 0x58) * *(float *)(iVar1 + 0x58) +
                  *(float *)(iVar1 + 0x54) * *(float *)(iVar1 + 0x54) +
                  *(float *)(iVar1 + 0x50) * *(float *)(iVar1 + 0x50));
        FUN_004b0720();
        local_3c = *(undefined4 *)(param_1 + 0x18);
        *(float *)(param_1 + 0x50) = DAT_00914914;
        local_40 = 4;
        iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x34);
        local_20 = *(undefined4 *)(param_1 + 0x58);
        local_2c = *(undefined4 *)(param_1 + 0x44);
        local_30 = *(undefined4 *)(param_1 + 0x40);
        local_28 = *(undefined4 *)(param_1 + 0x48);
        local_38 = SQRT(*(float *)(iVar1 + 0x58) * *(float *)(iVar1 + 0x58) +
                        *(float *)(iVar1 + 0x54) * *(float *)(iVar1 + 0x54) +
                        *(float *)(iVar1 + 0x50) * *(float *)(iVar1 + 0x50));
        piVar4 = (int *)(**(code **)(*DAT_00911f80 + 0xc))(&local_40);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0xc))(&local_40);
        }
      }
    }
    if (*(char *)(param_1 + 0x28) == '\0') {
      return;
    }
  }
  if (((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 0x38) == 3)) &&
     (((*(float *)(param_1 + 100) < _DAT_00890dc4 && (*(int *)(param_1 + 0x68) == iVar3)) ||
      (*(int *)(param_1 + 0x68) != iVar3)))) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x34);
    _DAT_00914910 =
         SQRT(*(float *)(iVar1 + 0x58) * *(float *)(iVar1 + 0x58) +
              *(float *)(iVar1 + 0x54) * *(float *)(iVar1 + 0x54) +
              *(float *)(iVar1 + 0x50) * *(float *)(iVar1 + 0x50));
    FUN_004b0720();
    if (_DAT_00890dc4 < DAT_00914914) {
      *(undefined1 *)(param_1 + 0x5c) = 1;
      *(undefined4 *)(param_1 + 100) = 0x40400000;
      *(int *)(param_1 + 0x68) = iVar3;
      fVar2 = *(float *)(*(int *)(*(int *)(param_1 + 0x18) + 0x34) + 0x48) + _DAT_00890bf8;
      *(float *)(param_1 + 0x40) = local_50;
      *(float *)(param_1 + 0x44) = local_4c;
      *(float *)(param_1 + 0x48) = fVar2;
      fVar5 = (float10)FUN_004ab890();
      _DAT_00914910 = (float)fVar5;
      FUN_004b0720();
      local_3c = *(undefined4 *)(param_1 + 0x18);
      *(float *)(param_1 + 0x60) = DAT_00914914;
      local_38 = 0.0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_20 = 0;
      local_40 = 5;
      fVar5 = (float10)FUN_004ab890();
      local_38 = (float)fVar5;
      local_2c = *(undefined4 *)(param_1 + 0x44);
      local_28 = *(undefined4 *)(param_1 + 0x48);
      local_30 = *(undefined4 *)(param_1 + 0x40);
      local_20 = 0;
      piVar4 = (int *)(**(code **)(*DAT_00911f80 + 0xc))(&local_40);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))(auStack_44);
      }
    }
  }
  return;
}

