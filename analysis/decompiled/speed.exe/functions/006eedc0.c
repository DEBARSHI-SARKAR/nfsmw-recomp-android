/* speed.exe 006eedc0 FUN_006eedc0; analysis pseudocode, not buildable source.
 * calls 00581c20 FUN_00581c20
 */

undefined4 * __fastcall FUN_006eedc0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xb;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00581c20();
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  return param_1;
}

