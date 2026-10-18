/* speed.exe 004cb480 FUN_004cb480; analysis pseudocode, not buildable source.
 * calls 004cb3f0 FUN_004cb3f0
 */

void FUN_004cb480(undefined4 *param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)FUN_004cb3f0(param_2);
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &param_2;
  }
  *param_1 = *param_2;
  return;
}

