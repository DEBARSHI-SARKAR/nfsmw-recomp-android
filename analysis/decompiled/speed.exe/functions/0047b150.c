/* speed.exe 0047b150 FUN_0047b150; analysis pseudocode, not buildable source.
 * calls 0046d2e0 FUN_0046d2e0
 * calls 0047b030 FUN_0047b030
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0047b150(int param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  
  fVar7 = (float10)FUN_0047b030();
  fVar2 = (float)fVar7;
  fVar3 = _DAT_00890968;
  if (((float10)_DAT_00890968 < fVar7) && (fVar3 = fVar2, _DAT_0089096c < fVar2)) {
    fVar3 = _DAT_0089096c;
  }
  if (fVar2 == fVar3) {
    uVar4 = FUN_0046d2e0(fVar2);
    if (param_4 != (float *)0x0) {
      *param_4 = fVar2;
    }
    if (param_2 != (float *)0x0) {
      fVar2 = _DAT_00890968;
      if ((-1 < (int)uVar4) && (fVar2 = _DAT_0089096c, (int)uVar4 < (int)*(short *)(param_1 + 0x14))
         ) {
        fVar2 = *(float *)(uVar4 * 0x84 + 0x38 + param_1);
      }
      *param_2 = fVar2;
    }
    if (param_3 != (float *)0x0) {
      iVar1 = uVar4 + 1;
      fVar2 = _DAT_00890968;
      if ((-1 < iVar1) && (fVar2 = _DAT_0089096c, iVar1 < *(short *)(param_1 + 0x14))) {
        fVar2 = *(float *)(iVar1 * 0x84 + 0x38 + param_1);
      }
      *param_3 = fVar2;
    }
    uVar5 = (int)*(short *)(param_1 + 0x14) - 1;
    uVar6 = ((int)uVar4 < 1) - 1 & uVar4;
    if ((int)uVar6 <= (int)uVar5) {
      uVar5 = uVar6;
    }
    if (uVar4 == uVar5) {
      return uVar4 * 0x84 + 0x28 + param_1;
    }
  }
  return 0;
}

