/* speed.exe 0045adc0 FUN_0045adc0; analysis pseudocode, not buildable source.
 * calls 00659250 FUN_00659250
 */

undefined4 FUN_0045adc0(int param_1)

{
  undefined4 uVar1;
  
  DAT_0090dcd4 = DAT_0090dcd4 + param_1;
  if (DAT_0090dcd0 < DAT_0090dcd4) {
    DAT_0090dcd0 = DAT_0090dcd4;
  }
  if (param_1 != 0) {
    uVar1 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(param_1,0);
    return uVar1;
  }
  return 0;
}

