/* speed.exe 00497a90 FUN_00497a90; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00497a90(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_EAX;
  float *unaff_ESI;
  
  fVar1 = *unaff_ESI * *(float *)(param_2 + 0xc);
  fVar2 = *(float *)(param_2 + 4) * unaff_ESI[3];
  fVar3 = -(*(float *)(param_2 + 4) * *unaff_ESI);
  fVar4 = unaff_ESI[3] * *(float *)(param_2 + 0xc);
  *param_1 = fVar1 * *(float *)(in_EAX + 0xc) - fVar2 * *(float *)(in_EAX + 8);
  param_1[1] = fVar1 * *(float *)(in_EAX + 8) + fVar2 * *(float *)(in_EAX + 0xc);
  param_1[2] = fVar3 * *(float *)(in_EAX + 0xc) + fVar4 * *(float *)(in_EAX + 8);
  param_1[3] = fVar4 * *(float *)(in_EAX + 0xc) - fVar3 * *(float *)(in_EAX + 8);
  return;
}

