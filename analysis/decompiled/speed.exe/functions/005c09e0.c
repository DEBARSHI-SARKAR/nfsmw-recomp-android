/* speed.exe 005c09e0 FUN_005c09e0; analysis pseudocode, not buildable source.
 * calls 005aecb0 FUN_005aecb0
 * calls 005c0830 FUN_005c0830
 */

uint __thiscall FUN_005c09e0(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_2 == -1) {
    *(float *)(param_1 + 0x18) = *param_3;
    *(float *)(param_1 + 0x1c) = param_3[1];
    fVar4 = param_3[2];
    *(float *)(param_1 + 0x20) = fVar4;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x7f;
    return (uint)fVar4 & 0xffffff00;
  }
  iVar5 = FUN_005aecb0(param_2);
  bVar7 = *(int *)(iVar5 + 0xc) != param_2;
  if (bVar7) {
    iVar5 = FUN_005c0830(param_2);
  }
  fVar4 = *param_3;
  fVar1 = *(float *)(param_1 + 0x18);
  fVar2 = param_3[1];
  fVar3 = *(float *)(param_1 + 0x1c);
  *(float *)(iVar5 + 0x18) = param_3[2] - *(float *)(param_1 + 0x20);
  *(float *)(iVar5 + 0x10) = fVar4 - fVar1;
  *(float *)(iVar5 + 0x14) = fVar2 - fVar3;
  uVar6 = CONCAT31((int3)((uint)iVar5 >> 8),*(undefined1 *)(param_1 + 3)) & 0xffffff7f;
  *(char *)(param_1 + 3) = (char)uVar6;
  return CONCAT31((int3)(uVar6 >> 8),bVar7);
}

