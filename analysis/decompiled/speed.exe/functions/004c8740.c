/* speed.exe 004c8740 FUN_004c8740; analysis pseudocode, not buildable source.
 * calls 004b7b00 FUN_004b7b00
 * calls 004c80c0 FUN_004c80c0
 * calls 006269b0 FUN_006269b0
 * calls 00653b10 FUN_00653b10
 * calls 0073dab0 FUN_0073dab0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c8740(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  float fStack_4;
  
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x8c);
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(*(int *)(iVar4 + 0x34) + 0x1f0);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x48);
  if (*(int *)(*(int *)(iVar4 + 0x34) + 600) == 2) {
    FUN_00653b10(*(float *)(*(int *)(iVar4 + 0x34) + 0x254) - *(float *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x254);
    (**(code **)(*(int *)(param_1 + 0x54) + 4))();
    if ((*(float *)(param_1 + 0x60) <= _DAT_00890da8) ||
       (_DAT_00890968 <= *(float *)(param_1 + 0x7c))) {
      if (*(float *)(param_1 + 0x60) < _DAT_00890968) {
        *(undefined4 *)(param_1 + 0x7c) = 0x3f000000;
      }
      *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x7c) - param_2;
      fVar6 = (float10)*(float *)(param_1 + 0x48) + (float10)_DAT_00890dd0;
      if (((float10)_DAT_00890968 <= fVar6) &&
         (fVar6 = (float10)*(float *)(param_1 + 0x48) - (float10)_DAT_00890dd0,
         fVar6 <= (float10)_DAT_00890968)) {
        fVar6 = (float10)_DAT_00890968;
      }
    }
    else {
      fVar6 = (float10)FUN_004b7b00(*(undefined4 *)(param_1 + 0x48),0x42c80000,0x42480000);
    }
  }
  else {
    fVar6 = (float10)*(float *)(*(int *)(iVar4 + 0x34) + 0x1e0) * (float10)_DAT_00890fc8;
  }
  *(float *)(param_1 + 0x48) = (float)fVar6;
  if (*(float *)(param_1 + 0x48) <= _DAT_00896484) {
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined1 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3c);
    }
  }
  else if (*(char *)(param_1 + 0x80) == '\0') {
    *(undefined1 *)(param_1 + 0x80) = 1;
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3c);
  }
  fVar1 = *(float *)(param_1 + 0x48);
  fVar2 = *(float *)(param_1 + 0x40) + _DAT_00890fc8;
  if ((fVar1 <= fVar2) && (fVar2 = *(float *)(param_1 + 0x40) - _DAT_00890fc8, fVar2 <= fVar1)) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x40) = fVar2;
  fStack_4 = *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x1dc);
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x14) == 2) {
    iVar4 = FUN_00454810(0x7e3c833,0);
    if (iVar4 == 0) {
      iVar4 = FUN_006269b0(0x40);
    }
    *(int *)(param_1 + 0x94) = iVar4;
    if (iVar4 != 0) {
      fVar6 = (float10)FUN_0073dab0(fStack_4,iVar4);
      fStack_4 = (float)fVar6;
    }
  }
  *(float *)(param_1 + 0x2c) = fStack_4 * _DAT_00897674 + _DAT_00896480;
  if ((DAT_009885c8 == (int *)0x0) || (cVar3 = (**(code **)(*DAT_009885c8 + 0x3c))(), cVar3 == '\0')
     ) {
    if ((DAT_00911ef0 != 0) && (*(int *)(*(int *)(param_1 + 0x14) + 0x14) == 3)) {
      FUN_004c80c0(0,param_2);
      return;
    }
  }
  else {
    iVar4 = (**(code **)(*DAT_009885c8 + 0x4c))();
    if (iVar4 != 0) {
      piVar5 = (int *)(**(code **)(*DAT_009885c8 + 0x4c))();
      uVar7 = 0;
      fVar6 = (float10)(**(code **)(*piVar5 + 0x28))(0);
      FUN_004c80c0((float)fVar6,uVar7);
      return;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x60) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 100) = *(undefined4 *)(param_1 + 0x2c);
  *(bool *)(*(int *)(param_1 + 0x18) + 0x68) = _DAT_00890968 != (float)*(byte *)(param_1 + 0x80);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x6c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x70) = *(undefined4 *)(param_1 + 0x48);
  return;
}

