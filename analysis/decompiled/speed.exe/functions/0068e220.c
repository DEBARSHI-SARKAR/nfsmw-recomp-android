/* speed.exe 0068e220 FUN_0068e220; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068e220(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x104) + 8);
  fVar3 = (*(float *)(iVar2 + 0x10) * _DAT_008a938c * _DAT_008f8a94 * *(float *)(param_1 + 0xcc) +
          *(float *)(iVar2 + 8 + *(int *)(param_1 + 0x10c) * 4) * _DAT_008a938c *
          *(float *)(iVar2 + *(int *)(param_1 + 0x10c) * 4) * _DAT_008f8a90 *
          *(float *)(param_1 + 200)) * _DAT_008f8fe4;
  fVar1 = *(float *)(param_1 + 0xd0);
  if (fVar1 < _DAT_00890968) {
    fVar1 = -fVar1;
  }
  if (*(float *)(param_1 + 0xc4) * param_2 + _DAT_008f8fe0 * fVar1 < fVar3) {
    if (_DAT_0089096c < fVar3) {
      *(undefined1 *)(param_1 + 0x134) = 1;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      return;
    }
    *(undefined1 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x134) = 0;
  return;
}

