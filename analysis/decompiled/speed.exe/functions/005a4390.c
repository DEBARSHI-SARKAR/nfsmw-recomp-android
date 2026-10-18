/* speed.exe 005a4390 FUN_005a4390; analysis pseudocode, not buildable source.
 * calls 00591a00 FUN_00591a00
 * calls 0059ac60 FUN_0059ac60
 * calls 0057e920 FUN_0057e920
 * calls 00591ab0 FUN_00591ab0
 * calls 00586130 FUN_00586130
 * calls 004450c0 FUN_004450c0
 * calls 00585b50 FUN_00585b50
 * calls 0045ecf0 FUN_0045ecf0
 * calls 005848b0 FUN_005848b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a4390(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  float10 fVar5;
  float local_8ec;
  undefined4 local_8e0;
  undefined4 local_8dc;
  undefined4 local_8d8;
  undefined4 local_8d4;
  undefined4 local_8d0;
  undefined4 local_8cc;
  undefined4 local_8c8;
  undefined4 local_8c4;
  undefined4 local_8c0;
  undefined4 local_8bc;
  undefined4 local_8b8;
  undefined4 local_8b4;
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined1 local_8a0 [16];
  undefined1 local_890 [64];
  float local_850 [16];
  undefined1 local_810 [2060];
  
  iVar3 = FUN_00585b50(*(undefined4 *)(param_1 + 0x24));
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(iVar3 + 8) == 0) {
    return;
  }
  if (param_2 == 0) {
    param_2 = FUN_00591ab0(param_1,*(int *)(iVar3 + 8));
  }
  else {
    FUN_00591a00(param_3);
  }
  local_8ec = 1.0;
  if (((DAT_008f41c0 == 8) || (DAT_008f41c0 == 9)) && (*(int *)(param_1 + 0x24) == -0x6a7c55e6)) {
    local_8ec = 2.0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
    cVar2 = FUN_0057e920(local_810,0x800,*(undefined4 *)(param_1 + 0x60));
    puVar4 = local_810;
    if (cVar2 != '\0') goto LAB_005a4443;
  }
  puVar4 = *(undefined1 **)(param_1 + 100);
LAB_005a4443:
  local_8e0 = 0x3f800000;
  local_8dc = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8d0 = 0;
  local_8cc = 0x3f800000;
  local_8c8 = 0;
  local_8c4 = 0;
  local_8c0 = 0;
  local_8bc = 0;
  local_8b8 = 0x3f800000;
  local_8b4 = 0;
  local_8a4 = 0x3f800000;
  local_8b0 = 0x43a00000;
  local_8ac = 0x43700000;
  local_8a8 = 0;
  FUN_005848b0(uVar1,local_890,local_8a0,*(undefined2 *)(param_1 + 0x20),local_8ec);
  FUN_0045ecf0(local_890,&local_8e0,local_890);
  local_8ec = (float)*(int *)(param_1 + 0x74);
  if (*(int *)(param_1 + 0x74) < 0) {
    local_8ec = local_8ec + _DAT_00891214;
  }
  if (local_8ec == _DAT_00890968) {
    local_8ec = 3.4028235e+38;
  }
  fVar5 = (float10)FUN_00586130(puVar4,0,0,0);
  if (((*(int *)(param_1 + 0x74) != 0) && (local_8ec < (float)fVar5)) &&
     ((*(byte *)(param_1 + 0x6c) & 0x10) == 0)) {
    FUN_004450c0(local_850);
    local_850[0] = local_8ec / (float)fVar5;
    FUN_0045ecf0(local_890,local_890,local_850);
  }
  FUN_0059ac60(local_8a0,puVar4,param_1,local_890,param_2,param_3);
  return;
}

