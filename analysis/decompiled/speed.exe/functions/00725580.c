/* speed.exe 00725580 FUN_00725580; analysis pseudocode, not buildable source.
 * calls 007252f0 FUN_007252f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00725580(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x68);
  local_40 = _DAT_00890968;
  if (iVar1 != 0) {
    local_40 = *(float *)(iVar1 + 0x290);
  }
  if (local_40 <= _DAT_00890968) {
    return;
  }
  iVar2 = param_1;
  iVar3 = param_1;
  if (iVar1 != 0) {
    param_1 = *(int *)(iVar1 + 0x34ac);
    iVar2 = *(int *)(iVar1 + 0x34b0);
    iVar3 = *(int *)(iVar1 + 0x34a8);
  }
  local_50 = (float)iVar3;
  if (iVar3 < 0) {
    local_50 = local_50 + _DAT_00891214;
  }
  local_4c = (float)param_1;
  if (param_1 < 0) {
    local_4c = local_4c + _DAT_00891214;
  }
  local_48 = (float)iVar2;
  if (iVar2 < 0) {
    local_48 = local_48 + _DAT_00891214;
  }
  local_44 = 0x43000000;
  local_4 = 0;
  FUN_007252f0(0,&local_50,1,0);
  return;
}

