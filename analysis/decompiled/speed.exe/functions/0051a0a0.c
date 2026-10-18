/* speed.exe 0051a0a0 FUN_0051a0a0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 * __fastcall FUN_0051a0a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_007c4b80();
  *param_1 = uVar1;
  return param_1;
}

