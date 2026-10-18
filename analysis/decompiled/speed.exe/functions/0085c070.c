/* speed.exe 0085c070 FUN_0085c070; analysis pseudocode, not buildable source.
 * calls 00864730 FUN_00864730
 */

void FUN_0085c070(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  if (*(short *)(unaff_ESI + 6) == 1) {
    FUN_00864730(*(undefined4 *)(unaff_EDI + 0x38));
    *(undefined4 *)(unaff_EDI + 0x170) = 1;
    *(undefined2 *)(unaff_ESI + 6) = 0;
  }
  return;
}

