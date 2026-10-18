/* speed.exe 0054b810 FUN_0054b810; analysis pseudocode, not buildable source.
 * calls 0053d810 FUN_0053d810
 * calls 00589870 FUN_00589870
 * calls 00799f50 FUN_00799f50
 */

void __thiscall FUN_0054b810(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2e4) == 0) {
    return;
  }
  FUN_00799f50();
  if (param_2 < 0) {
    param_2 = *(int *)(param_1 + 0x2d4) + param_2;
    *(int *)(param_1 + 0x2d4) = param_2;
    if (param_2 < 1) {
      *(undefined4 *)(param_1 + 0x2d4) = 1;
    }
    iVar1 = *(int *)(param_1 + 0x2d4);
    if (*(int *)(param_1 + 0x2e8) <= iVar1) goto LAB_0054b896;
  }
  else {
    if (param_2 < 1) goto LAB_0054b896;
    param_2 = *(int *)(param_1 + 0x2d4) + param_2;
    *(int *)(param_1 + 0x2d4) = param_2;
    if (*(int *)(param_1 + 0x2e4) < param_2) {
      *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2e4);
    }
    iVar1 = *(int *)(param_1 + 0x2d4) + -0xb;
    if (iVar1 <= *(int *)(param_1 + 0x2e8)) goto LAB_0054b896;
  }
  *(int *)(param_1 + 0x2e8) = iVar1;
LAB_0054b896:
  FUN_00589870(0xc,*(undefined4 *)(param_1 + 0x2e4),*(undefined4 *)(param_1 + 0x2e8),
               *(undefined4 *)(param_1 + 0x2d4));
  FUN_0053d810();
  return;
}

