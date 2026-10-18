/* speed.exe 00452880 FUN_00452880; analysis pseudocode, not buildable source.
 */

void FUN_00452880(int param_1,char param_2)

{
  if (param_2 == '\0') {
    param_1 = -param_1;
  }
  DAT_0090dcd4 = DAT_0090dcd4 + param_1;
  if (DAT_0090dcd0 < DAT_0090dcd4) {
    DAT_0090dcd0 = DAT_0090dcd4;
  }
  return;
}

