/* speed.exe 004be120 FUN_004be120; analysis pseudocode, not buildable source.
 * calls 004b7b00 FUN_004b7b00
 * calls 004d5bd0 FUN_004d5bd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004be120(int param_1)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xd0) + 0x38);
  if ((iVar1 == 3) || (iVar1 != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xd0) + 0x38);
    if ((iVar1 == 4) || (((iVar1 == 5 || (iVar1 == 6)) || (iVar1 == 7)))) {
      *(undefined4 *)(param_1 + 0x2c) = 0x45fa0000;
      return;
    }
    if (*(float *)(param_1 + 0x38) == _DAT_00890968) {
      return;
    }
    fVar2 = (_DAT_00894b60 / *(float *)(param_1 + 0x38)) * _DAT_00896d28 +
            *(float *)(param_1 + 0x270) + _DAT_00890fc8;
  }
  else {
    if (*(char *)(param_1 + 0x80) == '\0') {
      fVar3 = (float10)FUN_004d5bd0();
      if ((float10)_DAT_008964f8 <= fVar3) {
        fVar3 = (float10)FUN_004b7b00(*(undefined4 *)(param_1 + 0x2c),0x457a0000,
                                      *(undefined4 *)(param_1 + 0x288));
        *(float *)(param_1 + 0x2c) = (float)fVar3;
        return;
      }
      fVar3 = (float10)FUN_004b7b00(*(undefined4 *)(param_1 + 0x2c),0x447a0000,0x42480000);
      *(float *)(param_1 + 0x2c) = (float)fVar3;
      return;
    }
    if ((*(float *)(param_1 + 400) < _DAT_0089096c) &&
       (fVar3 = (float10)FUN_004d5bd0(), fVar3 < (float10)_DAT_00890da4)) {
      fVar3 = (float10)FUN_004b7b00(*(undefined4 *)(param_1 + 0x2c),0x460ca000,
                                    *(undefined4 *)(param_1 + 0x288));
      *(float *)(param_1 + 0x2c) = (float)fVar3;
      return;
    }
    fVar2 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x288);
    if ((_DAT_00896d28 <= fVar2) &&
       (fVar2 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x288), fVar2 <= _DAT_00896d28)) {
      *(float *)(param_1 + 0x2c) = _DAT_00896d28;
      return;
    }
  }
  *(float *)(param_1 + 0x2c) = fVar2;
  return;
}

