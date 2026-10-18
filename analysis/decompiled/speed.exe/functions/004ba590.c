/* speed.exe 004ba590 FUN_004ba590; analysis pseudocode, not buildable source.
 * calls 004b0720 FUN_004b0720
 */

float10 __thiscall FUN_004ba590(int param_1,undefined4 param_2)

{
  int extraout_EDX;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  FUN_004b0720();
  return (float10)*(float *)(extraout_EDX + 0x14);
}

