/* speed.exe 0042fbd0 FUN_0042fbd0; analysis pseudocode, not buildable source.
 * calls 0041b720 FUN_0041b720
 */

int __fastcall FUN_0042fbd0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041b720();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

