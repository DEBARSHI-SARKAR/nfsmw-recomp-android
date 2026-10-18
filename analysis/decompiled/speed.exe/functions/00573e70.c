/* speed.exe 00573e70 FUN_00573e70; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00573e70(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0xd8);
  *(float *)(param_1 + 0xd8) = fVar1;
  *(float *)(param_1 + 0xf8) = fVar1;
  return;
}

