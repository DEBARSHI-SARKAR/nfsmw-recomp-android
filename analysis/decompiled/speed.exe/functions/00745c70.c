/* speed.exe 00745c70 FUN_00745c70; analysis pseudocode, not buildable source.
 * calls 007390b0 FUN_007390b0
 * calls 00744c00 FUN_00744c00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00745c70(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float10 fVar6;
  float10 fVar7;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x398) = 0;
  fVar3 = _DAT_008f2260 * _DAT_008b2f58;
  if ((DAT_009885c8 == 0) && (cVar5 = FUN_00744c00(), cVar5 == '\0')) {
    if (*(uint *)(param_1 + 0x3cc) < *(uint *)(param_1 + 0x3c8)) {
      return;
    }
    if (*(uint *)(param_1 + 0x3cc) == 0) {
      return;
    }
    if (fVar3 < *(float *)(param_1 + 0x3d0)) {
      return;
    }
  }
  if (DAT_009b09b0 == 0) {
    uVar1 = *(uint *)(param_4 + 0x4c);
    local_10 = 0.0;
    local_c = 0.0;
    local_8 = 0;
    local_4 = 0;
    if ((uVar1 & 1) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x74) + 0x90);
      if (_DAT_00890968 < *(float *)(iVar2 + 0xd0) * *(float *)(iVar2 + 0xcc)) {
        local_10 = *(float *)(iVar2 + 0xcc);
        local_c = *(float *)(iVar2 + 0xd0);
        local_8 = *(undefined4 *)(iVar2 + 0xd4);
        local_4 = *(undefined4 *)(iVar2 + 0xd8);
      }
    }
    if ((uVar1 & 2) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 0x90);
      if (local_10 * local_c < *(float *)(iVar2 + 0xd0) * *(float *)(iVar2 + 0xcc)) {
        local_10 = *(float *)(iVar2 + 0xcc);
        local_c = *(float *)(iVar2 + 0xd0);
        local_8 = *(undefined4 *)(iVar2 + 0xd4);
        local_4 = *(undefined4 *)(iVar2 + 0xd8);
      }
    }
    if ((uVar1 & 4) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x7c) + 0x90);
      if (local_10 * local_c < *(float *)(iVar2 + 0xd0) * *(float *)(iVar2 + 0xcc)) {
        local_10 = *(float *)(iVar2 + 0xcc);
        local_c = *(float *)(iVar2 + 0xd0);
        local_8 = *(undefined4 *)(iVar2 + 0xd4);
        local_4 = *(undefined4 *)(iVar2 + 0xd8);
      }
    }
    if ((uVar1 & 8) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x80) + 0x90);
      if (local_10 * local_c < *(float *)(iVar2 + 0xd0) * *(float *)(iVar2 + 0xcc)) {
        local_10 = *(float *)(iVar2 + 0xcc);
        local_c = *(float *)(iVar2 + 0xd0);
        local_8 = *(undefined4 *)(iVar2 + 0xd4);
        local_4 = *(undefined4 *)(iVar2 + 0xd8);
      }
    }
    FUN_007390b0(param_3,uVar1,&local_10);
    FUN_007390b0(param_3,*(uint *)(param_4 + 0x8c) & *(uint *)(param_4 + 0x4c),&DAT_009053d0);
    fVar6 = (float10)fsin((float10)*(float *)(param_1 + 0x394) * (float10)_DAT_0089096c);
    fVar7 = (float10)fsin((float10)*(float *)(param_1 + 0x390) * (float10)_DAT_0089096c);
    fVar3 = (float)fVar6 * *(float *)(param_1 + 0x90);
    if (fVar3 <= _DAT_00890968) {
      fVar3 = _DAT_00890968;
    }
    *(float *)(param_1 + 0x398) = fVar3;
    fVar4 = (float)fVar6 * *(float *)(param_1 + 0xc0);
    if (fVar3 < fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x398) = fVar3;
    fVar4 = (float)fVar7 * *(float *)(param_1 + 0x94);
    if (fVar3 < fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x398) = fVar3;
    fVar4 = (float)fVar7 * *(float *)(param_1 + 0xa4);
    if (fVar3 < fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x398) = fVar3;
  }
  return;
}

