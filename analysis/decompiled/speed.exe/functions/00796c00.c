/* speed.exe 00796c00 FUN_00796c00; analysis pseudocode, not buildable source.
 * calls 00794f80 FUN_00794f80
 * calls 007930f0 FUN_007930f0
 */

void __thiscall FUN_00796c00(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  FUN_00794f80(uVar1);
  FUN_007930f0(uVar1);
  *param_1 = 0;
  return;
}

