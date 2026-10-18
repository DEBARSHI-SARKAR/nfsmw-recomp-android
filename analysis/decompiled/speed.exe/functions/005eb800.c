/* speed.exe 005eb800 FUN_005eb800; analysis pseudocode, not buildable source.
 * calls 00410220 FUN_00410220
 * calls 004790e0 FUN_004790e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005eb800(int param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((*(char *)(param_1 + 0x4c) == '\x04') || (*(char *)(param_1 + 0x4c) == '\x05')) {
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x6c) + 0x60))();
    if ((float10)_DAT_008933d4 <= fVar6) {
      if (DAT_0092cf64 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)*DAT_0092cf5c;
      }
      iVar5 = 0;
      if (0 < DAT_0092cf64) {
        do {
          piVar1 = (int *)(**(code **)(*piVar4 + 4))();
          iVar2 = (**(code **)(*piVar4 + 0x58))();
          if (((iVar2 == 0) && (piVar1 != (int *)0x0)) &&
             (piVar1 = (int *)(**(code **)(*piVar1 + 0x54))(), piVar1 != (int *)0x0)) {
            pfVar3 = (float *)(**(code **)(**(int **)(param_1 + 0x6c) + 0xc))();
            fStack_24 = *pfVar3;
            fStack_20 = pfVar3[1];
            fStack_1c = pfVar3[2];
            pfVar3 = (float *)(**(code **)(*piVar4 + 0xc))();
            fStack_18 = *pfVar3;
            fStack_14 = pfVar3[1];
            fStack_10 = pfVar3[2];
            fStack_30 = fStack_24 - fStack_18;
            fStack_2c = fStack_20 - fStack_14;
            fStack_28 = fStack_1c - fStack_10;
            fVar6 = (float10)FUN_00410220(&fStack_30);
            if (fVar6 < (float10)_DAT_008a3720) {
              return 0;
            }
            (**(code **)(*piVar1 + 0x34))(&fStack_c);
            if (_DAT_00890968 <= fStack_30 * fStack_c + fStack_8 * fStack_2c + fStack_4 * fStack_28)
            {
              return 0;
            }
          }
          piVar4 = (int *)FUN_004790e0(6);
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_0092cf64);
      }
      return 1;
    }
  }
  return 0;
}

