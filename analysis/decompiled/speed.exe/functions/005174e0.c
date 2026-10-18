/* speed.exe 005174e0 FUN_005174e0; analysis pseudocode, not buildable source.
 * calls 007283d0 FUN_007283d0
 * calls 004655f0 FUN_004655f0
 * calls 00723a50 FUN_00723a50
 */

void FUN_005174e0(int param_1)

{
  char cVar1;
  
  if (DAT_009ab208 != 0) {
    if (param_1 == 0) {
      return;
    }
    cVar1 = FUN_00723a50(param_1);
    if (cVar1 != '\0') {
      FUN_007283d0(param_1);
      return;
    }
  }
  FUN_004655f0(param_1);
  return;
}

