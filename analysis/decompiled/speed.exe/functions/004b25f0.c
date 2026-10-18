/* speed.exe 004b25f0 FUN_004b25f0; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007edb0e FUN_007edb0e
 */

void FUN_004b25f0(int param_1)

{
  int iVar1;
  int unaff_ESI;
  
  FUN_007ec1bd();
  iVar1 = *(int *)(unaff_ESI + 0x58);
  param_1 = iVar1 - param_1;
  *(int *)(unaff_ESI + 0x58) = param_1;
  FUN_007ec1c8();
  if (((*(int *)(unaff_ESI + 0x50) <= iVar1) && (param_1 < *(int *)(unaff_ESI + 0x50))) &&
     (*(undefined4 *)(unaff_ESI + 0x54) = 1, *(int *)(unaff_ESI + 0x44) == 1)) {
    FUN_007edb0e(*(undefined4 *)(unaff_ESI + 0x184),*(undefined4 *)(unaff_ESI + 0x4c));
  }
  return;
}

