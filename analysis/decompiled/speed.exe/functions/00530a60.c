/* speed.exe 00530a60 FUN_00530a60; analysis pseudocode, not buildable source.
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 00524ee0 FUN_00524ee0
 * calls 00525050 FUN_00525050
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00530a60(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar3 = 0;
  local_18 = (float)DAT_00987f54 - _DAT_00894b40;
  local_24 = 1e+08;
  local_14 = (float)DAT_00987f58 - _DAT_00894b38;
  if (*(int *)(param_1 + 0x154) == 0) goto LAB_00530aae;
  iVar4 = *(int *)(param_1 + 0x154) + -4;
  while( true ) {
    if (param_1 == -0x154) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0x150;
    }
    if (iVar4 == iVar2) break;
    FUN_00524ee0(*(undefined4 *)(iVar4 + 0xc),&local_20,&local_1c);
    fVar1 = SQRT((local_18 - local_20) * (local_18 - local_20) +
                 (local_14 - local_1c) * (local_14 - local_1c));
    if (((*(char *)(iVar4 + 0x34) == '\0') && (fVar1 < *(float *)(param_1 + 0x174))) &&
       (fVar1 < local_24)) {
      local_10 = local_20;
      local_c = local_1c;
      iVar3 = iVar4;
      local_24 = fVar1;
    }
    if (*(int *)(iVar4 + 4) == 0) {
LAB_00530aae:
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 4) + -4;
    }
  }
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x15c) != 0) {
      if (*(int *)(param_1 + 0x124) != 0) {
        iVar3 = FUN_005b1360(0x7efe8ff4);
        if (iVar3 != 0) {
          FUN_005b8400(iVar3,0);
          *(undefined4 *)(iVar3 + 0x10) = 0;
        }
      }
      *(undefined4 *)(param_1 + 0x15c) = 0;
      return 1;
    }
  }
  else {
    FUN_00525050(*(undefined4 *)(param_1 + 0x124),local_10,local_c);
    if (iVar3 != *(int *)(param_1 + 0x15c)) {
      *(int *)(param_1 + 0x15c) = iVar3;
      if (*(int *)(param_1 + 0x124) != 0) {
        iVar3 = FUN_005b1360(0x1cbf71);
        if (iVar3 != 0) {
          FUN_005b8400(iVar3,0);
          *(undefined4 *)(iVar3 + 0x10) = 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

