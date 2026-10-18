/* speed.exe 0068d460 FUN_0068d460; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068d460(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  
  fVar2 = _DAT_00890968;
  if ((*(byte *)(param_2 + 0xc4) & 1) == 0) {
    if (_DAT_00890968 < *(float *)(param_1 + 0x8c)) {
      fVar3 = *(float *)(param_1 + 0x8c) - *(float *)(param_2 + 0xc0) * _DAT_00894210;
      *(float *)(param_1 + 0x8c) = fVar3;
      if (fVar3 <= fVar2) {
        fVar3 = _DAT_00890968;
      }
      *(float *)(param_1 + 0x8c) = fVar3;
      return;
    }
  }
  else {
    uVar6 = 0;
    iVar4 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    if (iVar4 != 0) {
      do {
        fVar7 = (float10)(**(code **)(*(int *)(param_1 + 0x4c) + 0x30))(uVar6);
        if ((float10)_DAT_008933d4 < fVar7) {
          fVar2 = *(float *)(param_2 + 0xc0) * _DAT_00894c30 + *(float *)(param_1 + 0x8c);
          bVar1 = _DAT_0089096c <= fVar2;
          *(float *)(param_1 + 0x8c) = fVar2;
          if (bVar1) {
            fVar2 = _DAT_0089096c;
          }
          *(float *)(param_1 + 0x8c) = fVar2;
          return;
        }
        uVar6 = uVar6 + 1;
        uVar5 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
      } while (uVar6 < uVar5);
    }
  }
  return;
}

