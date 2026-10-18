/* speed.exe 00450940 FUN_00450940; analysis pseudocode, not buildable source.
 * calls 004494d0 FUN_004494d0
 * calls 00445fa0 FUN_00445fa0
 * calls 0044ff50 FUN_0044ff50
 */

void FUN_00450940(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_0090dba0;
  do {
    piVar1[2] = 0;
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 0x68) = 0;
      FUN_004494d0(0);
      FUN_00445fa0(1);
    }
    piVar1 = piVar1 + 4;
  } while ((int)piVar1 < 0x90dca0);
  FUN_0044ff50(param_1);
  return;
}

