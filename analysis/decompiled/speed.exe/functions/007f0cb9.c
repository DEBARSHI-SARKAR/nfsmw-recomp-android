/* speed.exe 007f0cb9 FUN_007f0cb9; analysis pseudocode, not buildable source.
 * calls 007f08ff FUN_007f08ff
 * calls 007f09c6 FUN_007f09c6
 */

uint FUN_007f0cb9(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_007f09c6(param_1);
  if (iVar1 == 1) {
    uVar2 = (uint)CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5));
  }
  else if ((1 < iVar1) && (iVar1 < 4)) {
    uVar2 = FUN_007f08ff(param_1 + 8,4);
  }
  return uVar2;
}

