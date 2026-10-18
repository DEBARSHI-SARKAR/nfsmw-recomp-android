/* speed.exe 00440260 FUN_00440260; analysis pseudocode, not buildable source.
 * calls 0041dcd0 FUN_0041dcd0
 * calls 004364e0 FUN_004364e0
 * calls 005cc240 FUN_005cc240
 */

void __thiscall FUN_00440260(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int aiStack_8 [2];
  
  uVar2 = (**(code **)(*param_2 + 0x4c))();
  aiStack_8[0] = FUN_005cc240(uVar2);
  for (piVar3 = *(int **)(param_1 + 0x8c); piVar3 != *(int **)(param_1 + 0x90); piVar3 = piVar3 + 2)
  {
    if (*piVar3 == aiStack_8[0]) {
      piVar3[1] = piVar3[1] + 1;
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  aiStack_8[1] = 1;
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 0x90) - iVar1 >> 3) < (uint)(*(int *)(param_1 + 0x94) - iVar1 >> 3))
     ) {
    iVar1 = *(int *)(param_1 + 0x90);
    FUN_0041dcd0(iVar1,1,aiStack_8,param_1 + 0x88,param_2);
    *(int *)(param_1 + 0x90) = iVar1 + 8;
    return;
  }
  FUN_004364e0(*(undefined4 *)(param_1 + 0x90),1,aiStack_8);
  return;
}

