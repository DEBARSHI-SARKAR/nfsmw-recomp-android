/* speed.exe 00439e60 FUN_00439e60; analysis pseudocode, not buildable source.
 * calls 004341a0 FUN_004341a0
 * calls 0041c490 FUN_0041c490
 * calls 006e8de0 FUN_006e8de0
 */

void __thiscall FUN_00439e60(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  fVar2 = *(float *)(param_2 + 0x1c);
  local_14 = *(undefined4 *)(param_2 + 0x10);
  local_10 = *(undefined4 *)(param_2 + 0x14);
  local_c = *(undefined4 *)(param_2 + 0x18);
  fVar5 = (float10)FUN_006e8de0();
  iVar3 = *(int *)(param_1 + 0x78);
  local_8 = (float)(fVar5 + (float10)fVar2);
  local_4 = uVar1;
  iVar4 = FUN_0041c490(iVar3,*(undefined4 *)(iVar3 + 4),&local_14);
  FUN_004341a0(1);
  *(int *)(iVar3 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  return;
}

