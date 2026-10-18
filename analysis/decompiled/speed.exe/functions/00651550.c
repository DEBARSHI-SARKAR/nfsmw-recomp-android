/* speed.exe 00651550 FUN_00651550; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00651550(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  param_1[2] = fVar2;
  if (fVar2 != *param_1) {
    *(undefined2 *)(param_1 + 10) = 2;
  }
  param_1[0xd] = fVar1;
  if (fVar1 != param_1[0xb]) {
    *(undefined2 *)(param_1 + 0x15) = 2;
  }
  return;
}

