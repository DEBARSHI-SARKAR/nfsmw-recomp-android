/* speed.exe 0088e0b0 FUN_0088e0b0; analysis pseudocode, not buildable source.
 * calls 00492540 FUN_00492540
 * calls 00491360 FUN_00491360
 */

void FUN_0088e0b0(void)

{
  FUN_00492540();
  if (DAT_00911834 != 0) {
    (*(code *)PTR_FUN_008ee4d4)(DAT_00911834,DAT_00911830 * 4);
    DAT_00911834 = 0;
  }
  return;
}

