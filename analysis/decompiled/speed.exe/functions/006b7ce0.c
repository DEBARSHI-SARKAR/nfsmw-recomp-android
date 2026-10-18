/* speed.exe 006b7ce0 FUN_006b7ce0; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 */

uint __fastcall FUN_006b7ce0(int param_1)

{
  uint uVar1;
  float10 extraout_ST0;
  
  if (*(int *)(param_1 + 0x174) != 0) {
    uVar1 = FUN_006e8de0();
    *(float *)(param_1 + 0x17c) = (float)extraout_ST0;
    return uVar1 & 0xffffff00;
  }
  return 1;
}

