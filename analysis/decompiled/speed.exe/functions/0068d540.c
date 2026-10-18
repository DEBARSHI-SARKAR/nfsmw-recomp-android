/* speed.exe 0068d540 FUN_0068d540; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0068d540(int *param_1)

{
  int *piVar1;
  float unaff_ESI;
  float10 fVar2;
  float10 fVar3;
  
  piVar1 = (int *)(**(code **)(*(int *)param_1[-6] + 0x54))();
  fVar2 = (float10)(**(code **)(*piVar1 + 0x2c))();
  fVar3 = (float10)(**(code **)(*(int *)param_1[-1] + 0x90))();
  if (((float10)_DAT_00890968 < fVar3) && (_DAT_0089096c < (float)fVar2)) {
    (**(code **)(*param_1 + 0x38))();
    fVar2 = (float10)(**(code **)(*param_1 + 0x38))(2);
    fVar2 = (fVar2 + (float10)unaff_ESI) * (float10)_DAT_008933d4;
    if (fVar2 < (float10)_DAT_00890968) {
      fVar2 = -fVar2;
    }
    fVar2 = fVar2 / (float10)4.2039e-45;
    if ((float10)_DAT_0089096c <= fVar2) {
      fVar2 = (float10)_DAT_0089096c;
    }
    return fVar2;
  }
  return (float10)0.0;
}

