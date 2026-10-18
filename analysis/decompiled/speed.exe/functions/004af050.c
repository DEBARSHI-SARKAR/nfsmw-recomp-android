/* speed.exe 004af050 FUN_004af050; analysis pseudocode, not buildable source.
 * calls 004d9680 FUN_004d9680
 */

undefined4 FUN_004af050(void)

{
  undefined4 uVar1;
  
  if (DAT_00911f68 != 0) {
    uVar1 = FUN_004d9680();
    return uVar1;
  }
  return 0;
}

