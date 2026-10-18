/* speed.exe 006dd380 FUN_006dd380; analysis pseudocode, not buildable source.
 * calls 006dd230 FUN_006dd230
 * calls 006cb190 FUN_006cb190
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006dd380(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_006cb190(*(undefined4 *)(param_1 + 0x428),*(undefined4 *)(param_1 + 0x42c));
  FUN_006dd230();
  if (DAT_0098291c < 1) {
    if ((DAT_0098291c < 0) || (DAT_00982918 < 0x578)) {
      fVar3 = (float10)_DAT_0089096c;
      goto LAB_006dd3f9;
    }
    if (DAT_0098291c < 1) {
      if ((DAT_0098291c < 0) || (DAT_00982918 < 0x708)) {
        fVar3 = (float10)_DAT_00890d3c;
        goto LAB_006dd3f9;
      }
      if ((DAT_0098291c < 1) && ((DAT_0098291c < 0 || (DAT_00982918 < 0x960)))) {
        fVar3 = (float10)_DAT_008959e4;
        goto LAB_006dd3f9;
      }
    }
  }
  fVar3 = (float10)_DAT_00890e98;
LAB_006dd3f9:
  if ((float10)(float)fVar2 <= fVar3) {
    fVar3 = (float10)(float)fVar2;
  }
  iVar1 = *(int *)(param_1 + 0x428);
  if (((iVar1 == 0x18ca) || (iVar1 == 0x8086)) ||
     ((iVar1 == 0x1002 && (*(int *)(param_1 + 0x42c) == 0x5834)))) {
    fVar3 = (float10)_DAT_00890968;
  }
  return fVar3;
}

