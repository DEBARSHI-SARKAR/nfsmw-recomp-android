/* speed.exe 0068d340 FUN_0068d340; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0068d340(int *param_1)

{
  int *piVar1;
  float unaff_ESI;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  (**(code **)(*param_1 + 0x38))(1);
  fVar4 = 0.0;
  fVar2 = (float10)(**(code **)(*param_1 + 0x38))();
  fVar3 = 1.4013e-45;
  fVar2 = (float10)(**(code **)(*param_1 + 0x58))
                             (1,fVar4,(float)((fVar2 + (float10)unaff_ESI) * (float10)_DAT_008933d4)
                             );
  fVar2 = (float10)(**(code **)(*param_1 + 0x58))(0,fVar3,fVar4,(float)fVar2);
  fVar4 = (float)((fVar2 + (float10)fVar4) * (float10)_DAT_008933d4);
  piVar1 = (int *)(**(code **)(*(int *)param_1[-6] + 0x54))();
  fVar2 = (float10)(**(code **)(*piVar1 + 0x2c))();
  fVar5 = (float)fVar2;
  fVar2 = (float10)(**(code **)(*(int *)param_1[-1] + 0x90))();
  if ((((float10)_DAT_00890968 < fVar2) && (_DAT_0089096c < fVar5)) &&
     (fVar4 * fVar3 < _DAT_00890968)) {
    fVar2 = (float10)fVar3;
    if (fVar3 < _DAT_00890968) {
      fVar2 = -fVar2;
    }
    fVar2 = fVar2 / (float10)fVar5;
    if ((float10)_DAT_0089096c <= fVar2) {
      fVar2 = (float10)_DAT_0089096c;
    }
    return fVar2;
  }
  return (float10)unaff_ESI;
}

