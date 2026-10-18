/* speed.exe 00464c80 FUN_00464c80; analysis pseudocode, not buildable source.
 * calls 00464ae0 FUN_00464ae0
 * calls 00461020 FUN_00461020
 */

void FUN_00464c80(float *param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar1 = FUN_00464ae0();
  fVar2 = (float10)FUN_00461020(uVar1);
  uVar1 = FUN_00464ae0();
  fVar3 = (float10)FUN_00461020(uVar1);
  uVar1 = FUN_00464ae0();
  fVar4 = (float10)FUN_00461020(uVar1);
  uVar1 = FUN_00464ae0();
  fVar5 = (float10)FUN_00461020(uVar1);
  *param_1 = (float)fVar2;
  param_1[3] = (float)fVar5;
  param_1[1] = (float)fVar3;
  param_1[2] = (float)fVar4;
  return;
}

