/* speed.exe 00468be0 FUN_00468be0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00468be0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)*(ushort *)(*(int *)(param_1 + 0x1c) + 0x284);
  fVar1 = fVar2 * _DAT_008934e0 + (float)*(ushort *)(*(int *)(param_1 + 0x1c) + 0xc4);
  fVar2 = fVar2 * param_2[9];
  *param_2 = fVar1;
  if (fVar1 != param_2[2]) {
    *(undefined2 *)(param_2 + 10) = 2;
  }
  param_2[1] = fVar2;
  if (fVar2 != param_2[3]) {
    *(undefined2 *)(param_2 + 10) = 2;
  }
  return;
}

