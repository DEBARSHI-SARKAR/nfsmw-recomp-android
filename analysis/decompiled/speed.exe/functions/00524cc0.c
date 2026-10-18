/* speed.exe 00524cc0 FUN_00524cc0; analysis pseudocode, not buildable source.
 * calls 00591fd0 FUN_00591fd0
 * calls 00585b50 FUN_00585b50
 * calls 005b8190 FUN_005b8190
 * calls 00586210 FUN_00586210
 * calls 00572300 FUN_00572300
 * calls 00572330 FUN_00572330
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00524cc0(int param_1,float param_2,float param_3)

{
  float10 fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    local_18 = *(float *)(iVar2 + 0x1c);
    local_14 = *(float *)(iVar2 + 0x20);
    local_10 = *(undefined4 *)(iVar2 + 0x24);
    local_c = *(float *)(iVar2 + 0x38);
    local_8 = *(float *)(iVar2 + 0x3c);
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 1:
    case 7:
    case 9:
    case 0xc:
      local_18 = local_c * _DAT_008933d4 + param_2;
      local_14 = local_8 * _DAT_008933d4 + param_3;
      FUN_005b8190(&local_18,0);
      return;
    case 2:
      iVar2 = FUN_00585b50(*(undefined4 *)(param_1 + 0x24));
      if (iVar2 != 0) {
        fVar3 = (float10)FUN_00586210(*(undefined4 *)(param_1 + 100),0);
        fVar5 = (float10)local_c;
        fVar4 = (float10)FUN_00591fd0(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x70)
                                      ,0,0,0);
        fVar1 = (float10)local_8;
        fVar5 = (float10)FUN_00572300(*(undefined4 *)(param_1 + 0x6c),(float)(fVar3 * fVar5));
        local_18 = (float)((float10)param_2 - fVar5);
        fVar5 = (float10)FUN_00572330(*(undefined4 *)(param_1 + 0x6c),(float)(fVar4 * fVar1));
        local_14 = (float)((float10)param_3 - fVar5);
        FUN_005b8190(&local_18,0);
        return;
      }
      break;
    default:
      local_18 = param_2;
      local_14 = param_3;
    }
    FUN_005b8190(&local_18,0);
  }
  return;
}

