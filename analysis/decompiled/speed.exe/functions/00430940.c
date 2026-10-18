/* speed.exe 00430940 FUN_00430940; analysis pseudocode, not buildable source.
 * calls 0041b930 FUN_0041b930
 */

int __fastcall FUN_00430940(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041b930();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

