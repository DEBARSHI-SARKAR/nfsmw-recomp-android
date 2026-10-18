/* speed.exe 004fca80 FUN_004fca80; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fca80(float param_1,float param_2)

{
  if (param_1 * _DAT_008933d4 < param_2) {
    FUN_007c4b80();
    return;
  }
  FUN_007c4b80();
  return;
}

