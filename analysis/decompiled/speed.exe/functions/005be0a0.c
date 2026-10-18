/* speed.exe 005be0a0 FUN_005be0a0; analysis pseudocode, not buildable source.
 * calls 005ad0f0 FUN_005ad0f0
 * calls 005b9d10 FUN_005b9d10
 * calls 005b3a70 FUN_005b3a70
 * calls 005b5840 FUN_005b5840
 */

void __thiscall FUN_005be0a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  cVar1 = *(char *)(param_1 + 2);
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  local_14 = 0x3f800000;
  if (cVar1 == '\0') {
    FUN_005b5840(param_1,param_2,&local_20);
  }
  else if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
    FUN_005b9d10(param_1,param_2,&local_20);
  }
  local_20 = -local_20;
  local_1c = -local_1c;
  local_18 = -local_18;
  puVar2 = (undefined4 *)FUN_005ad0f0(local_10,&local_20);
  *param_3 = *puVar2;
  param_3[1] = puVar2[1];
  param_3[2] = puVar2[2];
  param_3[3] = puVar2[3];
  puVar2 = (undefined4 *)FUN_005ad0f0(local_10,(undefined4 *)(param_1 + 0x18));
  *param_3 = *puVar2;
  param_3[1] = puVar2[1];
  param_3[2] = puVar2[2];
  param_3[3] = puVar2[3];
  FUN_005b3a70(param_3);
  *(undefined4 *)(param_1 + 0x18) = *param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_3[1];
  *(undefined4 *)(param_1 + 0x20) = param_3[2];
  *(undefined4 *)(param_1 + 0x24) = param_3[3];
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x7f;
  return;
}

