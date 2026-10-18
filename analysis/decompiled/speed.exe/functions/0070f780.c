/* speed.exe 0070f780 FUN_0070f780; analysis pseudocode, not buildable source.
 * calls 00705820 FUN_00705820
 */

undefined4 * __fastcall FUN_0070f780(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00705820();
  param_1[2] = uVar1;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_008b2598;
  return param_1;
}

