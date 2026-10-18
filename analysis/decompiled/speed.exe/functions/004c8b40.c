/* speed.exe 004c8b40 FUN_004c8b40; analysis pseudocode, not buildable source.
 * calls 004b5150 FUN_004b5150
 * calls 004c80c0 FUN_004c80c0
 * calls 00653b10 FUN_00653b10
 * calls 004be120 FUN_004be120
 * calls 004be2b0 FUN_004be2b0
 * calls 004c4380 FUN_004c4380
 * calls 004b5290 FUN_004b5290
 * calls 004b5040 FUN_004b5040
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c8b40(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  FUN_004c4380(param_2);
  if ((*(int *)(param_1 + 600) == 5) || (*(int *)(param_1 + 600) == 6)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x269) = uVar1;
  FUN_00653b10(*(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x1e0) * _DAT_00890fc8);
  (**(code **)(*(int *)(param_1 + 0x54) + 4))();
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x48);
  fVar5 = (float10)FUN_004b5040();
  *(float *)(param_1 + 0x288) = (float)fVar5;
  FUN_004b5150(param_2);
  *(float *)(param_1 + 0x48) = (float)*(byte *)(param_1 + 0x80) * _DAT_00890fc8;
  FUN_004be120(param_2);
  FUN_004be2b0(param_2);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x8c);
  FUN_004b5290();
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x8c);
  FUN_004b5290();
  if ((DAT_009885c8 == (int *)0x0) || (cVar2 = (**(code **)(*DAT_009885c8 + 0x3c))(), cVar2 == '\0')
     ) {
    if (DAT_00911ef0 != 0) {
      FUN_004c80c0(0,param_2);
      return;
    }
  }
  else {
    iVar3 = (**(code **)(*DAT_009885c8 + 0x4c))();
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(*DAT_009885c8 + 0x4c))();
      uVar6 = 0;
      fVar5 = (float10)(**(code **)(*piVar4 + 0x28))(0);
      FUN_004c80c0((float)fVar5,uVar6);
      return;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x60) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 100) = *(undefined4 *)(param_1 + 0x2c);
  *(bool *)(*(int *)(param_1 + 0x18) + 0x68) = _DAT_00890968 != (float)*(byte *)(param_1 + 0x80);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x6c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x70) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x248) =
       *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x74);
  return;
}

