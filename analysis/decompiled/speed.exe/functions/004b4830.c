/* speed.exe 004b4830 FUN_004b4830; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b4830(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  
  *(undefined4 *)(param_1 + 0x88) = DAT_009142dc;
  *(undefined4 *)(param_1 + 0x84) = 2;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 100);
  piVar5 = *(int **)(*(int *)(param_1 + 0x90) + 8);
  fVar6 = (float)piVar5[2];
  if (piVar5[2] < 0) {
    fVar6 = fVar6 + _DAT_00891214;
  }
  fVar2 = *(float *)(*(int *)(param_1 + 0x18) + 100);
  fVar7 = (float)*piVar5 * _DAT_00890d60;
  *(float *)(param_1 + 0x34) = fVar7;
  if (fVar7 < _DAT_00890968 != (fVar7 == _DAT_00890968)) {
    *(undefined4 *)(param_1 + 0x34) = 0x3c23d70a;
  }
  *(float *)(param_1 + 0x3c) = fVar6 + fVar2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  piVar5 = *(int **)(*(int *)(param_1 + 0x90) + 8);
  iVar3 = piVar5[3];
  fVar6 = (float)*piVar5 * _DAT_00890d60;
  *(float *)(param_1 + 0x50) = fVar6;
  if (fVar6 < _DAT_00890968 != (fVar6 == _DAT_00890968)) {
    *(undefined4 *)(param_1 + 0x50) = 0x3c23d70a;
  }
  *(int *)(param_1 + 0x58) = iVar3;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x60);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x60);
  *(undefined4 *)(param_1 + 0x6c) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  return;
}

