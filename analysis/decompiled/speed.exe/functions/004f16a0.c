/* speed.exe 004f16a0 FUN_004f16a0; analysis pseudocode, not buildable source.
 * calls 004e1eb0 FUN_004e1eb0
 * calls 004e1e60 FUN_004e1e60
 * calls 004e8e10 FUN_004e8e10
 */

void FUN_004f16a0(void)

{
  if (DAT_00914360 != 0) {
    switch(DAT_00914360) {
    case 1:
    case 3:
      FUN_004e8e10();
      break;
    case 2:
      FUN_004e1eb0();
      break;
    case 4:
      FUN_004e1e60();
    }
    DAT_00914360 = 0;
    DAT_0091429c = 0;
  }
  return;
}

