/* speed.exe 007fa07c FUN_007fa07c; analysis pseudocode, not buildable source.
 * calls 007f9d33 FUN_007f9d33
 * calls 007f9ed3 FUN_007f9ed3
 */

undefined4 FUN_007fa07c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_007f9d33(0x38);
  if (iVar1 != 0) {
    uVar2 = FUN_007f9ed3();
    return uVar2;
  }
  return 0;
}

