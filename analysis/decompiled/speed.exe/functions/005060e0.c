/* speed.exe 005060e0 FUN_005060e0; analysis pseudocode, not buildable source.
 * calls 004fb210 FUN_004fb210
 */

void __thiscall FUN_005060e0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_4) {
    puVar3 = (uint *)(param_2 + 0x24);
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x74);
      iVar2 = iVar1 + iVar4 * 8;
      if ((iVar2 != 0) ||
         (((*(int *)(param_1 + 0x14) != 0 && (iVar1 != 0)) &&
          (iVar2 = FUN_004fb210(*puVar3,iVar1,*(undefined4 *)(param_1 + 0x18),0,8), iVar2 != 0)))) {
        *(undefined4 *)(iVar2 + 4) = 0;
        DAT_0091a0d8 = DAT_0091a0d8 + -1;
        (&DAT_0091a0dc)[*puVar3 & 0x1fff] = (&DAT_0091a0dc)[*puVar3 & 0x1fff] + -1;
      }
      if (puVar3 + -9 == DAT_00916040) {
        DAT_00916040 = (uint *)0x0;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0x1f;
    } while (iVar4 < param_4);
  }
  return;
}

