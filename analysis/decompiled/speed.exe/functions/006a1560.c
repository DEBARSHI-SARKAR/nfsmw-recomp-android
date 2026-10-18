/* speed.exe 006a1560 FUN_006a1560; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a1560(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  float local_10;
  
  local_10 = 0.0;
  if (*(int **)(param_1 + 0x80) != (int *)0x0) {
    uVar5 = (**(code **)(**(int **)(param_1 + 0x80) + 8))();
    if (uVar5 != 0) {
      uVar8 = 0;
      do {
        fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x80) + 0x68))(uVar8);
        uVar8 = uVar8 + 1;
        local_10 = (float)(fVar9 + (float10)local_10);
      } while (uVar8 < uVar5);
    }
    fVar2 = (float)(int)uVar5;
    if ((int)uVar5 < 0) {
      fVar2 = fVar2 + _DAT_00891214;
    }
    local_10 = local_10 / fVar2;
    if (local_10 < _DAT_00890968 == (local_10 == _DAT_00890968)) {
      iVar7 = *(int *)(param_1 + 0x8c);
      fVar2 = *(float *)(iVar7 + 0x58) * _DAT_008a9398;
      fVar3 = *(float *)(iVar7 + 0x5c) * _DAT_008a9398;
      if (param_2 == _DAT_00890968) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x14) = 2;
        *(float *)(param_1 + 0x74) = *(float *)(iVar7 + 0x5c) * _DAT_008a9398;
        return;
      }
      if (_DAT_00890968 <= param_2) {
        uVar8 = 2;
        *(undefined4 *)(param_1 + 0x14) = 2;
        uVar5 = FUN_00452940();
        if (2 < uVar5) {
          iVar7 = 0x10;
          do {
            iVar1 = *(int *)(param_1 + 0xa0);
            uVar5 = FUN_00452940();
            if (uVar8 < uVar5) {
              pfVar6 = (float *)(iVar1 + iVar7);
            }
            else {
              pfVar6 = (float *)FUN_006269b0(4);
            }
            fVar4 = *(float *)(*(int *)(param_1 + 0xa0) + 0x80) * *pfVar6;
            if ((_DAT_00890968 < fVar4) && ((fVar2 / fVar4) * local_10 < param_2)) {
              *(uint *)(param_1 + 0x14) = uVar8;
            }
            uVar8 = uVar8 + 1;
            iVar7 = iVar7 + 4;
            uVar5 = FUN_00452940();
          } while (uVar8 < uVar5);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      iVar7 = *(int *)(param_1 + 0xa0);
      uVar5 = *(uint *)(param_1 + 0x14);
      uVar8 = FUN_00452940();
      if (uVar5 < uVar8) {
        pfVar6 = (float *)(iVar7 + 8 + uVar5 * 4);
      }
      else {
        pfVar6 = (float *)FUN_006269b0(4);
      }
      *(float *)(param_1 + 0x74) =
           ((fVar2 - fVar3) / fVar2) *
           *(float *)(*(int *)(param_1 + 0xa0) + 0x80) * *pfVar6 * (param_2 / local_10) + fVar3;
    }
  }
  return;
}

