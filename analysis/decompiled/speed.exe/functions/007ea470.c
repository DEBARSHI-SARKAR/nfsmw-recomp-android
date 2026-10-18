/* speed.exe 007ea470 FUN_007ea470; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007ea470(uint *param_1,int param_2)

{
  *(uint *)(param_2 + 8) = *param_1 >> 10 & 1;
  *(uint *)(param_2 + 0xc) = *param_1 >> 0xb & 1;
  *(uint *)(param_2 + 0x10) = *param_1 >> 9 & 1;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 4;
  *(uint *)(param_2 + 0x54) = *param_1 & 0xff;
  *(uint *)(param_2 + 0x5c) = param_1[6];
  *(uint *)(param_2 + 0x58) = *param_1 >> 0x16 & 1;
  return;
}

