/* speed.exe 00669230 FUN_00669230; analysis pseudocode, not buildable source.
 * calls 005cb5d0 FUN_005cb5d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00669230(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int *piVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  
  piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x2c) + 0x54))();
  if ((piVar3 != (int *)0x0) && (*(int *)(param_1 + 0xec) != 0)) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x24))();
    puVar1 = (undefined4 *)(param_1 + 0x134);
    *puVar1 = *puVar4;
    *(undefined4 *)(param_1 + 0x138) = puVar4[1];
    *(undefined4 *)(param_1 + 0x13c) = puVar4[2];
    (**(code **)(*piVar3 + 0xa4))(puVar1,0);
    fVar2 = *(float *)(param_1 + 0x13c);
    if (fVar2 < _DAT_00890968) {
      fVar2 = -fVar2;
    }
    fVar7 = (float10)FUN_005cb5d0(*puVar1,fVar2);
    *(float *)(param_1 + 300) = (float)fVar7;
    fVar7 = (float10)(**(code **)(*piVar3 + 0x2c))();
    *(float *)(param_1 + 0x11c) = (float)fVar7;
    pfVar5 = (float *)(**(code **)(*piVar3 + 0x24))();
    pfVar6 = (float *)(**(code **)(**(int **)(param_1 + 0xec) + 0x98))();
    if (*pfVar5 * *pfVar6 + pfVar6[1] * pfVar5[1] + pfVar6[2] * pfVar5[2] < _DAT_00890968) {
      *(float *)(param_1 + 0x11c) = -*(float *)(param_1 + 0x11c);
    }
    fVar2 = *(float *)(param_1 + 0x11c);
    if (fVar2 < _DAT_00890968) {
      fVar2 = -fVar2;
    }
    *(float *)(param_1 + 0x120) = fVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  return;
}

