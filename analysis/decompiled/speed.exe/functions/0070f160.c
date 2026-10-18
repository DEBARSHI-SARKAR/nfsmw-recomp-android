/* speed.exe 0070f160 FUN_0070f160; analysis pseudocode, not buildable source.
 * calls 00705870 FUN_00705870
 */

undefined4 * __fastcall FUN_0070f160(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00705870();
  param_1[2] = uVar1;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_008b24ec;
  return param_1;
}

