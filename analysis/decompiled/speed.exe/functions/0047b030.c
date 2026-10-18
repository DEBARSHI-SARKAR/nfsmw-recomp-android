/* speed.exe 0047b030 FUN_0047b030; analysis pseudocode, not buildable source.
 * calls 0046e290 FUN_0046e290
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0047b030(int param_1)

{
  float fVar1;
  int *piVar2;
  int extraout_EDX;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = _DAT_00890968;
  fVar3 = (float10)_DAT_00890968;
  if (*(int *)(param_1 + 8) == 0) {
    return fVar3;
  }
  switch(*(undefined4 *)(*(int *)(param_1 + 8) + 4)) {
  case 0:
    if (DAT_009885c8 == (int *)0x0) {
      return fVar3;
    }
    piVar2 = (int *)(**(code **)(*DAT_009885c8 + 0x48))();
    if (piVar2 == (int *)0x0) {
      return (float10)fVar1;
    }
    fVar3 = (float10)(**(code **)(*piVar2 + 0x28))();
    fVar4 = (float10)(**(code **)(*piVar2 + 0x20))();
    fVar5 = (float10)(**(code **)(*piVar2 + 0x24))();
    fVar6 = (float10)(**(code **)(*piVar2 + 0x20))();
    return (float10)(float)((float10)(float)fVar3 - fVar4) / ((float10)(float)fVar5 - fVar6);
  case 1:
  case 3:
    if (*(float *)(param_1 + 0x10) <= _DAT_00890968) {
      return fVar3;
    }
    if (DAT_008ee398 == '\0') {
      fVar3 = (float10)DAT_00925ae8 * (float10)_DAT_00890984;
    }
    else {
      fVar3 = (float10)DAT_00925b14 * (float10)_DAT_00890984;
    }
    break;
  case 2:
    if (*(float *)(param_1 + 0x10) <= _DAT_00890968) {
      return fVar3;
    }
    fVar3 = (float10)FUN_0046e290();
    param_1 = extraout_EDX;
    break;
  default:
    goto switchD_0047b056_default;
  }
  fVar3 = (fVar3 - (float10)*(float *)(param_1 + 0xc)) / (float10)*(float *)(param_1 + 0x10);
  if ((float10)_DAT_0089096c < fVar3) {
    return (float10)_DAT_0089096c;
  }
switchD_0047b056_default:
  return fVar3;
}

