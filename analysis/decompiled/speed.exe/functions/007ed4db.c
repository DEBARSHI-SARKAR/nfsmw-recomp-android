/* speed.exe 007ed4db FUN_007ed4db; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ee583 FUN_007ee583
 */

int FUN_007ed4db(void)

{
  int iVar1;
  
  FUN_007ec1bd();
  iVar1 = FUN_007ee583();
  FUN_007ec1c8();
  *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  return iVar1;
}

