/* speed.exe 004309b0 FUN_004309b0; analysis pseudocode, not buildable source.
 * calls 0041b990 FUN_0041b990
 */

int __fastcall FUN_004309b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0041b990();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

