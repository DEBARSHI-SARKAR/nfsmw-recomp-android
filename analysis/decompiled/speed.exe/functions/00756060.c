/* speed.exe 00756060 FUN_00756060; analysis pseudocode, not buildable source.
 * calls 00425200 FUN_00425200
 * calls 006bd610 FUN_006bd610
 * calls 004021e0 FUN_004021e0
 * calls 006da350 FUN_006da350
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00756060(void)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  float local_30;
  float local_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if ((((undefined4 **)DAT_00919694 != &DAT_00919694) && (DAT_00919694 != (undefined4 *)0x0)) &&
     (DAT_00919694 != (undefined4 *)0x4)) {
    if (((undefined4 **)DAT_00919694 == &DAT_00919694) || (DAT_00919694 == (undefined4 *)0x0)) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = DAT_00919694 + -1;
    }
    iVar1 = (**(code **)(*piVar3 + 0x10))();
    if (iVar1 == 0) {
      if ((_DAT_009b37a0 & 1) == 0) {
        _DAT_009b37a0 = _DAT_009b37a0 | 1;
      }
      if ((DAT_0092d884 != 0) && (*DAT_0092d87c != 0)) {
        piVar3 = (int *)FUN_00425200(1);
        piVar3 = (int *)(**(code **)(*piVar3 + 4))();
        piVar3 = (int *)(**(code **)(*piVar3 + 0x54))();
        if (piVar3 != (int *)0x0) {
          pfVar2 = (float *)(**(code **)(*piVar3 + 0x20))();
          DAT_009b3794 = -*pfVar2;
          DAT_009b3798 = pfVar2[1];
          DAT_009b3790 = pfVar2[2];
          FUN_004021e0(&DAT_009b3790,&DAT_009b3790,&DAT_009053b0);
          pfVar2 = &DAT_009b3790;
          goto LAB_007560b9;
        }
      }
    }
    else {
      pfVar2 = (float *)(iVar1 + 0x20);
      if (pfVar2 != (float *)0x0) goto LAB_007560b9;
    }
  }
  if ((undefined4 **)DAT_009b27ec == &DAT_009b27ec) {
    return;
  }
  pfVar2 = (float *)(DAT_009b27ec + 200);
  if (pfVar2 == (float *)0x0) {
    return;
  }
LAB_007560b9:
  local_30 = _DAT_009053b0 + *pfVar2;
  local_2c = _DAT_009053b4 + pfVar2[1];
  fStack_28 = _DAT_009053b8 + pfVar2[2];
  fStack_20 = *(float *)(DAT_00919690 + 0x40) + _DAT_009b0aa0;
  fStack_1c = *(float *)(DAT_00919690 + 0x44) + _DAT_009b0aa4;
  fStack_18 = *(float *)(DAT_00919690 + 0x48) + _DAT_009b0aa8;
  FUN_006bd610();
  FUN_006da350(&fStack_20,&local_30);
  return;
}

