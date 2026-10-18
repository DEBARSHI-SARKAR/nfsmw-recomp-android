/* speed.exe 006beeb0 FUN_006beeb0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006beeb0(int param_1,float *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  
  sVar1 = *(short *)(param_1 + 0x2c);
  fVar4 = (float)(int)*(short *)(param_1 + 0x2e) * _DAT_008ae864;
  fVar5 = (float)(int)*(short *)(param_1 + 0x30) * _DAT_008ae864;
  param_2[3] = 0.0;
  *param_2 = (float)(int)sVar1 * _DAT_008ae864;
  param_2[1] = fVar4;
  param_2[2] = fVar5;
  sVar1 = *(short *)(param_1 + 0x34);
  sVar2 = *(short *)(param_1 + 0x36);
  sVar3 = *(short *)(param_1 + 0x32);
  param_2[7] = 0.0;
  fVar4 = (float)(int)sVar1 * _DAT_008ae864;
  fVar5 = (float)(int)sVar2 * _DAT_008ae864;
  param_2[4] = (float)(int)sVar3 * _DAT_008ae864;
  param_2[5] = fVar4;
  param_2[6] = fVar5;
  sVar1 = *(short *)(param_1 + 0x3a);
  sVar2 = *(short *)(param_1 + 0x3c);
  sVar3 = *(short *)(param_1 + 0x38);
  param_2[0xb] = 0.0;
  fVar4 = (float)(int)sVar1 * _DAT_008ae864;
  fVar5 = (float)(int)sVar2 * _DAT_008ae864;
  param_2[8] = (float)(int)sVar3 * _DAT_008ae864;
  param_2[9] = fVar4;
  param_2[10] = fVar5;
  return;
}

