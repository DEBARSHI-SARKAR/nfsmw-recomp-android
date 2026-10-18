/* speed.exe 004ea620 FUN_004ea620; analysis pseudocode, not buildable source.
 * calls 004e4060 FUN_004e4060
 * calls 007c4b80 FUN_007c4b80
 */

void FUN_004ea620(uint param_1)

{
  if ((char)(param_1 >> 8) < '\0') {
    param_1 = param_1 | 0xffff0000;
  }
  FUN_004e4060(param_1);
  FUN_007c4b80();
  return;
}

