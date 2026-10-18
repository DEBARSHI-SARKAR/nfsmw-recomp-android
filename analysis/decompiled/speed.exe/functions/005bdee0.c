/* speed.exe 005bdee0 FUN_005bdee0; analysis pseudocode, not buildable source.
 * calls 005b9d10 FUN_005b9d10
 * calls 005b5840 FUN_005b5840
 */

void __thiscall FUN_005bdee0(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float local_c;
  float local_8;
  float local_4;
  
  cVar3 = *(char *)(param_1 + 2);
  local_4 = 0.0;
  local_8 = 0.0;
  local_c = 0.0;
  if (cVar3 == '\0') {
    FUN_005b5840(param_1,param_2,&local_c);
  }
  else if ((cVar3 == '\x01') || (cVar3 == '\x03')) {
    FUN_005b9d10(param_1,param_2,&local_c);
  }
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *(float *)(param_1 + 0x18) = (*param_3 - local_c) + *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x1c) = (fVar1 - local_8) + *(float *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x20) = (fVar2 - local_4) + *(float *)(param_1 + 0x20);
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x7f;
  return;
}

