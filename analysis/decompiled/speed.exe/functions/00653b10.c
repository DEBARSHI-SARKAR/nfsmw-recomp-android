/* speed.exe 00653b10 FUN_00653b10; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00653b10(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  
  if (*(byte *)(param_1 + 6) < *(byte *)(param_1 + 5)) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) + 1;
  }
  fVar2 = param_2 + *(float *)(param_1 + 8);
  pfVar1 = (float *)(*(int *)(param_1 + 0x10) + (uint)*(byte *)(param_1 + 7) * 4);
  *(float *)(param_1 + 8) = fVar2;
  *(float *)(param_1 + 8) = fVar2 - *pfVar1;
  *pfVar1 = param_2;
  bVar3 = *(char *)(param_1 + 7) + 1;
  *(byte *)(param_1 + 7) = bVar3;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 8) / (float)*(byte *)(param_1 + 6);
  if (*(byte *)(param_1 + 5) <= bVar3) {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}

