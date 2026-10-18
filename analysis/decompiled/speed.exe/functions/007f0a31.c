/* speed.exe 007f0a31 FUN_007f0a31; analysis pseudocode, not buildable source.
 * calls 007f08ff FUN_007f08ff
 * calls 007f09c6 FUN_007f09c6
 */

int FUN_007f0a31(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_007f09c6(param_1);
  if (iVar1 == 1) {
    iVar2 = CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3)) + 4;
  }
  else if ((1 < iVar1) && (iVar1 < 4)) {
    iVar2 = FUN_007f08ff(param_1 + 0xc,4);
  }
  return iVar2;
}

