/* speed.exe 0069ee90 FUN_0069ee90; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0069ee90(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0xec) + 0x20))();
    fVar1 = (float)fVar6;
    if (fVar1 != _DAT_00890968) {
      fVar2 = *(float *)(*(int *)(param_1 + 0xd4) + 0x70);
      iVar3 = *(int *)(param_1 + 0xfc);
      if (_DAT_00890968 < *(float *)(iVar3 + 0x78)) {
        fVar4 = (_DAT_0089096c - fVar2) * fVar1;
        fVar5 = fVar4;
        if (fVar4 < _DAT_00890968) {
          fVar5 = -fVar4;
        }
        if (_DAT_00890968 <= fVar5) {
          *(float *)(iVar3 + 0xe0) = fVar4 * _DAT_008933d4 + *(float *)(iVar3 + 0xe0);
        }
      }
      iVar3 = *(int *)(param_1 + 0x100);
      if (_DAT_00890968 < *(float *)(iVar3 + 0x78)) {
        fVar4 = (_DAT_0089096c - fVar2) * fVar1;
        fVar5 = fVar4;
        if (fVar4 < _DAT_00890968) {
          fVar5 = -fVar4;
        }
        if (_DAT_00890968 <= fVar5) {
          *(float *)(iVar3 + 0xe0) = fVar4 * _DAT_008933d4 + *(float *)(iVar3 + 0xe0);
        }
      }
      iVar3 = *(int *)(param_1 + 0x104);
      if (_DAT_00890968 < *(float *)(iVar3 + 0x78)) {
        fVar4 = fVar1 * fVar2;
        fVar5 = fVar4;
        if (fVar4 < _DAT_00890968) {
          fVar5 = -fVar4;
        }
        if (_DAT_00890968 <= fVar5) {
          *(float *)(iVar3 + 0xe0) = fVar4 * _DAT_008933d4 + *(float *)(iVar3 + 0xe0);
        }
      }
      iVar3 = *(int *)(param_1 + 0x108);
      if (_DAT_00890968 < *(float *)(iVar3 + 0x78)) {
        fVar2 = fVar2 * fVar1;
        fVar1 = fVar2;
        if (fVar2 < _DAT_00890968) {
          fVar1 = -fVar2;
        }
        if (_DAT_00890968 <= fVar1) {
          *(float *)(iVar3 + 0xe0) = fVar2 * _DAT_008933d4 + *(float *)(iVar3 + 0xe0);
          return;
        }
      }
    }
  }
  return;
}

