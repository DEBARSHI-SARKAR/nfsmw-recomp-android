/* speed.exe 00464720 FUN_00464720; analysis pseudocode, not buildable source.
 * calls 004643d0 FUN_004643d0
 */

void FUN_00464720(int param_1,undefined4 param_2)

{
  FUN_004643d0(param_1 + 0x164,param_2,&stack0x0000000c);
  if (*(code **)(param_1 + 0x264) != (code *)0x0) {
    (**(code **)(param_1 + 0x264))(param_1 + 0x164);
  }
  return;
}

