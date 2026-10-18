/* speed.exe 0072b220 FUN_0072b220; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0072b220(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*param_1 != -0x7ffca000) {
    return 0;
  }
  if (param_1 + 2 != (int *)(param_1[1] + 8 + (int)param_1)) {
    do {
    } while (param_1[2] != 0x36001);
    piVar3 = (int *)((int)param_1 + 0x1fU & 0xfffffff0);
    if (piVar3[2] == 2) {
      iVar1 = *piVar3;
      piVar2 = (int *)piVar3[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
    }
    *(undefined4 *)(*(int *)(&DAT_009a3bb0 + piVar3[3] * 4) + 0x18) = 0;
    iVar1 = piVar3[3];
    piVar3 = *(int **)(&DAT_009a3bb0 + iVar1 * 4);
    if ((piVar3 != (int *)0x0) && (*piVar3 = *piVar3 + -1, *piVar3 == 0)) {
      _DAT_009a6770 = _DAT_009a6770 + -1;
      *DAT_009a9f78 = (int)piVar3;
      piVar2 = piVar3;
      piVar3[1] = (int)DAT_009a9f78;
      DAT_009a9f78 = piVar2;
      *piVar3 = (int)&DAT_009a9f74;
      *(undefined4 *)(&DAT_009a3bb0 + iVar1 * 4) = 0;
    }
  }
  return 1;
}

