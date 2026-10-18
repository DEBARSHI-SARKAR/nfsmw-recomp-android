/* speed.exe 00409b40 FUN_00409b40; analysis pseudocode, not buildable source.
 */

float10 __fastcall FUN_00409b40(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float local_1c;
  float fStack_10;
  
  fVar1 = (float)param_1[2];
  (**(code **)(*param_1 + 4))();
  fVar2 = (float)param_1[4];
  fVar5 = (float10)(**(code **)(*param_1 + 4))();
  if (fVar5 <= (float10)fVar2) {
    fVar5 = (float10)fVar2;
  }
  if (fVar5 <= (float10)0.0) {
    local_1c = (float)fVar5;
  }
  else {
    local_1c = 0.0;
  }
  fVar2 = (float)param_1[0x18];
  fVar3 = (float)param_1[6];
  fVar4 = (float)param_1[5];
  fVar5 = (float10)(**(code **)(*param_1 + 4))(2);
  if (fVar5 <= (float10)fVar3) {
    fVar5 = (float10)fVar3;
  }
  if ((float10)1.4013e-45 < fVar5) {
    fVar5 = (float10)1.4013e-45;
  }
  return (float10)local_1c * (float10)fStack_10 +
         (float10)fVar4 * (float10)fVar2 + fVar5 * (float10)fVar1;
}

