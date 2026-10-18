/* speed.exe 006e8be0 FUN_006e8be0; analysis pseudocode, not buildable source.
 * calls 0068ba30 FUN_0068ba30
 * calls 0068bbe0 FUN_0068bbe0
 */

void FUN_006e8be0(uint param_1)

{
  if (param_1 < 0x40) {
    FUN_0068ba30(param_1);
    return;
  }
  FUN_0068bbe0(param_1 - 0x40);
  return;
}

