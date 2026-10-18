/* speed.exe 005d0fd0 FUN_005d0fd0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void FUN_005d0fd0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if (0x400 < param_2) {
      FUN_004655f0(param_1);
      return;
    }
    uVar1 = param_2 - 1 >> 4;
    *param_1 = (&DAT_00925b30)[uVar1];
    (&DAT_00925b30)[uVar1] = param_1;
  }
  return;
}

