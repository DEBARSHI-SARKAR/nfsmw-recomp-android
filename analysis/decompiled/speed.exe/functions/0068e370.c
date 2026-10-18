/* speed.exe 0068e370 FUN_0068e370; analysis pseudocode, not buildable source.
 * calls 0068e2e0 FUN_0068e2e0
 * calls 0068e220 FUN_0068e220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068e370(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  FUN_0068e220(0);
  if (*(char *)(extraout_ECX + 0x134) == '\0') {
    iVar1 = *(int *)(*(int *)(extraout_ECX + 0x104) + 8);
    fVar2 = *(float *)(iVar1 + 8 + *(int *)(extraout_ECX + 0x10c) * 4) * _DAT_008a938c *
            _DAT_008f8a90 * *(float *)(extraout_ECX + 200);
    fVar3 = *(float *)(iVar1 + 0x10) * _DAT_008a938c * _DAT_008f8a94 *
            *(float *)(extraout_ECX + 0xcc);
    if (_DAT_00890968 < *(float *)(extraout_ECX + 0xd0)) {
      fVar2 = -fVar2;
    }
    fVar2 = fVar2 + *(float *)(extraout_ECX + 0xe4);
    *(float *)(extraout_ECX + 0xe4) = fVar2;
    if (_DAT_00890968 < *(float *)(extraout_ECX + 0xd0)) {
      fVar3 = -fVar3;
    }
    fVar3 = fVar3 + fVar2;
    *(float *)(extraout_ECX + 0xe4) = fVar3;
    fVar2 = (fVar3 + *(float *)(extraout_ECX + 0xe0)) / _DAT_008f8ab0;
    *(float *)(extraout_ECX + 0x108) = fVar2;
    *(float *)(extraout_ECX + 0xd0) = fVar2 * param_2 + *(float *)(extraout_ECX + 0xd0);
  }
  else {
    *(undefined4 *)(extraout_ECX + 0x108) = 0;
    *(undefined4 *)(extraout_ECX + 0xd0) = 0;
  }
  FUN_0068e2e0();
  *(undefined4 *)(extraout_ECX_00 + 0xd8) = 0;
  *(undefined4 *)(extraout_ECX_00 + 0xdc) = 0;
  return;
}

