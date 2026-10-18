/* speed.exe 004ecf40 FUN_004ecf40; analysis pseudocode, not buildable source.
 * calls 004da510 FUN_004da510
 * calls 004da470 FUN_004da470
 * calls 004e66b0 FUN_004e66b0
 * calls 004da2f0 FUN_004da2f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ecf40(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  float10 fVar3;
  
  if (*(char *)(param_1 + 8) != '\0') {
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x30) + 0x4c))();
    if (fVar3 <= (float10)_DAT_008efa64) {
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
    else {
      fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x30) + 0x4c))();
      *(float *)(param_1 + 0xfc) = (float)(fVar3 * (float10)_DAT_00890dc4);
    }
    FUN_004e66b0(param_2);
    FUN_004da510(param_2);
    iVar1 = *(int *)(param_1 + 0xf8);
    if (iVar1 == 0) {
      fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x30) + 0x4c))();
      if ((float10)_DAT_008efa64 < fVar3) {
        *(undefined4 *)(param_1 + 0xf8) = 1;
      }
    }
    else if (iVar1 == 1) {
      fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x30) + 0x4c))();
      if (fVar3 < (float10)_DAT_008efa64) {
        *(undefined4 *)(param_1 + 0xf8) = 2;
        FUN_004da2f0(0,0,0,0,*(undefined4 *)(*(int *)(param_1 + 0x18) + 0xcc));
        *(undefined4 *)(param_1 + 0x6c) = 0;
        FUN_004da510(param_2);
        return;
      }
    }
    else if ((iVar1 == 2) && (cVar2 = FUN_004da470(), cVar2 != '\0')) {
      *(undefined4 *)(param_1 + 0xf8) = 0;
      return;
    }
  }
  return;
}

