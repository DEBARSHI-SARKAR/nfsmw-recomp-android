/* speed.exe 0085c120 FUN_0085c120; analysis pseudocode, not buildable source.
 * calls 0083ed90 FUN_0083ed90
 * calls 0083f4f0 FUN_0083f4f0
 * calls 00864b80 FUN_00864b80
 */

void FUN_0085c120(int param_1)

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
  if (-1 < *(int *)(unaff_ESI + 0xa8)) {
    FUN_00864b80(*(undefined4 *)(param_1 + 0x6c),*(int *)(unaff_ESI + 0xa8));
    *(undefined4 *)(unaff_ESI + 0xa8) = 0xffffffff;
  }
  *(undefined4 *)(unaff_ESI + 0x90) = 5;
  return;
}

