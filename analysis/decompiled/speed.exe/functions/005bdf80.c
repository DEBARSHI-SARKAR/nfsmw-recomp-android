/* speed.exe 005bdf80 FUN_005bdf80; analysis pseudocode, not buildable source.
 * calls 005b9d10 FUN_005b9d10
 * calls 005b5840 FUN_005b5840
 */

void __thiscall FUN_005bdf80(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  float local_8;
  float local_4;
  
  cVar2 = *(char *)(param_1 + 2);
  local_4 = 0.0;
  local_8 = 0.0;
  if (cVar2 == '\0') {
    FUN_005b5840(param_1,param_2,&local_8);
  }
  else if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
    FUN_005b9d10(param_1,param_2,&local_8);
  }
  fVar1 = param_3[1];
  *(float *)(param_1 + 0x18) = (*param_3 - local_8) + *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x1c) = (fVar1 - local_4) + *(float *)(param_1 + 0x1c);
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x7f;
  return;
}

