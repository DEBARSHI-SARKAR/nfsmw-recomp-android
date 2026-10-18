/* speed.exe 007edb0e FUN_007edb0e; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ed713 FUN_007ed713
 * calls 007ed010 FUN_007ed010
 * calls 007ed884 FUN_007ed884
 */

void FUN_007edb0e(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_007ed010(param_1);
  if (iVar1 != 0) {
    FUN_007ec1bd();
    iVar1 = FUN_007ed713(param_1,1);
    FUN_007ec1c8();
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x12) = param_2;
      FUN_007ed884();
      return;
    }
  }
  return;
}

