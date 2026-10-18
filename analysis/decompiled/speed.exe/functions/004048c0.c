/* speed.exe 004048c0 FUN_004048c0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004048c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_20 [8];
  
  *param_1 = DAT_008a2fd0;
  param_1[1] = DAT_008a2fd4;
  param_1[2] = DAT_008a2fd8;
  param_1[3] = DAT_008a2fdc;
  param_1[4] = DAT_008a2fd0;
  param_1[5] = DAT_008a2fd4;
  param_1[6] = DAT_008a2fd8;
  param_1[7] = DAT_008a2fdc;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  puVar2 = local_20;
  puVar3 = param_1 + 8;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  *(undefined2 *)((int)param_1 + 0x52) = 0;
  param_1[0x15] = 0;
  return;
}

