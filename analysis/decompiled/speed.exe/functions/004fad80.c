/* speed.exe 004fad80 FUN_004fad80; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fad80(void)

{
  int iVar1;
  
  _DAT_00915f80 = DAT_0091512c;
  iVar1 = DAT_00915128;
  _DAT_00915124 = DAT_00915120;
  if ((DAT_00915f94 != 0) && (DAT_00915f9c < DAT_00915f98)) {
    DAT_00915f9c = DAT_00915f98;
  }
  _DAT_00915fa4 = DAT_00915f84 - DAT_00915128;
  DAT_00915f94 = 0;
  DAT_00915f98 = 0;
  if (DAT_00915fa0 < _DAT_00915fa4) {
    DAT_00915fa0 = _DAT_00915fa4;
  }
  DAT_00915120 = _DAT_00915fa4;
  DAT_00915f88 = DAT_00915f7c + DAT_0091512c;
  DAT_00915128 = DAT_0091512c;
  DAT_0091512c = iVar1;
  DAT_00915f84 = _DAT_00915f80;
  _DAT_00915f90 = 0;
  return;
}

