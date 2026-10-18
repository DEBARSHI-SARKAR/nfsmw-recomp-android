/* speed.exe 0046b590 FUN_0046b590; analysis pseudocode, not buildable source.
 * calls 00789870 FUN_00789870
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b590(void)

{
  char cVar1;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  float local_18 [4];
  float local_8;
  undefined4 local_4;
  
  if (DAT_00925e90 == 6) {
    local_18[3] = (float)*unaff_ESI;
    local_4 = unaff_ESI[2];
    local_8 = (float)unaff_ESI[1] + _DAT_0089472c;
    local_18[0] = 0.0;
    local_18[1] = 0.0;
    local_18[2] = 4.2039e-45;
    cVar1 = FUN_00789870(local_18 + 3,local_18,0);
    if ((cVar1 != '\0') && (unaff_EDI == 3)) {
      unaff_ESI[1] = local_18[0];
    }
    if ((float)unaff_ESI[1] < local_18[0]) {
      unaff_ESI[1] = local_18[0];
    }
    unaff_ESI[1] = *(float *)(&DAT_00894770 + unaff_EDI * 4) + (float)unaff_ESI[1];
  }
  return;
}

