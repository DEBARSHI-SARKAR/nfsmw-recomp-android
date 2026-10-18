/* speed.exe 004b26b0 FUN_004b26b0; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 */

void FUN_004b26b0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + 4) = 1;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  FUN_007ec1bd();
  if (*(int *)(unaff_EDI + 0x70) == 0) {
    *(undefined4 *)(unaff_ESI + 8) = 0;
    *(int *)(unaff_EDI + 0x68) = unaff_ESI;
    *(int *)(unaff_EDI + 0x6c) = unaff_ESI;
    *(int *)(unaff_EDI + 0x70) = unaff_ESI;
    FUN_007ec1c8();
    return;
  }
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_EDI + 0x70);
  *(int *)(*(int *)(unaff_EDI + 0x70) + 0xc) = unaff_ESI;
  *(int *)(unaff_EDI + 0x70) = unaff_ESI;
  FUN_007ec1c8();
  return;
}

