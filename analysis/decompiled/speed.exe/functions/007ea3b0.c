/* speed.exe 007ea3b0 FUN_007ea3b0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007ea3b0(uint *param_1,int param_2)

{
  *(uint *)(param_2 + 8) = *param_1 >> 10 & 1;
  *(uint *)(param_2 + 0xc) = *param_1 >> 0xb & 1;
  *(uint *)(param_2 + 0x10) = *param_1 >> 9 & 1;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 2;
  *(uint *)(param_2 + 0x14) = *param_1 & 0xff;
  *(uint *)(param_2 + 0x20) = param_1[4];
  *(uint *)(param_2 + 0x24) = param_1[5];
  *(uint *)(param_2 + 0x18) = param_1[6];
  *(uint *)(param_2 + 0x1c) = param_1[7];
  *(uint *)(param_2 + 0x28) = *param_1 >> 0x1c;
  *(uint *)(param_2 + 0x2c) = *param_1 >> 0x16 & 1;
  *(uint *)(param_2 + 0x34) = *(byte *)((int)param_1 + 2) & 1;
  *(uint *)(param_2 + 0x38) = *param_1 >> 0x11 & 1;
  *(uint *)(param_2 + 0x3c) = *param_1 >> 0x12 & 1;
  *(uint *)(param_2 + 0x40) = *param_1 >> 0x13 & 1;
  *(uint *)(param_2 + 0x44) = *param_1 >> 0x14 & 1;
  *(uint *)(param_2 + 0x48) = *param_1 >> 0x15 & 1;
  *(uint *)(param_2 + 0x4c) = *param_1 >> 0x17 & 1;
  *(uint *)(param_2 + 0x30) = *(byte *)((int)param_1 + 3) & 1;
  return;
}

