/* speed.exe 0085c0a0 FUN_0085c0a0; analysis pseudocode, not buildable source.
 * calls 0083ed90 FUN_0083ed90
 * calls 0083f4f0 FUN_0083f4f0
 */

void FUN_0085c0a0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x9c) != 0) {
    FUN_0083f4f0(*(int *)(unaff_ESI + 0x9c));
    *(undefined4 *)(unaff_ESI + 0x9c) = 0;
  }
  if (*(int *)(unaff_ESI + 0x98) != 0) {
    FUN_0083ed90(*(int *)(unaff_ESI + 0x98));
    *(undefined4 *)(unaff_ESI + 0x98) = 0;
  }
  *(undefined4 *)(unaff_ESI + 0x88) = 5;
  return;
}

