/* speed.exe 006f77f0 FUN_006f77f0; analysis pseudocode, not buildable source.
 * calls 006ef960 FUN_006ef960
 */

undefined1 * __fastcall FUN_006f77f0(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  if (DAT_00989220 <= DAT_00989224) {
    uVar2 = (**(code **)(DAT_00989218 + 0xc))(DAT_00989224 + 1);
    FUN_006ef960(uVar2);
  }
  puVar1 = (undefined4 *)(DAT_0098921c + DAT_00989224 * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1 + -0x40;
    puVar1[1] = 1;
  }
  DAT_00989268 = DAT_00989268 + 1;
  DAT_00989224 = DAT_00989224 + 1;
  return param_1;
}

