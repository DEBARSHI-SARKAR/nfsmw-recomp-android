/* speed.exe 00667ac0 FUN_00667ac0; analysis pseudocode, not buildable source.
 * calls 007cb710 __aullshr
 */

undefined4 FUN_00667ac0(void)

{
  uint uVar1;
  
  uVar1 = __aullshr();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  return 0;
}

