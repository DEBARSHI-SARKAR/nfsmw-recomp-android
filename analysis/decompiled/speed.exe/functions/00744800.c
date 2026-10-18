/* speed.exe 00744800 FUN_00744800; analysis pseudocode, not buildable source.
 * calls 007425f0 FUN_007425f0
 */

void FUN_00744800(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_009b27ec;
  if ((undefined4 **)DAT_009b27ec != &DAT_009b27ec) {
    do {
      if (((param_1 == -1) || (puVar1[2] == param_1)) && (puVar1[0xc6] != 0)) {
        FUN_007425f0();
      }
      puVar1 = (undefined4 *)*puVar1;
    } while ((undefined4 **)puVar1 != &DAT_009b27ec);
  }
  return;
}

