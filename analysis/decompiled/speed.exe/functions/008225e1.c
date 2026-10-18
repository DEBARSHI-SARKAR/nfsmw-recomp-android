/* speed.exe 008225e1 FUN_008225e1; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0082042b FUN_0082042b
 */

undefined4 FUN_008225e1(void)

{
  undefined4 uVar1;
  
  FUN_0081bccb();
  uVar1 = FUN_0082042b();
  FUN_0081bcd9();
  return uVar1;
}

