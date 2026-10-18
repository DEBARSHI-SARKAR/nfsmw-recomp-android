/* speed.exe 0068d800 FUN_0068d800; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0068d800(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float unaff_ESI;
  float unaff_retaddr;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_c [12];
  
  fVar1 = *(float *)(*(int *)(param_1 + 0x78) + 100);
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
  iVar5 = (**(code **)(*piVar4 + 0x48))(auStack_c);
  fVar2 = *(float *)(iVar5 + 4);
  fVar3 = (unaff_retaddr + *(float *)(*(int *)(param_1 + 0x78) + 0x6c)) * _DAT_00890dc4;
  iVar5 = (**(code **)(*(int *)(param_1 + 0x4c) + 0x4c))();
  if (iVar5 == 0) {
    fVar3 = _DAT_008933d4;
  }
  iVar5 = *(int *)(param_1 + 0x78);
  fStack_14 = (unaff_ESI - fVar1) * fVar3 + fVar1;
  fVar3 = *(float *)(iVar5 + 0x1c) * _DAT_008a9388 + param_2 * _DAT_008a9388;
  fVar1 = *(float *)(iVar5 + 0x18) * _DAT_008a9388 + param_2 * _DAT_008a9388;
  if (fVar1 <= fVar3) {
    fVar1 = fVar3;
  }
  uStack_1c = 0;
  fStack_18 = *(float *)(iVar5 + 0x50) * _DAT_008a9388 - (fVar1 + fVar2);
  (**(code **)(**(int **)(param_1 + 0x54) + 0x38))(&uStack_1c);
  return;
}

