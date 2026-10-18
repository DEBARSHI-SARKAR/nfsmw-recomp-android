/* speed.exe 007ea560 FUN_007ea560; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007ea560(uint *param_1,int param_2)

{
  *(uint *)(param_2 + 8) = *param_1 >> 10 & 1;
  *(uint *)(param_2 + 0xc) = *param_1 >> 0xb & 1;
  *(uint *)(param_2 + 0x10) = *param_1 >> 9 & 1;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x80;
  *(uint *)(param_2 + 0x84) = param_1[3];
  return;
}

