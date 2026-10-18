/* speed.exe 00406010 FUN_00406010; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00406010(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x44);
  fVar1 = *(float *)(param_1 + 0x48);
  param_2[2] = *(float *)(param_1 + 0x40);
  *param_2 = -fVar2;
  param_2[1] = fVar1;
  return;
}

