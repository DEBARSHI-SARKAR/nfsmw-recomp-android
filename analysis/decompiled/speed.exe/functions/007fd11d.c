/* speed.exe 007fd11d FUN_007fd11d; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

void FUN_007fd11d(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = param_1;
  iVar3 = *param_1;
  iVar2 = FUN_007c4b80();
  param_1[100] = iVar2;
  param_1[0xe4] = *(int *)(&DAT_008c41b8 + iVar3 * 4);
  piVar5 = param_1 + 0xe5;
  param_1[0x164] = *(int *)(&DAT_008c3fb8 + iVar3 * 4);
  param_1 = (int *)0x3f;
  piVar4 = piVar5;
  do {
    iVar3 = FUN_007c4b80();
    piVar4[-0x80] = iVar3;
    *piVar4 = *(int *)(&DAT_008c3cb8 + *piVar1 * 4);
    piVar4[0x80] = *(int *)(&DAT_008c3ab8 + *piVar1 * 4);
    piVar4 = piVar4 + 1;
    param_1 = (int *)((int)param_1 + -1);
  } while (param_1 != (int *)0x0);
  iVar3 = *piVar1;
  iVar2 = FUN_007c4b80();
  piVar1[0xa4] = iVar2;
  piVar1[0x124] = *(int *)(&DAT_008c42b8 + iVar3 * 4);
  piVar1[0x1a4] = *(int *)(&DAT_008c40b8 + iVar3 * 4);
  piVar4 = piVar1 + 0x125;
  param_1 = (int *)0x3f;
  do {
    iVar3 = FUN_007c4b80();
    piVar4[-0x80] = iVar3;
    *piVar4 = *(int *)(&DAT_008c3db8 + *piVar1 * 4);
    piVar4[0x80] = *(int *)(&DAT_008c3bb8 + *piVar1 * 4);
    piVar4 = piVar4 + 1;
    param_1 = (int *)((int)param_1 + -1);
  } while (param_1 != (int *)0x0);
  piVar4 = piVar1 + 6;
  iVar3 = 8;
  do {
    *(short *)(piVar4 + -4) = (short)*piVar5;
    *(short *)piVar4 = (short)piVar1[0x65];
    *(short *)(piVar4 + 4) = (short)piVar1[0x165] + -1;
    piVar4 = (int *)((int)piVar4 + 2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = &DAT_008c43b8;
  piVar5 = piVar1 + 0x224;
  do {
    piVar5[-0x40] = ((&DAT_008c38b8)[*piVar1] * *piVar4 * 4) / 100;
    iVar3 = *piVar4;
    piVar4 = piVar4 + 1;
    *piVar5 = (*(int *)(&DAT_008c39b8 + *piVar1 * 4) * iVar3 * 4) / 100;
    piVar5 = piVar5 + 1;
  } while ((int)piVar4 < 0x8c44b8);
  return;
}

