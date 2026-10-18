/* speed.exe 007854b0 FUN_007854b0; analysis pseudocode, not buildable source.
 * calls 00449320 FUN_00449320
 * calls 00779310 FUN_00779310
 * calls 005d0370 FUN_005d0370
 * calls 00402690 FUN_00402690
 * calls 004048c0 FUN_004048c0
 * calls 007677d0 FUN_007677d0
 * calls 00401930 FUN_00401930
 * calls 007732b0 FUN_007732b0
 * calls 007c5df0 _atexit
 * calls 005c5e80 FUN_005c5e80
 * calls 0077fdf0 FUN_0077fdf0
 * calls 007840e0 FUN_007840e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_007854b0(int param_1,float *param_2,float *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  float local_64 [4];
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined1 local_14;
  undefined1 local_13;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882188;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)param_3 + 0x51) = 0;
  local_94 = *param_2;
  local_90 = param_2[1];
  local_8c = param_2[2];
  local_88 = param_2[3];
  local_84 = param_2[4];
  local_80 = param_2[5];
  local_7c = param_2[6];
  local_78 = param_2[7];
  local_98 = (local_90 - local_80) * (local_90 - local_80) +
             (local_94 - local_84) * (local_94 - local_84) +
             (local_8c - local_7c) * (local_8c - local_7c);
  fVar6 = (float10)FUN_005c5e80(local_98);
  fVar3 = (float)fVar6;
  if (fVar3 == _DAT_00890968) {
    ExceptionList = local_c;
    return false;
  }
  if (fVar3 < _DAT_00890dc4) {
    fVar3 = _DAT_00890dc4 / fVar3;
    local_74 = (local_84 - local_94) * fVar3;
    local_84 = local_74 + local_94;
    local_80 = (local_80 - local_90) * fVar3 + local_90;
    local_7c = (local_7c - local_8c) * fVar3 + local_8c;
  }
  local_98 = 0.0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_4 = 0;
  FUN_0077fdf0(0x40);
  *(uint *)(param_1 + 4) = param_4;
  FUN_007840e0(&local_74,&local_94);
  *(undefined4 *)(param_1 + 4) = 3;
  fVar3 = local_98;
  if (((param_4 & 2) != 0) &&
     (cVar1 = FUN_007732b0(&local_74,&local_94,param_3), fVar3 = local_98, cVar1 != '\0')) {
    local_84 = *param_3;
    local_80 = param_3[1];
    local_7c = param_3[2];
    local_78 = param_3[3];
    fVar3 = 2.8026e-45;
  }
  if ((param_4 & 1) != 0) {
    if ((DAT_009b3c78 & 1) == 0) {
      DAT_009b3c78 = DAT_009b3c78 | 1;
      FUN_00449320(0x3ccccccd);
      _atexit((_func_4879 *)&DAT_0088eeb0);
    }
    FUN_00779310(&local_74,&local_94,&local_84);
    if ((DAT_009b3c6c & 1) != 0) {
      FUN_004048c0();
      local_13 = 1;
      if ((DAT_009b3c6c & 1) == 0) {
        local_4c = 0.0;
        local_54 = 0.0;
        local_50 = 1.0;
      }
      else {
        FUN_00402690(&local_54);
      }
      local_48 = 0x3f800000;
      cVar1 = FUN_007677d0(&local_94,&local_84,&DAT_009b3c3c,&local_54,local_64,&local_98);
      if (cVar1 != '\0') {
        local_10 = 0;
        local_14 = 0;
        if ((local_94 - local_64[0]) * local_54 +
            (local_8c - local_64[2]) * local_4c + (local_90 - local_64[1]) * local_50 <
            _DAT_00890968) {
          local_54 = -local_54;
          local_50 = -local_50;
          local_4c = -local_4c;
        }
        if (fVar3 != 0.0) {
          fVar6 = (float10)FUN_00401930(&local_94,param_3);
          local_98 = (float)fVar6;
          fVar6 = (float10)FUN_00401930(&local_94,local_64);
          if ((float10)local_98 <= fVar6) goto LAB_007857f6;
        }
        pfVar4 = local_64;
        pfVar5 = param_3;
        for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar5 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          pfVar5 = pfVar5 + 1;
        }
      }
    }
  }
LAB_007857f6:
  local_4 = 0xffffffff;
  if (local_70 != 0) {
    FUN_005d0370(local_70,(local_68 - local_70 >> 2) << 2,0);
  }
  ExceptionList = local_c;
  return *(char *)((int)param_3 + 0x51) != '\0';
}

