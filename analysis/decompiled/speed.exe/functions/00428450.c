/* speed.exe 00428450 FUN_00428450; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 0041dad0 FUN_0041dad0
 * calls 005d59f0 FUN_005d59f0
 * calls 006269b0 FUN_006269b0
 * calls 00401ae0 FUN_00401ae0
 * calls 0041da00 FUN_0041da00
 * calls 0041db60 FUN_0041db60
 * calls 0040ed50 FUN_0040ed50
 * calls 004077d0 FUN_004077d0
 * calls 00413ee0 FUN_00413ee0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00428450(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  float10 fVar5;
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  undefined4 local_8;
  uint local_4;
  
  if (((DAT_0091e000 == 0) || (*(int *)(DAT_0091e000 + 0x1968) == 0)) ||
     (*(int *)(DAT_0091e000 + 0x1964) != 2)) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  else {
    local_20 = 0.0;
    if (*(int **)(param_1 + 0x74) != (int *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x74) + 0x50))();
      if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
        puVar3 = (undefined4 *)FUN_00454810(0xb1ece070,0);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)FUN_006269b0(4);
        }
        local_20 = (float)*puVar3;
      }
    }
    local_10 = 0.0;
    local_c = 0.0;
    local_8 = 0;
    local_4 = local_4 & 0xffffff00;
    FUN_0041da00(&local_10,DAT_0092cd7c,DAT_0092cd7c + DAT_0092cd84 * 4,0,0,0,local_4);
    if ((char)local_4 != '\0') {
      fVar5 = (float10)FUN_00401ae0(local_20,local_8,0x3f800000);
      *(float *)(param_1 + 0x88) = (float)fVar5;
      fVar5 = (float10)FUN_00401ae0(local_20,local_c,0x3f800000);
      *(float *)(param_1 + 0x84) = (float)fVar5;
      fVar5 = (float10)FUN_00401ae0(local_20,local_10,0x3f800000);
      *(float *)(param_1 + 0x80) = (float)fVar5;
    }
  }
  FUN_00413ee0(*(undefined4 *)(param_1 + 0x3c));
  FUN_0041dad0(&local_1c,DAT_0092cd7c,DAT_0092cd7c + DAT_0092cd84 * 4,local_10,local_c,local_8);
  *(float *)(param_1 + 0x98) = (local_10 - local_1c) * *(float *)(param_1 + 0x84) + local_1c;
  *(float *)(param_1 + 0x9c) = (local_c - local_18) * *(float *)(param_1 + 0x84) + local_18;
  FUN_004077d0(*(undefined4 *)(param_1 + 0x3c));
  FUN_0040ed50(&local_10,DAT_0092cd7c,DAT_0092cd7c + DAT_0092cd84 * 4,local_1c,local_18);
  fVar1 = (local_1c - local_10) * *(float *)(param_1 + 0x88) + local_10;
  *(float *)(param_1 + 0x8c) = fVar1;
  if ((*(char *)(param_1 + 100) == '\0') && (*(char *)(param_1 + 0x66) == '\0')) {
    if ((local_18 <= _DAT_00890518) || (fVar1 <= _DAT_00890968)) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    else {
      *(float *)(param_1 + 0x94) = local_18;
      *(float *)(param_1 + 0x90) = (local_c / local_18) * (fVar1 / local_1c);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
    *(float *)(param_1 + 0x94) = local_18;
  }
  local_20 = 0.0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    piVar4 = (int *)FUN_005d59f0(&LAB_00403700);
    if (piVar4 != (int *)0x0) {
      fVar5 = (float10)(**(code **)(*piVar4 + 0x74))();
      local_20 = (float)fVar5;
    }
  }
  FUN_0041db60(&local_1c,DAT_0092cd7c,DAT_0092cd7c + DAT_0092cd84 * 4,local_20);
  *(float *)(param_1 + 0xa0) = (local_20 - local_1c) * *(float *)(param_1 + 0x80) + local_1c;
  return;
}

