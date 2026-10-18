/* speed.exe 005d2ac0 FUN_005d2ac0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 007c5250 _qsort
 */

size_t * __thiscall FUN_005d2ac0(size_t *param_1,size_t param_2)

{
  int *piVar1;
  int *piVar2;
  size_t sVar3;
  int iVar4;
  size_t sVar5;
  
  piVar2 = (int *)(param_2 + 4);
  sVar5 = 0;
  iVar4 = *piVar2;
  while (iVar4 != 0) {
    piVar1 = piVar2 + 2;
    piVar2 = piVar2 + 2;
    sVar5 = sVar5 + 1;
    iVar4 = *piVar1;
  }
  *param_1 = sVar5;
  param_1[1] = param_2;
  if ((int)sVar5 < 0x1f) {
    param_1[2] = 0;
    param_1[3] = 0;
    return param_1;
  }
  sVar3 = FUN_005d29d0(sVar5 << 4,"StringToNumber");
  param_1[3] = sVar3 + sVar5 * 8;
  param_1[2] = sVar3;
  iVar4 = 0;
  if (0 < (int)*param_1) {
    do {
      sVar5 = param_1[2];
      *(undefined4 *)(sVar5 + iVar4 * 8) = *(undefined4 *)(param_2 + iVar4 * 8);
      *(undefined4 *)(sVar5 + 4 + iVar4 * 8) = *(undefined4 *)(param_2 + 4 + iVar4 * 8);
      sVar5 = param_1[3];
      *(undefined4 *)(sVar5 + iVar4 * 8) = *(undefined4 *)(param_2 + iVar4 * 8);
      *(undefined4 *)(sVar5 + 4 + iVar4 * 8) = *(undefined4 *)(param_2 + 4 + iVar4 * 8);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)*param_1);
  }
  _qsort((void *)param_1[2],*param_1,8,FUN_005ca570);
  _qsort((void *)param_1[3],*param_1,8,FUN_005ca5c0);
  return param_1;
}

