/* speed.exe 0069d4d0 FUN_0069d4d0; analysis pseudocode, not buildable source.
 * calls 00401670 FUN_00401670
 * calls 005cb5d0 FUN_005cb5d0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069d4d0(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined2 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
  *(undefined4 *)(param_3 + 0xc0) = param_2;
  *(undefined4 *)(param_3 + 0xc4) = 0;
  uVar6 = (**(code **)(*piVar5 + 0x54))();
  *(undefined4 *)(param_3 + 0xd8) = uVar6;
  puVar7 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x54) + 0x70))();
  *(undefined4 *)(param_3 + 0xa0) = *puVar7;
  *(undefined4 *)(param_3 + 0xa4) = puVar7[1];
  *(undefined4 *)(param_3 + 0xa8) = puVar7[2];
  puVar7 = (undefined4 *)(**(code **)(*piVar5 + 0x48))(&uStack_10);
  *(undefined4 *)(param_3 + 0x80) = *puVar7;
  *(undefined4 *)(param_3 + 0x84) = puVar7[1];
  *(undefined4 *)(param_3 + 0x88) = puVar7[2];
  (**(code **)(*piVar5 + 0x40))(param_3);
  puVar7 = (undefined4 *)(**(code **)(*piVar5 + 0x20))();
  uVar6 = puVar7[1];
  uStack_10 = puVar7[2];
  *(undefined4 *)(param_3 + 0x30) = *puVar7;
  *(undefined4 *)(param_3 + 0x34) = uVar6;
  *(undefined4 *)(param_3 + 0x38) = uStack_10;
  puStack_c = (undefined4 *)0x3f800000;
  *(undefined4 *)(param_3 + 0x3c) = 0x3f800000;
  pfVar8 = (float *)(**(code **)(*piVar5 + 0x24))();
  *(float *)(param_3 + 0x40) = *pfVar8;
  *(float *)(param_3 + 0x44) = pfVar8[1];
  *(float *)(param_3 + 0x48) = pfVar8[2];
  *(float *)(param_3 + 0x50) = *pfVar8;
  *(float *)(param_3 + 0x54) = pfVar8[1];
  *(float *)(param_3 + 0x58) = pfVar8[2];
  (**(code **)(*piVar5 + 0xa4))(param_3 + 0x40,0);
  puStack_c = (undefined4 *)(**(code **)(*piVar5 + 0x28))();
  *(undefined4 *)(param_3 + 0x60) = *puStack_c;
  *(undefined4 *)(param_3 + 100) = puStack_c[1];
  *(undefined4 *)(param_3 + 0x68) = puStack_c[2];
  *(undefined4 *)(param_3 + 0x90) = *puStack_c;
  *(undefined4 *)(param_3 + 0x94) = puStack_c[1];
  *(undefined4 *)(param_3 + 0x98) = puStack_c[2];
  (**(code **)(*piVar5 + 0xa4))(param_3 + 0x90,0);
  fVar1 = *(float *)(param_3 + 0x50);
  fVar12 = (float10)FUN_005c5e80(*(float *)(param_3 + 0x58) * *(float *)(param_3 + 0x58) +
                                 *(float *)(param_3 + 0x54) * *(float *)(param_3 + 0x54) +
                                 fVar1 * fVar1);
  *(float *)(param_3 + 0xbc) = (float)fVar12;
  if (_DAT_0089096c <= *(float *)(param_3 + 0x48)) {
    uStack_10 = *(undefined4 *)(param_3 + 0x40);
    fVar12 = (float10)FUN_005cb5d0(uStack_10,*(undefined4 *)(param_3 + 0x48));
    *(float *)(param_3 + 0x9c) = (float)fVar12;
  }
  else {
    *(undefined4 *)(param_3 + 0x9c) = 0;
  }
  iVar9 = (**(code **)(**(int **)(param_1 + 0x58) + 8))();
  fVar1 = *(float *)(iVar9 + 0x14);
  fVar2 = _DAT_0089096c;
  if ((fVar1 < _DAT_0089096c) && (fVar2 = fVar1, fVar1 < _DAT_00890968)) {
    fVar2 = _DAT_00890968;
  }
  *(float *)(param_3 + 0x4c) = fVar2;
  fVar1 = *(float *)(iVar9 + 0x18);
  fVar2 = _DAT_0089096c;
  if ((fVar1 < _DAT_0089096c) && (fVar2 = fVar1, fVar1 < _DAT_00890968)) {
    fVar2 = _DAT_00890968;
  }
  *(float *)(param_3 + 0x5c) = fVar2;
  *(undefined4 *)(param_3 + 0x7c) = *(undefined4 *)(iVar9 + 0x1c);
  fVar1 = *(float *)(iVar9 + 4);
  fVar2 = _DAT_0089096c;
  if ((fVar1 < _DAT_0089096c) && (fVar2 = fVar1, fVar1 < _DAT_008aac20)) {
    fVar2 = _DAT_008aac20;
  }
  *(float *)(param_3 + 0x8c) = fVar2;
  puVar7 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x54) + 0x3c))();
  *(undefined4 *)(param_3 + 0x70) = *puVar7;
  *(undefined4 *)(param_3 + 0x74) = puVar7[1];
  *(undefined4 *)(param_3 + 0x78) = puVar7[2];
  iVar9 = (**(code **)(*(int *)(param_1 + 0x4c) + 0x4c))();
  *(float *)(param_3 + 0x6c) = (float)iVar9 * _DAT_008910f0;
  fVar12 = (float10)(**(code **)(*piVar5 + 0x18))();
  *(float *)(param_3 + 0xac) = (float)fVar12;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x48) + 0x30))();
  *(undefined2 *)(param_3 + 200) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x48) + 0x58))();
  *(undefined2 *)(param_3 + 0xca) = uVar4;
  cVar3 = (**(code **)(**(int **)(param_1 + 0x48) + 0x20))();
  if (cVar3 != '\0') {
    *(uint *)(param_3 + 0xc4) = *(uint *)(param_3 + 0xc4) | 1;
  }
  if (*(int **)(param_1 + 0x5c) == (int *)0x0) {
    *(undefined4 *)(param_3 + 0xd0) = 0x3f800000;
  }
  else {
    fVar12 = (float10)(**(code **)(**(int **)(param_1 + 0x5c) + 0x28))();
    *(float *)(param_3 + 0xd0) = (float)fVar12;
  }
  if (*(int **)(param_1 + 0x60) == (int *)0x0) {
    *(undefined2 *)(param_3 + 0xcc) = 1;
  }
  else {
    uVar4 = (**(code **)(**(int **)(param_1 + 0x60) + 4))();
    *(undefined2 *)(param_3 + 0xcc) = uVar4;
  }
  if (*(int **)(param_1 + 100) == (int *)0x0) {
    *(undefined4 *)(param_3 + 0xd4) = 0x3f800000;
  }
  else {
    fVar12 = (float10)(**(code **)(**(int **)(param_1 + 100) + 4))();
    *(float *)(param_3 + 0xd4) = (float)fVar12;
  }
  if (((*(int **)(param_1 + 0x68) != (int *)0x0) &&
      (cVar3 = (**(code **)(**(int **)(param_1 + 0x68) + 4))(), cVar3 != '\0')) ||
     (cVar3 = (**(code **)(**(int **)(param_1 + 0x48) + 0x7c))(), cVar3 != '\0')) {
    *(undefined4 *)(param_3 + 0x5c) = 0x3f800000;
    *(undefined4 *)(param_3 + 0x4c) = 0;
    *(undefined4 *)(param_3 + 0x7c) = 0x3f800000;
  }
  FUN_00401670(param_3 + 0x70,param_3,param_3 + 0xb0);
  uVar11 = 0;
  *(undefined2 *)(param_3 + 0xce) = 0;
  if ((*(int *)(param_1 + 0x6c) != 0) &&
     (uVar10 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))(), uVar10 != 0)) {
    do {
      iVar9 = (**(code **)(**(int **)(param_1 + 0x6c) + 4))(uVar11);
      if (iVar9 == 2) {
        *(ushort *)(param_3 + 0xce) =
             *(ushort *)(param_3 + 0xce) | (ushort)(1 << ((byte)uVar11 & 0x1f));
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar10);
  }
  cVar3 = (**(code **)(**(int **)(param_1 + 0x48) + 0x7c))();
  if (cVar3 != '\0') {
    *(uint *)(param_3 + 0xc4) = *(uint *)(param_3 + 0xc4) | 2;
  }
  return;
}

