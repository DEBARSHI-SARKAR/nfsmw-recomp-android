/* speed.exe 00579840 FUN_00579840; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void FUN_00579840(float *param_1,float *param_2,int *param_3)

{
  float fVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  
  pfVar2 = (float *)(**(code **)(*param_3 + 0x60))();
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  fVar1 = pfVar2[2];
  param_1[1] = -fVar4;
  *param_1 = fVar1;
  piVar3 = (int *)FUN_005d59f0(&LAB_004039c0);
  if (piVar3 != (int *)0x0) {
    pfVar2 = (float *)(**(code **)(*piVar3 + 0x98))(fVar4,fVar5);
    fVar4 = pfVar2[2];
    param_2[1] = -*pfVar2;
    *param_2 = fVar4;
  }
  return;
}

