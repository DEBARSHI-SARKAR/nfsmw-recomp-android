/* speed.exe 006f1220 FUN_006f1220; analysis pseudocode, not buildable source.
 * calls 0041ea60 FUN_0041ea60
 * calls 0040feb0 FUN_0040feb0
 * calls 00444dc0 FUN_00444dc0
 */

void FUN_006f1220(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [4];
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_50 = 0;
  local_4c = 0x3f800000;
  local_48 = 0;
  local_44 = 0;
  if (param_3 != (undefined4 *)0x0) {
    local_50 = *param_3;
    local_4c = param_3[1];
    local_48 = param_3[2];
  }
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = 0;
  FUN_0040feb0(&local_20,&local_20);
  FUN_0041ea60(&local_50,&local_20,local_40);
  FUN_00444dc0(&local_20,local_40,local_30);
  local_10 = DAT_008a2fd0;
  local_4 = DAT_008a2fdc;
  local_c = DAT_008a2fd4;
  local_8 = DAT_008a2fd8;
  local_40[3] = 0;
  local_14 = 0;
  local_24 = 0;
  puVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

