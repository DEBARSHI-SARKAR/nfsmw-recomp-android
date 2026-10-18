/* speed.exe 0069fc00 FUN_0069fc00; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069fc00(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  undefined1 uVar7;
  float10 fVar8;
  
  if (*(int **)(param_1 + 0xf4) != (int *)0x0) {
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0xf4) + 0x20))();
    fVar1 = (float)fVar8;
    fVar2 = fVar1;
    if (fVar8 < (float10)_DAT_00890968) {
      fVar2 = -fVar1;
    }
    if (fVar2 < _DAT_008aabe0 == (fVar2 == _DAT_008aabe0)) {
      fVar2 = *(float *)(*(int *)(param_1 + 0xdc) + 0x70);
      fVar4 = fVar2 * fVar1;
      uVar7 = 0;
      bVar6 = *(byte *)(param_2 + 0xc4) & 1;
      if ((bVar6 != 0) ||
         ((*(short *)(param_2 + 0xcc) < 4 && (_DAT_008933d4 < *(float *)(param_2 + 0x4c))))) {
        uVar7 = 1;
      }
      fVar5 = *(float *)(param_2 + 0xd4) * *(float *)(param_2 + 0xd0);
      if (bVar6 != 0) {
        fVar5 = fVar5 * _DAT_008910f0;
      }
      if (fVar4 != _DAT_00890968) {
        iVar3 = *(int *)(param_1 + 300);
        if (_DAT_00890968 < *(float *)(iVar3 + 0x78)) {
          if (*(char *)(iVar3 + 0x10c) == '\0') {
            *(float *)(iVar3 + 0xe0) = fVar4 * _DAT_008933d4 + *(float *)(iVar3 + 0xe0);
          }
          *(undefined1 *)(iVar3 + 0x10d) = uVar7;
          *(float *)(iVar3 + 0xe4) = fVar5 * *(float *)(iVar3 + 0xe4);
        }
        iVar3 = *(int *)(param_1 + 0x130);
        if (_DAT_00890968 < *(float *)(iVar3 + 0x78)) {
          if (*(char *)(iVar3 + 0x10c) == '\0') {
            *(float *)(iVar3 + 0xe0) = fVar4 * _DAT_008933d4 + *(float *)(iVar3 + 0xe0);
          }
          *(undefined1 *)(iVar3 + 0x10d) = uVar7;
          *(float *)(iVar3 + 0xe4) = fVar5 * *(float *)(iVar3 + 0xe4);
        }
      }
      fVar1 = (_DAT_0089096c - fVar2) * fVar1;
      if (fVar1 != _DAT_00890968) {
        iVar3 = *(int *)(param_1 + 0x134);
        if (_DAT_00890968 < *(float *)(iVar3 + 0x78)) {
          if (*(char *)(iVar3 + 0x10c) == '\0') {
            *(float *)(iVar3 + 0xe0) = fVar1 * _DAT_008933d4 + *(float *)(iVar3 + 0xe0);
          }
          *(undefined1 *)(iVar3 + 0x10d) = uVar7;
          *(float *)(iVar3 + 0xe4) = fVar5 * *(float *)(iVar3 + 0xe4);
        }
        iVar3 = *(int *)(param_1 + 0x138);
        if (_DAT_00890968 < *(float *)(iVar3 + 0x78)) {
          if (*(char *)(iVar3 + 0x10c) == '\0') {
            *(float *)(iVar3 + 0xe0) = fVar1 * _DAT_008933d4 + *(float *)(iVar3 + 0xe0);
          }
          *(undefined1 *)(iVar3 + 0x10d) = uVar7;
          *(float *)(iVar3 + 0xe4) = fVar5 * *(float *)(iVar3 + 0xe4);
          return;
        }
      }
    }
  }
  return;
}

