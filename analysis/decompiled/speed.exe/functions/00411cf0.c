/* speed.exe 00411cf0 FUN_00411cf0; analysis pseudocode, not buildable source.
 * calls 00401ae0 FUN_00401ae0
 * calls 0040fe20 FUN_0040fe20
 * calls 00411820 FUN_00411820
 * calls 00410220 FUN_00410220
 * calls 00411a70 FUN_00411a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00411cf0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  undefined4 unaff_retaddr;
  float fVar7;
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
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
  fVar6 = (float10)(**(code **)(*piVar3 + 0x2c))();
  fVar7 = (float)fVar6;
  fVar6 = (float10)FUN_00401ae0(fVar7,0,0x41c80000);
  fStack_28 = (float)fVar6;
  if ((*(char *)(iVar2 + 0x55) != '\0') && (*(int *)(iVar2 + 0x5c) != 0)) {
    fStack_28 = 1.0;
  }
  fVar6 = (float10)(**(code **)(*piVar3 + 0x14))();
  iVar5 = *(int *)(param_1 + 0xb4);
  fVar1 = (float)((float10)fStack_28 * (float10)_DAT_00890560 + (float10)_DAT_00890bf8 +
                  (float10)(fVar7 * param_2) + fVar6);
  if (iVar5 == 0) {
    (**(code **)(*piVar3 + 0x20))();
  }
  else if (iVar5 == 1) {
    FUN_0040fe20(iVar2 + 0xbc,&fStack_c);
    pfVar4 = (float *)(**(code **)(*piVar3 + 0x20))();
    fStack_24 = *pfVar4 - *(float *)(iVar2 + 0x98);
    fStack_20 = pfVar4[1] - *(float *)(iVar2 + 0x9c);
    fStack_1c = pfVar4[2] - *(float *)(iVar2 + 0xa0);
    fStack_18 = fStack_24;
    fStack_14 = fStack_20;
    fStack_10 = fStack_1c;
    FUN_00410220(&fStack_24);
    if (-(fVar7 * param_2) * _DAT_00890634 <
        fStack_24 * fStack_c + fStack_8 * fStack_20 + fStack_4 * fStack_1c) {
      *(undefined4 *)(param_1 + 0xb4) = 2;
    }
  }
  else if (iVar5 == 2) {
    (**(code **)(*piVar3 + 0x20))();
    *(undefined4 *)(param_1 + 0xb4) = 0;
    (**(code **)(**(int **)(param_1 + 0x40) + 0x50))(1);
  }
  FUN_00411a70(fVar1);
  (**(code **)(**(int **)(param_1 + 0x40) + 0x70))(fVar1);
  fVar6 = (float10)FUN_00411820(fVar7,unaff_retaddr);
  fVar7 = (float)fVar6;
  iVar5 = **(int **)(param_1 + 0x40);
  if (*(char *)(iVar2 + 0x50) == '\0') {
    fVar7 = 0.0;
  }
  else {
    (**(code **)(iVar5 + 0x3c))(param_1 + 0x9c);
    iVar5 = **(int **)(param_1 + 0x40);
  }
  (**(code **)(iVar5 + 0x38))(fVar7);
  if (*(int *)(param_1 + 0xac) == 1) {
    fVar7 = *(float *)(param_1 + 0xb0) - _DAT_0089096c;
    *(float *)(param_1 + 0xb0) = fVar7;
    if (fVar7 < _DAT_00890968 != (fVar7 == _DAT_00890968)) {
      *(undefined4 *)(param_1 + 0xac) = 2;
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    if (*(int **)(param_1 + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x60) + 0x18))(0);
      (**(code **)(**(int **)(param_1 + 0x60) + 0x1c))(0);
      (**(code **)(**(int **)(param_1 + 0x60) + 0x24))(0);
      if (*(char *)(param_1 + 0x58) == '\0') {
        (**(code **)(**(int **)(param_1 + 0x60) + 0x14))(0x3f800000);
        return;
      }
    }
  }
  else if (*(int *)(param_1 + 0xac) == 2) {
    if (*(int **)(param_1 + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x60) + 0x18))(0);
      (**(code **)(**(int **)(param_1 + 0x60) + 0x1c))(0x3f800000);
      if (*(char *)(param_1 + 0x58) == '\0') {
        (**(code **)(**(int **)(param_1 + 0x60) + 0x14))(0x3f800000);
        return;
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x2c))(3);
  }
  return;
}

