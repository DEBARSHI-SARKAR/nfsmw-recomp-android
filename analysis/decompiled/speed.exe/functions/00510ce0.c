/* speed.exe 00510ce0 FUN_00510ce0; analysis pseudocode, not buildable source.
 * calls 006515d0 FUN_006515d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00510ce0(float *param_1)

{
  FUN_006515d0(param_1);
  *param_1 = *param_1 - _DAT_008933d4;
  param_1[1] = param_1[1] - _DAT_008933d4;
  return;
}

