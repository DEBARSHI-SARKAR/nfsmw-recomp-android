/* speed.exe 00406340 FUN_00406340; analysis pseudocode, not buildable source.
 * calls 00627320 FUN_00627320
 * calls 006ed200 FUN_006ed200
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406340(float *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  FUN_006ed200();
  iVar2 = FUN_00627320();
  fVar1 = (float)iVar2 * _DAT_00890510 * _DAT_00890980;
  FUN_006ed200();
  iVar2 = FUN_00627320();
  fVar3 = (float10)FUN_005c5e80((float)iVar2 * _DAT_00890980);
  fVar4 = (float10)fVar1 * (float10)_DAT_0089096c;
  fVar5 = (float10)fsin(fVar4);
  *param_1 = (float)(fVar5 * fVar3);
  fVar4 = (float10)fcos(fVar4);
  param_1[1] = 0.0;
  param_1[2] = (float)(fVar4 * fVar3);
  return;
}

