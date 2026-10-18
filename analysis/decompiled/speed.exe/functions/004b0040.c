/* speed.exe 004b0040 FUN_004b0040; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_004b0040(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x6c) == 5) {
    return -1;
  }
  *(float *)(param_1 + 4 + *(int *)(param_1 + 0x6c) * 4) = (float)param_4 * _DAT_00890d60;
  fVar1 = *(float *)(param_1 + 4 + *(int *)(param_1 + 0x6c) * 4);
  if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
    *(undefined4 *)(param_1 + 4 + *(int *)(param_1 + 0x6c) * 4) = 0x3c23d70a;
  }
  *(undefined4 *)(param_1 + 0x34 + *(int *)(param_1 + 0x6c) * 4) = param_3;
  *(undefined4 *)(param_1 + 0x1c + *(int *)(param_1 + 0x6c) * 4) = param_2;
  *(undefined4 *)(param_1 + 0x54 + *(int *)(param_1 + 0x6c) * 4) = param_5;
  *(undefined1 *)(param_1 + 0x4c + *(int *)(param_1 + 0x6c)) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x6c) == 0) {
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x1c);
  }
  iVar2 = *(int *)(param_1 + 0x6c) + 1;
  *(int *)(param_1 + 0x6c) = iVar2;
  return iVar2;
}

