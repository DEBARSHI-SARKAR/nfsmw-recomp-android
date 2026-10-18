/* speed.exe 00822428 FUN_00822428; analysis pseudocode, not buildable source.
 * calls 008215fc FUN_008215fc
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 */

undefined4 FUN_00822428(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_0081bccb();
  uVar1 = FUN_008215fc(DAT_009c2046,*(undefined4 *)(param_1 + 4),param_2);
  FUN_0081bcd9();
  return uVar1;
}

