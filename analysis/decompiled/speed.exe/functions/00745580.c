/* speed.exe 00745580 FUN_00745580; analysis pseudocode, not buildable source.
 * calls 00768200 FUN_00768200
 * calls 00738ce0 FUN_00738ce0
 * calls 0072f120 FUN_0072f120
 * calls 0045ecf0 FUN_0045ecf0
 * calls 0045f490 FUN_0045f490
 * calls 007267a0 FUN_007267a0
 * calls 0045f510 FUN_0045f510
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00745580(int param_1,float param_2,float *param_3,undefined4 param_4,undefined4 param_5,
            float param_6)

{
  float fVar1;
  float10 fVar2;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [48];
  float local_20;
  float local_1c;
  float local_18;
  
  if ((((*(byte *)(param_1 + 0x50) & 1) != 0) && (_DAT_00894b58 < param_2)) &&
     (_DAT_00890968 < param_6)) {
    FUN_0045ecf0(local_50,param_5,param_4);
    local_bc = *param_3;
    local_c0 = -param_3[1];
    local_b8 = 0.0;
    FUN_0045f490(&local_c0,&local_c0);
    local_a0 = 0.0;
    local_9c = 1.0;
    local_98 = 0.0;
    FUN_00738ce0(&local_70,local_50,&local_a0);
    local_c4 = ABS(local_70 * local_c0 + local_6c * local_bc + local_68 * local_b8);
    fVar1 = local_c4;
    if (local_c4 < _DAT_008933d4) {
      fVar1 = _DAT_008933d4;
    }
    fVar1 = fVar1 * param_6 * _DAT_008933d4;
    local_a4 = fVar1;
    FUN_0045f510(&local_c0,&local_c0,fVar1);
    local_74 = local_20 + local_c0;
    local_78 = local_18 + local_b8;
    local_a0 = local_20 - local_c0;
    local_9c = local_1c - local_bc;
    local_98 = local_18 - local_b8;
    local_7c = -(local_1c + local_bc);
    local_88 = -local_9c;
    local_84 = local_98;
    local_80 = local_a0;
    fVar2 = (float10)FUN_00768200(&local_7c);
    local_a4 = (float)fVar2;
    fVar2 = (float10)FUN_00768200(&local_88);
    local_60 = local_20;
    local_58 = (float)(((float10)local_a4 + fVar2) * (float10)_DAT_008933d4);
    local_5c = local_1c;
    local_b8 = (float)((float10)local_a4 * (float10)_DAT_008933d4 - fVar2 * (float10)_DAT_008933d4);
    FUN_0045f510(&local_c0,&local_c0,fVar1);
    local_c4 = local_c4 * param_2;
    if (local_c4 < _DAT_00894b58) {
      local_c4 = 0.3;
    }
    FUN_0072f120(0,&local_60,&local_c0,1,local_c4);
    return;
  }
  FUN_007267a0();
  return;
}

