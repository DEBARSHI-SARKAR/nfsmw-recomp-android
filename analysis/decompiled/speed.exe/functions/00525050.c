/* speed.exe 00525050 FUN_00525050; analysis pseudocode, not buildable source.
 * calls 00591fd0 FUN_00591fd0
 * calls 00585b50 FUN_00585b50
 * calls 005b8190 FUN_005b8190
 * calls 00586210 FUN_00586210
 * calls 00572300 FUN_00572300
 * calls 00572330 FUN_00572330
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00525050(int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    local_c = *(float *)(iVar3 + 0x1c);
    local_8 = *(float *)(iVar3 + 0x20);
    local_4 = *(undefined4 *)(iVar3 + 0x24);
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 1:
    case 7:
    case 9:
    case 0xc:
      local_8 = param_3;
      local_c = param_2;
      FUN_005b8190(&local_c,0);
      return;
    case 2:
      iVar4 = FUN_00585b50(*(undefined4 *)(param_1 + 0x24));
      if (iVar4 != 0) {
        fVar5 = (float10)FUN_00586210(*(undefined4 *)(param_1 + 100),0);
        fVar1 = (float)(fVar5 * (float10)*(float *)(iVar3 + 0x38));
        fVar5 = (float10)FUN_00591fd0(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x70)
                                      ,0,0,0);
        fVar2 = (float)(fVar5 * (float10)*(float *)(iVar3 + 0x3c));
        fVar5 = (float10)FUN_00572300(*(undefined4 *)(param_1 + 0x6c),fVar1);
        local_c = (float)((float10)param_2 - ((float10)fVar1 * (float10)_DAT_008933d4 + fVar5));
        fVar5 = (float10)FUN_00572330(*(undefined4 *)(param_1 + 0x6c),fVar2);
        local_8 = (float)((float10)param_3 - ((float10)fVar2 * (float10)_DAT_008933d4 + fVar5));
        FUN_005b8190(&local_c,0);
        return;
      }
      break;
    default:
      local_c = param_2;
      local_8 = param_3;
    }
    FUN_005b8190(&local_c,0);
  }
  return;
}

