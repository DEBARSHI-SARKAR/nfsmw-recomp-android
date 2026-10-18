/* speed.exe 007ea4c0 FUN_007ea4c0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007ea4c0(uint *param_1,int param_2)

{
  *(uint *)(param_2 + 8) = *param_1 >> 10 & 1;
  *(uint *)(param_2 + 0xc) = *param_1 >> 0xb & 1;
  *(uint *)(param_2 + 0x10) = *param_1 >> 9 & 1;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x100;
  *(uint *)(param_2 + 100) = param_1[4];
  *(uint *)(param_2 + 0x68) = param_1[5];
  *(uint *)(param_2 + 0x6c) = param_1[6];
  *(uint *)(param_2 + 0x70) = param_1[7];
  return;
}

