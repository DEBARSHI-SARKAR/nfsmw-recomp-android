/* speed.exe 004ba050 FUN_004ba050; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004ba050(float *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar3 = (float10)_DAT_00892fa4;
  if ((((undefined4 **)DAT_00919694 != &DAT_00919694) && (DAT_00919694 != (undefined4 *)0x0)) &&
     (DAT_00919694 != (undefined4 *)0x4)) {
    if (((undefined4 **)DAT_00919694 == &DAT_00919694) || (DAT_00919694 == (undefined4 *)0x0)) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = DAT_00919694 + -1;
    }
    iVar1 = puVar2[7];
    fVar3 = (float10)*(float *)(iVar1 + 0x40) - (float10)*param_1;
    fVar4 = (float10)*(float *)(iVar1 + 0x44) - (float10)param_1[1];
    fVar5 = (float10)*(float *)(iVar1 + 0x48) - (float10)param_1[2];
    fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
    if ((float10)_DAT_00892fa4 <= fVar3) {
      fVar3 = (float10)_DAT_00892fa4;
    }
  }
  if ((((undefined4 **)DAT_00919704 != &DAT_00919704) && (DAT_00919704 != (undefined4 *)0x0)) &&
     (DAT_00919704 != (undefined4 *)0x4)) {
    if (((undefined4 **)DAT_00919704 == &DAT_00919704) || (DAT_00919704 == (undefined4 *)0x0)) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = DAT_00919704 + -1;
    }
    iVar1 = puVar2[7];
    fVar4 = (float10)*(float *)(iVar1 + 0x40) - (float10)*param_1;
    fVar5 = (float10)*(float *)(iVar1 + 0x44) - (float10)param_1[1];
    fVar6 = (float10)*(float *)(iVar1 + 0x48) - (float10)param_1[2];
    fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
    if (fVar4 < fVar3) {
      fVar3 = (float10)(float)fVar4;
    }
  }
  return fVar3;
}

