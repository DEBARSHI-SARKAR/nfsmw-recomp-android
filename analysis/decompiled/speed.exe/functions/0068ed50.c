/* speed.exe 0068ed50 FUN_0068ed50; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068ed50(int param_1,int param_2)

{
  float fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  local_8 = *(float *)(param_1 + 0x1a8);
  if (((local_8 != _DAT_00890968) && (2 < *(uint *)(param_1 + 0xfc))) &&
     (_DAT_00890968 < *(float *)(param_2 + 0x4c))) {
    fVar1 = *(float *)(param_2 + 0x8c) * *(float *)(param_2 + 0x4c) * _DAT_00890f14;
    if (local_8 * fVar1 < _DAT_00890968) {
      return;
    }
    if (local_8 < _DAT_00890968) {
      local_8 = -local_8;
    }
    local_8 = local_8 * fVar1;
    local_c = 0.0;
    local_4 = 0.0;
    FUN_00401670(&local_c,param_2,&local_c);
    local_c = local_c + *(float *)(param_2 + 0x60);
    local_8 = local_8 + *(float *)(param_2 + 100);
    local_4 = local_4 + *(float *)(param_2 + 0x68);
    (**(code **)(**(int **)(param_1 + 0xe8) + 100))(&local_c);
  }
  local_8 = *(float *)(param_1 + 0x1ac);
  fVar1 = *(float *)(param_2 + 0x8c) * *(float *)(param_2 + 0x4c);
  if (((_DAT_00890968 < fVar1 * local_8) && (2 < *(uint *)(param_1 + 0xfc))) &&
     (*(short *)(param_2 + 0xcc) == 0)) {
    if (local_8 < _DAT_00890968) {
      local_8 = -local_8;
    }
    local_8 = local_8 * fVar1 * _DAT_008ab244;
    local_c = 0.0;
    local_4 = 0.0;
    FUN_00401670(&local_c,param_2,&local_c);
    local_c = local_c + *(float *)(param_2 + 0x60);
    local_8 = local_8 + *(float *)(param_2 + 100);
    local_4 = local_4 + *(float *)(param_2 + 0x68);
    (**(code **)(**(int **)(param_1 + 0xe8) + 100))(&local_c);
    return;
  }
  return;
}

