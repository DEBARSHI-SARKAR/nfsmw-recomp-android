/* speed.exe 0040a430 FUN_0040a430; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

void FUN_0040a430(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float *unaff_retaddr;
  float fStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_4;
  
  (**(code **)((int)*param_1 + 0x10))(&local_58);
  (**(code **)((int)*param_1 + 4))(&fStack_44);
  fStack_4c = fStack_10;
  fStack_54 = fStack_18;
  fStack_50 = fStack_14;
  if (fStack_60 < local_58) {
    fStack_40 = fStack_20;
    fStack_48 = fStack_28;
    fStack_44 = fStack_24;
  }
  if (fStack_60 <= local_58) {
    fStack_4 = fStack_60;
  }
  else {
    fStack_4 = local_58;
  }
  if (fStack_60 < local_58) {
    fStack_60 = local_58;
  }
  fVar1 = (fStack_4 * fStack_4) / fStack_60;
  fVar2 = fStack_60 - fVar1;
  *unaff_retaddr = fStack_48 * fVar2 + fStack_18;
  unaff_retaddr[1] = fStack_44 * fVar2 + fStack_14;
  unaff_retaddr[2] = fStack_40 * fVar2 + fStack_10;
  fVar2 = -fVar2;
  *param_1 = fStack_48 * fVar2 + fStack_18;
  param_1[1] = fStack_44 * fVar2 + fStack_14;
  param_1[2] = fStack_40 * fVar2 + fStack_10;
  fVar3 = (float10)FUN_005c5e80(fVar1 * fVar1 + fStack_4 * fStack_4);
  *param_2 = (float)fVar3;
  return;
}

