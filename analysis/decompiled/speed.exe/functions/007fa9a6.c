/* speed.exe 007fa9a6 FUN_007fa9a6; analysis pseudocode, not buildable source.
 * calls 007fa62e FUN_007fa62e
 * calls 007fa3fe FUN_007fa3fe
 */

undefined4 FUN_007fa9a6(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_007fa3fe(0x34);
  if (iVar1 != 0) {
    uVar2 = FUN_007fa62e();
    return uVar2;
  }
  return 0;
}

