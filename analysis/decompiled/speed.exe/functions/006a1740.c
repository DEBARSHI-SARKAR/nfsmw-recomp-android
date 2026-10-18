/* speed.exe 006a1740 FUN_006a1740; analysis pseudocode, not buildable source.
 * calls 006a0ef0 FUN_006a0ef0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006a1740(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  byte bVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float local_14;
  float local_10;
  
  iVar8 = *(int *)(param_1 + 0x68);
  if ((iVar8 != 0) && (*(float *)(param_1 + 0x70) <= _DAT_00890968)) {
    fVar5 = *(float *)(param_1 + 200) * _DAT_008a9394;
    if (iVar8 == 1) {
      *(undefined4 *)(param_1 + 0x68) = 2;
      return;
    }
    if (*(float *)(param_1 + 0x70) < _DAT_00890968 != (*(float *)(param_1 + 0x70) == _DAT_00890968))
    {
      fVar1 = *(float *)(param_1 + 0x78 + iVar8 * 4);
      local_10 = *(float *)(param_1 + 0xa4 + (iVar8 + -1) * 4);
      local_14 = 0.0;
      fVar9 = (float10)FUN_006a0ef0(iVar8 + -1);
      iVar8 = *(int *)(param_1 + 0x68);
      if ((iVar8 != 2) && (_DAT_00890968 < (float)fVar9)) {
        fVar2 = *(float *)(param_1 + 0x74 + iVar8 * 4);
        fVar10 = (float10)FUN_006a0ef0(iVar8);
        local_14 = (float)(((float10)fVar2 / (float10)(float)fVar9) * fVar10 -
                          (float10)_DAT_008970cc);
      }
      iVar8 = *(int *)(param_1 + 0x68);
      if (iVar8 < 3) {
        if (_DAT_00895074 <= *(float *)(param_1 + 0x74)) {
          local_10 = 0.0;
        }
        else {
          local_10 = *(float *)(*(int *)(param_1 + 0xe0) + 0x5c) + _DAT_008aac40;
        }
      }
      if (fVar1 <= fVar5) {
        iVar8 = *(int *)(param_1 + 0x68);
        iVar7 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
        if (iVar8 < iVar7) {
          bVar3 = true;
          iVar8 = 0;
          do {
            cVar6 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x24))(iVar8);
            if ((cVar6 == '\0') ||
               (fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0xd4) + 0x30))(iVar8),
               (float10)_DAT_00890e98 <= fVar9)) {
              bVar4 = 0;
            }
            else {
              bVar4 = 1;
            }
            bVar3 = (bool)(bVar3 & bVar4);
            iVar8 = iVar8 + 1;
          } while (iVar8 < 4);
          if (!bVar3) {
            return;
          }
          (**(code **)(*(int *)(param_1 + 0x4c) + 0xc))(*(int *)(param_1 + 0x68) + 1);
          return;
        }
      }
      if (((fVar5 < local_10 != (fVar5 == local_10)) && (1 < iVar8)) &&
         (fVar5 < local_14 != (fVar5 == local_14))) {
        (**(code **)(*(int *)(param_1 + 0x4c) + 0xc))(iVar8 + -1);
      }
    }
  }
  return;
}

