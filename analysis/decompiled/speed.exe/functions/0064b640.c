/* speed.exe 0064b640 FUN_0064b640; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 005d0370 FUN_005d0370
 */

void FUN_0064b640(undefined4 param_1,uint param_2)

{
  if (param_2 < 0x401) {
    FUN_005d0370();
    return;
  }
  FUN_004655f0(param_1);
  return;
}

