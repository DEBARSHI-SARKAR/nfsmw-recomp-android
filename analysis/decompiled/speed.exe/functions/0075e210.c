/* speed.exe 0075e210 FUN_0075e210; analysis pseudocode, not buildable source.
 * calls 0073fb50 FUN_0073fb50
 * calls 00734b60 FUN_00734b60
 * calls 007407c0 FUN_007407c0
 * calls 0075dc50 FUN_0075dc50
 * calls 005d59f0 FUN_005d59f0
 * calls 007349b0 FUN_007349b0
 * calls 0075e210 FUN_0075e210
 * calls 00734b90 FUN_00734b90
 * calls 00760a50 FUN_00760a50
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls 0074d430 FUN_0074d430
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00740c90 FUN_00740c90
 * calls 005d51f0 FUN_005d51f0
 * calls 00740a30 FUN_00740a30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0075e210(int param_1,int param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 auStack_4 [4];
  
  if (param_2 == 0) {
    return;
  }
  if (((*(float *)(param_1 + 0xf94) == _DAT_00890968) &&
      (piVar5 = (int *)FUN_005d59f0(&LAB_004039c0), piVar5 != (int *)0x0)) &&
     (cVar4 = (**(code **)(*piVar5 + 0x40))(), cVar4 != '\0')) {
    *(float *)(param_1 + 0xf94) = param_4 + _DAT_00895074;
  }
  FUN_007ec1bd();
  iVar9 = *(int *)(param_1 + 0xf8c);
  puVar11 = (undefined4 *)(iVar9 * 0x74 + param_1);
  if (((*(char *)(param_1 + 3999) != '\0') || (*(float *)(param_1 + 0xf94) <= _DAT_00890968)) ||
     (((*(byte *)((int)puVar11 + 0x73) & 4) != 0 &&
      ((float)puVar11[0x1b] < *(float *)(param_1 + 0xf94) ==
       ((float)puVar11[0x1b] == *(float *)(param_1 + 0xf94)))))) {
    FUN_00740a30(param_4);
    *(undefined4 *)(param_1 + 0xf94) = 0;
  }
  else {
    FUN_007407c0(param_2,*(undefined4 *)(param_1 + 0xf94));
  }
  uVar10 = iVar9 + 1;
  puVar12 = (undefined4 *)(param_1 + 0xef4);
  for (iVar9 = 0x1d; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  uVar10 = (0x1f < (int)uVar10) - 1 & uVar10;
  if (uVar10 != *(uint *)(param_1 + 0xf88)) {
    do {
      fVar1 = *(float *)(uVar10 * 0x74 + 0x6c + param_1);
      if (fVar1 < *(float *)(param_1 + 0xf94) == (fVar1 == *(float *)(param_1 + 0xf94))) {
        FUN_00740a30(param_4);
        cVar4 = FUN_007349b0(param_1 + 0xef4,param_3);
        if (cVar4 != '\0') goto LAB_0075e33b;
      }
      else {
LAB_0075e33b:
        *(uint *)(param_1 + 0xf8c) = uVar10;
      }
      uVar10 = uVar10 + 1 & (0x1f < (int)(uVar10 + 1)) - 1;
    } while (uVar10 != *(uint *)(param_1 + 0xf88));
  }
  piVar5 = (int *)FUN_005d59f0(&LAB_004040e0);
  if (piVar5 == (int *)0x0) goto LAB_0075e50d;
  bVar2 = _DAT_008b2c0c <= param_4 - *(float *)(param_1 + 0xf80);
  fVar1 = param_4 - *(float *)(param_1 + 0xeec);
  if (fVar1 < _DAT_00890968) {
    fVar1 = -fVar1;
  }
  if (_DAT_008b2c0c <= fVar1 + fVar1) {
    iVar9 = (**(code **)(*piVar5 + 0x38))();
    if (iVar9 != 0) {
      (**(code **)(*piVar5 + 0x34))(0);
    }
    *(undefined1 *)(param_1 + 0xf9e) = 0;
LAB_0075e403:
    *(undefined1 *)(param_1 + 0xf9c) = 0;
  }
  else {
    iVar9 = (**(code **)(*piVar5 + 0x38))();
    if (iVar9 == 1) {
      cVar4 = (**(code **)(*piVar5 + 0xc4))();
      if ((cVar4 != '\0') || (bVar2)) goto LAB_0075e403;
    }
    else {
      *(undefined1 *)(param_1 + 0xf9c) = 1;
    }
  }
  bVar3 = false;
  if (*(char *)(param_1 + 4000) != '\0') {
    piVar6 = (int *)FUN_005d59f0(&LAB_00403770);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x10))(0);
    }
    *(undefined1 *)(param_1 + 4000) = 0;
    bVar3 = true;
  }
  if (*(char *)(param_1 + 0xf9c) == '\0') {
    iVar9 = (**(code **)(*piVar5 + 0x38))();
    if (iVar9 == 1) {
      (**(code **)(*piVar5 + 0x34))(2);
      bVar3 = false;
    }
  }
  else {
    iVar9 = (**(code **)(*piVar5 + 0x38))();
    if (iVar9 == 0) {
      cVar4 = FUN_00734b90();
    }
    else {
      cVar4 = (**(code **)(*piVar5 + 0xc4))();
      cVar4 = '\x01' - (cVar4 != '\0');
    }
    iVar9 = (**(code **)(*piVar5 + 0x38))();
    if (((iVar9 == 1) || (cVar4 == '\0')) || (bVar2)) {
      if (*(char *)(param_1 + 3999) != '\0') {
        bVar3 = true;
      }
    }
    else {
      (**(code **)(*piVar5 + 0x34))(1);
      bVar3 = true;
    }
  }
  uVar7 = (**(code **)(*piVar5 + 0x38))();
  *(undefined4 *)(param_1 + 0xf84) = uVar7;
  if (bVar3) {
    FUN_00734b60(piVar5);
  }
  cVar4 = (**(code **)(*piVar5 + 0x88))();
  if ((cVar4 != '\0') && (*(char *)(param_1 + 4000) == '\0')) {
    FUN_00740c90(param_2);
  }
LAB_0075e50d:
  if (*(int *)(param_1 + 0xf6c) != 0) {
    piVar5 = *(int **)(*(int *)(param_1 + 0xf6c) + 4);
    piVar6 = (int *)*piVar5;
    while (piVar6 != piVar5) {
      FUN_0073fb50();
      iVar9 = piVar6[3];
      if ((&DAT_009b08a8)[iVar9] == 0) {
        piVar5 = (int *)FUN_0074d430(*(undefined4 *)(piVar6[4] + 0xf68));
        if (piVar5 != (int *)0x0) {
          (&DAT_009b08a8)[iVar9] = piVar5[2];
LAB_0075e592:
          if (piVar5 == (int *)0x0) goto LAB_0075e596;
          goto LAB_0075e5b7;
        }
      }
      else {
        iVar8 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,(&DAT_009b08a8)[iVar9]);
        if (iVar8 != 0) {
          piVar5 = *(int **)(iVar8 + 4);
          goto LAB_0075e592;
        }
LAB_0075e596:
        piVar5 = (int *)FUN_0074d430(*(undefined4 *)(piVar6[4] + 0xf68));
        (&DAT_009b08a8)[iVar9] = piVar5[2];
LAB_0075e5b7:
        FUN_0075e210(piVar5,param_3,param_4);
        if (*(float *)(piVar6[4] + 0xeec) < *(float *)(param_1 + 0xeec)) {
          (**(code **)(*piVar5 + 8))();
          (&DAT_009b08a8)[iVar9] = 0;
          iVar9 = piVar6[4];
          if (iVar9 != 0) {
            FUN_00760a50();
            thunk_FUN_007c7250(iVar9);
          }
          FUN_0075dc50(auStack_4,piVar6);
        }
      }
      piVar5 = *(int **)(*(int *)(param_1 + 0xf6c) + 4);
    }
  }
  FUN_007ec1c8();
  return;
}

