/* speed.exe 005fcea0 FUN_005fcea0; analysis pseudocode, not buildable source.
 * calls 00722840 FUN_00722840
 * calls 005fad10 FUN_005fad10
 * calls 005d9a10 FUN_005d9a10
 * calls 005fa780 FUN_005fa780
 * calls 005faf10 FUN_005faf10
 * calls 005faf70 FUN_005faf70
 * calls 00567510 FUN_00567510
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005fcea0(undefined4 *param_1,float *param_2,float *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  float *pfVar4;
  undefined4 uVar5;
  uint uVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [2];
  float local_4;
  
  if (param_1[1] != 0) {
    *param_2 = (float)*(byte *)(param_1[1] + 0x2c) * _DAT_00899dd0;
    param_2[1] = (float)*(byte *)(param_1[1] + 0x2d) * _DAT_00899dd0;
    *param_3 = (float)*(byte *)(param_1[1] + 0x2e) * _DAT_00899dd0;
    param_3[1] = (float)*(byte *)(param_1[1] + 0x2f) * _DAT_00899dd0;
    return;
  }
  piVar1 = (int *)param_1[3];
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = (int *)param_1[4];
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  FUN_005fad10(local_c);
  local_3c = -local_c[0];
  local_40 = local_4;
  local_38 = local_4;
  local_34 = local_3c;
  cVar2 = FUN_005faf10();
  if (cVar2 != '\0') {
    FUN_005faf70(local_c);
    pfVar4 = &local_4;
    if (local_40 <= local_4) {
      pfVar4 = &local_40;
    }
    local_40 = *pfVar4;
    pfVar4 = &local_4;
    if (local_4 <= local_38) {
      pfVar4 = &local_38;
    }
    local_30 = -local_c[0];
    local_38 = *pfVar4;
    pfVar4 = &local_30;
    if (local_3c <= local_30) {
      pfVar4 = &local_3c;
    }
    local_3c = *pfVar4;
    pfVar4 = &local_30;
    if (local_30 <= local_34) {
      pfVar4 = &local_34;
    }
    local_34 = *pfVar4;
  }
  uVar6 = 0;
  while( true ) {
    piVar1 = (int *)param_1[3];
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_005fa780(piVar1);
    }
    piVar1 = (int *)param_1[4];
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_005fa780(piVar1);
    }
    uVar3 = FUN_005d9a10();
    if (uVar3 <= uVar6) break;
    (**(code **)*param_1)(uVar6,local_c);
    pfVar4 = &local_4;
    if (local_40 <= local_4) {
      pfVar4 = &local_40;
    }
    local_40 = *pfVar4;
    pfVar4 = &local_4;
    if (local_4 <= local_38) {
      pfVar4 = &local_38;
    }
    local_30 = -local_c[0];
    local_38 = *pfVar4;
    pfVar4 = &local_30;
    if (local_3c <= local_30) {
      pfVar4 = &local_3c;
    }
    local_3c = *pfVar4;
    pfVar4 = &local_30;
    if (local_30 <= local_34) {
      pfVar4 = &local_34;
    }
    local_34 = *pfVar4;
    uVar6 = uVar6 + 1;
  }
  uVar5 = FUN_00722840(2000);
  local_28 = local_3c;
  local_24 = local_38;
  local_2c = local_40;
  local_20 = local_34;
  FUN_00567510(&local_2c,&local_1c,uVar5);
  FUN_00567510(&local_24,&local_14,uVar5);
  *param_2 = local_1c;
  param_2[1] = local_18;
  *param_3 = local_14;
  param_3[1] = local_10;
  return;
}

