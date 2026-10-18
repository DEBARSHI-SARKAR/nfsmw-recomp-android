/* speed.exe 007ea380 FUN_007ea380; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007ea380(uint *param_1,int param_2)

{
  *(uint *)(param_2 + 8) = *param_1 >> 10 & 1;
  *(uint *)(param_2 + 0xc) = *param_1 >> 0xb & 1;
  *(uint *)(param_2 + 0x10) = *param_1 >> 9 & 1;
  return;
}

