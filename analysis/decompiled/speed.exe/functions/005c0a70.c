/* speed.exe 005c0a70 FUN_005c0a70; analysis pseudocode, not buildable source.
 * calls 005aecb0 FUN_005aecb0
 * calls 005c0830 FUN_005c0830
 */

uint __thiscall FUN_005c0a70(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 == -1) {
    *(float *)(param_1 + 0x18) = *param_3;
    *(float *)(param_1 + 0x1c) = param_3[1];
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x7f;
    return (uint)param_3 & 0xffffff00;
  }
  iVar3 = FUN_005aecb0(param_2);
  bVar5 = *(int *)(iVar3 + 0xc) != param_2;
  if (bVar5) {
    iVar3 = FUN_005c0830(param_2);
  }
  fVar1 = param_3[1];
  fVar2 = *(float *)(param_1 + 0x1c);
  *(float *)(iVar3 + 0x10) = *param_3 - *(float *)(param_1 + 0x18);
  *(float *)(iVar3 + 0x14) = fVar1 - fVar2;
  uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)(param_1 + 3)) & 0xffffff7f;
  *(char *)(param_1 + 3) = (char)uVar4;
  return CONCAT31((int3)(uVar4 >> 8),bVar5);
}

