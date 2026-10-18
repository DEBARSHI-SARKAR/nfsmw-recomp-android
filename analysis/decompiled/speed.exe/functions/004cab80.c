/* speed.exe 004cab80 FUN_004cab80; analysis pseudocode, not buildable source.
 * calls 00831782 FUN_00831782
 * calls 004c6e00 FUN_004c6e00
 * calls 00831682 FUN_00831682
 */

void __fastcall FUN_004cab80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
  }
  piVar1 = (int *)param_1[2];
  param_1[3] = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
  }
  piVar1 = (int *)param_1[4];
  param_1[2] = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar1);
  }
  param_1[4] = 0;
  if (*param_1 == 2) {
    FUN_004c6e00(param_1,(int)*(char *)(param_1[1] + 1));
  }
  *param_1 = 0;
  return;
}

