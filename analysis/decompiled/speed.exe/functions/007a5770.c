/* speed.exe 007a5770 FUN_007a5770; analysis pseudocode, not buildable source.
 * calls 005816b0 FUN_005816b0
 */

undefined4 FUN_007a5770(void)

{
  int iVar1;
  
  iVar1 = FUN_005816b0();
  if ((iVar1 != 5) && (iVar1 != 0x38)) {
    return 0;
  }
  return 1;
}

