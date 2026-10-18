/* speed.exe 00862254 FUN_00862254; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 */

void FUN_00862254(void)

{
  int unaff_ESI;
  int *unaff_EDI;
  
  FUN_007ec1bd();
  if (*unaff_EDI == 0) {
    *unaff_EDI = unaff_ESI;
  }
  else {
    *(int *)(unaff_EDI[1] + 4) = unaff_ESI;
  }
  unaff_EDI[1] = unaff_ESI;
  *(undefined4 *)(unaff_ESI + 4) = 0;
  FUN_007ec1c8();
  return;
}

