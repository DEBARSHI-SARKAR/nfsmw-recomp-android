/* speed.exe 0076f010 FUN_0076f010; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0076f010(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_EAX;
  float *unaff_ESI;
  float10 fVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = *param_1 - *unaff_ESI;
  local_14 = param_1[1] - unaff_ESI[1];
  local_10 = param_1[2] - unaff_ESI[2];
  fVar1 = *in_EAX - *param_2;
  fVar2 = in_EAX[1] - param_2[1];
  fVar3 = in_EAX[2] - param_2[2];
  local_c = fVar1;
  local_8 = fVar2;
  local_4 = fVar3;
  FUN_0040fe20(&local_18,&local_c);
  *param_3 = -(fVar1 * local_c + fVar2 * local_8 + fVar3 * local_4);
  fVar4 = (float10)fVar1 * (float10)fVar1 +
          (float10)fVar2 * (float10)fVar2 + (float10)fVar3 * (float10)fVar3;
  if (fVar4 < (float10)_DAT_00891218) {
    return (float10)_DAT_008b5a90;
  }
  return ((float10)_DAT_00890da8 / fVar4) *
         ((float10)fVar1 * (float10)local_18 +
         (float10)local_14 * (float10)fVar2 + (float10)local_10 * (float10)fVar3);
}

