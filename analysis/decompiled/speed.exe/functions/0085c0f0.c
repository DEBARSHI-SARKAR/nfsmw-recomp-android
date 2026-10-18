/* speed.exe 0085c0f0 FUN_0085c0f0; analysis pseudocode, not buildable source.
 * calls 00864b80 FUN_00864b80
 */

void FUN_0085c0f0(int param_1)

{
  int unaff_ESI;
  
  if (-1 < *(int *)(unaff_ESI + 0xa8)) {
    FUN_00864b80(*(undefined4 *)(param_1 + 0x6c),*(int *)(unaff_ESI + 0xa8));
    *(undefined4 *)(unaff_ESI + 0xa8) = 0xffffffff;
  }
  *(undefined4 *)(unaff_ESI + 0x90) = 5;
  return;
}

