/* speed.exe 004fe7a0 FUN_004fe7a0; analysis pseudocode, not buildable source.
 * calls 0045eca0 FUN_0045eca0
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fe7a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_20 [7];
  
  FUN_0045eca0(local_20,param_1,0);
  uVar1 = *(ushort *)(param_3 + 0x6a);
  *(undefined4 *)(param_3 + 0xc) = local_20[0];
  sVar2 = FUN_007c4b80();
  if ((uVar1 & 1) != 0) {
    sVar2 = -sVar2;
  }
  *(ushort *)(param_3 + 0x6a) = uVar1 + sVar2;
  FUN_0045eca0(&local_30,param_2,0);
  local_30 = local_30 * _DAT_00899dd8;
  local_2c = local_2c * _DAT_00899dd8;
  local_28 = local_28 * _DAT_00899dd8;
  if (local_30 < _DAT_00890968) {
    local_30 = 0.0;
  }
  if (local_2c < _DAT_00890968) {
    local_2c = 0.0;
  }
  if (local_28 < _DAT_00890968) {
    local_28 = 0.0;
  }
  if (_DAT_00899dd8 < local_30) {
    local_30 = 255.0;
  }
  if (_DAT_00899dd8 < local_2c) {
    local_2c = 255.0;
  }
  if (_DAT_00899dd8 < local_28) {
    local_28 = 255.0;
  }
  iVar3 = FUN_007c4b80();
  uVar4 = FUN_007c4b80();
  uVar5 = FUN_007c4b80();
  uVar6 = FUN_007c4b80();
  *(uint *)(param_3 + 8) = ((iVar3 << 8 | uVar4) << 8 | uVar5) << 8 | uVar6;
  return;
}

