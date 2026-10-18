/* speed.exe 007a1010 FUN_007a1010; analysis pseudocode, not buildable source.
 * calls 00793e40 FUN_00793e40
 * calls 007a0060 FUN_007a0060
 */

void FUN_007a1010(void)

{
  if (0 < DAT_009b4220) {
    FUN_007a0060(4);
    return;
  }
  FUN_00793e40();
  return;
}

