/* speed.exe 00510b00 FUN_00510b00; analysis pseudocode, not buildable source.
 * calls 006515d0 FUN_006515d0
 * calls 005b7ee0 FUN_005b7ee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00510b00(int param_1)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_006515d0(&local_18);
    FUN_006515d0(&local_20);
    fVar4 = local_20 - local_18 * _DAT_008933d4;
    fVar5 = local_1c - local_14 * _DAT_008933d4;
    local_8 = ((local_18 * _DAT_008933d4 + local_20) - fVar4) * _DAT_008933d4;
    local_4 = ((local_14 * _DAT_008933d4 + local_1c) - fVar5) * _DAT_008933d4;
    fVar3 = local_4;
    if (local_4 < local_8) {
      fVar3 = local_8;
    }
    local_8 = local_8 + fVar4;
    iVar2 = *(int *)(param_1 + 0x10);
    local_4 = local_4 + fVar5;
    local_10 = local_8 - fVar3;
    local_c = local_4 - fVar3;
    local_8 = local_8 + fVar3;
    local_4 = local_4 + fVar3;
    FUN_005b7ee0(5,&local_10,0);
    puVar1 = (uint *)(iVar2 + 0x1c);
    *puVar1 = *puVar1 | 0x400000;
    iVar2 = *(int *)(param_1 + 0x10);
    FUN_005b7ee0(6,&local_8,0);
    puVar1 = (uint *)(iVar2 + 0x1c);
    *puVar1 = *puVar1 | 0x400000;
  }
  return;
}

