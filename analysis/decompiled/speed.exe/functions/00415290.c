/* speed.exe 00415290 FUN_00415290; analysis pseudocode, not buildable source.
 * calls 00401870 FUN_00401870
 * calls 0040fe20 FUN_0040fe20
 * calls 004106d0 FUN_004106d0
 * calls 007c44e0 FUN_007c44e0
 * calls 00776600 FUN_00776600
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00415290(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 auStack_14 [4];
  float fStack_10;
  
  if (((*(byte *)(param_1 + 0xcc) & 1) != 0) && (*(int **)(param_1 + 0xe0) != (int *)0x0)) {
    uVar13 = 0;
    (**(code **)(**(int **)(param_1 + 0xe0) + 0x14))(0);
    uVar12 = 0;
    (**(code **)(**(int **)(param_1 + 0xe0) + 0x2c))(0);
    piVar1 = (int *)(param_1 + 0x4c);
    piVar6 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 4))();
    piVar6 = (int *)(**(code **)(*piVar6 + 0x54))();
    fVar10 = (float10)(**(code **)(*piVar6 + 0x30))();
    if ((*(float *)(param_1 + 0x84) != _DAT_00890968) || ((float10)_DAT_0089096c <= fVar10)) {
      piVar6 = (int *)(**(code **)(*piVar1 + 8))();
      iVar7 = (**(code **)(*piVar6 + 0x58))();
      if (iVar7 == 1) {
        (**(code **)(*piVar1 + 0x48))();
        FUN_00776600(1);
        iVar7 = *piVar1;
        uVar8 = FUN_004106d0();
        (**(code **)(iVar7 + 0x3c))(uVar8);
      }
      pfVar9 = (float *)(**(code **)(**(int **)(param_1 + 0xd0) + 4))();
      fStack_20 = *(float *)(param_1 + 0x88) - *pfVar9;
      fStack_1c = 0.0;
      fStack_18 = *(float *)(param_1 + 0x90) - pfVar9[2];
      FUN_0040fe20(&fStack_20,&fStack_20);
      iVar7 = (**(code **)(**(int **)(param_1 + 0xd0) + 0xa4))();
      fVar15 = *(float *)(iVar7 + 0x20);
      fVar2 = *(float *)(iVar7 + 0x28);
      FUN_0040fe20(&stack0xffffffd4,&stack0xffffffd4);
      FUN_00401870(&stack0xffffffd4,&fStack_20,auStack_14);
      fVar14 = _DAT_0089096c;
      if ((fStack_10 < _DAT_0089096c) && (fVar14 = fStack_10, fStack_10 < _DAT_00890da8)) {
        fVar14 = -1.0;
      }
      piVar1 = *(int **)(param_1 + 0xd8);
      fVar10 = (float10)FUN_007c44e0(uVar12,uVar13,fVar14);
      fVar14 = (float)fVar10;
      fVar11 = (float10)(**(code **)(*piVar1 + 0x6c))();
      fVar10 = (float10)_DAT_00890510;
      *(undefined1 *)(param_1 + 0xa8) = 0;
      fVar14 = (float)((float10)fVar14 / (fVar11 * fVar10));
      if ((*(int **)(param_1 + 0xd4) == (int *)0x0) ||
         (cVar5 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x14))(), cVar5 == '\0')) {
        fVar4 = _DAT_00890da8;
        fVar3 = _DAT_0089096c;
        if (_DAT_00890dcc <= fStack_1c * 0.0 + fVar15 * fStack_20 + fVar2 * fStack_18) {
          (**(code **)(**(int **)(param_1 + 0xe0) + 8))();
        }
        else if (_DAT_00890968 <= fVar14) {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          fVar14 = fVar3;
        }
        else {
          *(undefined1 *)(param_1 + 0xa8) = 1;
          fVar14 = fVar4;
        }
      }
      else {
        fVar14 = fVar14 * _DAT_00890da8;
      }
      fVar15 = _DAT_0089096c;
      if ((fVar14 < _DAT_0089096c) && (fVar15 = fVar14, fVar14 < _DAT_00890da8)) {
        fVar15 = -1.0;
      }
      (**(code **)(**(int **)(param_1 + 0xe0) + 0x14))(fVar15);
    }
  }
  return;
}

