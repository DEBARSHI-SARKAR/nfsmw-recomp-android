/* speed.exe 005dcd00 FUN_005dcd00; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 * calls 00454810 FUN_00454810
 * calls 005c6bb0 FUN_005c6bb0
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005dcd00(undefined4 param_1,undefined4 *param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [16];
  
  puVar3 = &DAT_008a3028;
  puVar4 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_4c = 0;
  local_48 = 0;
  local_44 = 0x3f800000;
  local_40[0] = 0x3f800000;
  local_40[5] = 0x3f800000;
  local_40[10] = 0x3f800000;
  local_40[0xf] = 0x3f800000;
  local_40[0xe] = 0;
  local_40[0xd] = 0;
  local_40[0xc] = 0;
  local_40[0xb] = 0;
  local_40[9] = 0;
  local_40[8] = 0;
  local_40[7] = 0;
  local_40[6] = 0;
  local_40[4] = 0;
  local_40[3] = 0;
  local_40[2] = 0;
  local_40[1] = 0;
  pfVar1 = (float *)FUN_00454810(0x5a6a57c6,0);
  if (pfVar1 == (float *)0x0) {
    pfVar1 = (float *)FUN_006269b0(4);
  }
  FUN_005c6bb0(local_40,(param_3 + *pfVar1) * _DAT_008a3874,local_40);
  FUN_00401670(&local_4c,local_40,&local_4c);
  *param_2 = local_4c;
  param_2[1] = local_48;
  param_2[2] = local_44;
  return;
}

