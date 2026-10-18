/* speed.exe 0046c230 FUN_0046c230; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0046c230(int param_1,float *param_2,float param_3)

{
  *param_2 = ((param_3 * *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x14)) * param_3 +
             *(float *)(param_1 + 0x18)) * param_3 + *(float *)(param_1 + 0x1c);
  param_2[1] = ((param_3 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40)) * param_3 +
               *(float *)(param_1 + 0x44)) * param_3 + *(float *)(param_1 + 0x48);
  param_2[2] = ((param_3 * *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x6c)) * param_3 +
               *(float *)(param_1 + 0x70)) * param_3 + *(float *)(param_1 + 0x74);
  return;
}

