/* speed.exe 00445cd0 FUN_00445cd0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00445cd0(int param_1,int param_2,int param_3)

{
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x40;
  *(int *)(param_1 + 0x38) = param_2;
  *(float *)(param_1 + 0x40) = (float)param_2 * *(float *)(param_1 + 0x60);
  *(int *)(param_1 + 0x3c) = param_3;
  *(float *)(param_1 + 0x44) = (float)param_3 * *(float *)(param_1 + 0x60);
  return;
}

