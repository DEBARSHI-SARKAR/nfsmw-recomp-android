/* speed.exe 0076c500 FUN_0076c500; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076c500(char param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_EAX;
  float *unaff_EBX;
  float *unaff_ESI;
  float *unaff_EDI;
  float10 fVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_1 != '\0') {
    fVar4 = (float10)FUN_005c5e80((unaff_ESI[1] - in_EAX[1]) * (unaff_ESI[1] - in_EAX[1]) +
                                  (unaff_ESI[2] - in_EAX[2]) * (unaff_ESI[2] - in_EAX[2]) +
                                  (*unaff_ESI - *in_EAX) * (*unaff_ESI - *in_EAX));
    if (fVar4 <= (float10)_DAT_00890da4) {
      local_c = *unaff_ESI - *unaff_EBX;
      local_8 = unaff_ESI[1] - unaff_EBX[1];
      local_4 = unaff_ESI[2] - unaff_EBX[2];
      FUN_0040fe20(&local_c,&local_c);
      fVar1 = (float)fVar4 * _DAT_00890d34;
      fVar2 = local_c * fVar1;
      fVar3 = local_8 * fVar1;
      fVar1 = local_4 * fVar1;
      *unaff_EDI = fVar2 + *unaff_ESI;
      unaff_EDI[1] = fVar3 + unaff_ESI[1];
      unaff_EDI[2] = fVar1 + unaff_ESI[2];
      fVar4 = (float10)FUN_005c5e80(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
      fVar5 = fVar4 + (float10)param_2 + (float10)_DAT_00890cd4;
      fVar4 = (float10)_DAT_00890dc0;
      *param_3 = (float)fVar5;
      if (fVar4 < fVar5) {
        fVar5 = (float10)_DAT_00890dc0;
      }
      *param_3 = (float)fVar5;
      return;
    }
  }
  param_2 = param_2 * _DAT_008910c4;
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[1] = unaff_ESI[1];
  unaff_EDI[2] = unaff_ESI[2];
  *param_3 = param_2;
  return;
}

