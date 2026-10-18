/* speed.exe 0081d5c5 FUN_0081d5c5; analysis pseudocode, not buildable source.
 * calls 00819648 FUN_00819648
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0081d5c5(undefined4 param_1)

{
  float fVar1;
  int unaff_ESI;
  
  fVar1 = _DAT_00890968;
  *(undefined4 *)(unaff_ESI + 8) = param_1;
  if (*(float *)(unaff_ESI + 0x20) != fVar1) {
    FUN_00819648(unaff_ESI + 0xc);
    *(undefined4 *)(unaff_ESI + 0x20) = 0;
  }
  return;
}

