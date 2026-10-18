/* speed.exe 007f6337 FUN_007f6337; analysis pseudocode, not buildable source.
 * calls 007f407e FUN_007f407e
 */

void __fastcall FUN_007f6337(int param_1)

{
  int *piVar1;
  int local_8;
  
  piVar1 = (int *)(param_1 + 0x18);
  local_8 = 3;
  do {
    if ((piVar1[-4] == 0x10) && (*piVar1 != 0)) {
      FUN_007f407e(*piVar1);
      *piVar1 = 0;
    }
    piVar1[-4] = 0;
    piVar1 = piVar1 + 0x15;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined4 *)(param_1 + 0x104) = 0;
  return;
}

