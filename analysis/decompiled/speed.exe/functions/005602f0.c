/* speed.exe 005602f0 FUN_005602f0; analysis pseudocode, not buildable source.
 * calls 00589870 FUN_00589870
 * calls 005584d0 FUN_005584d0
 */

void __thiscall FUN_005602f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x348);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 < 0) {
    param_2 = *(int *)(param_1 + 0x340) + param_2;
    *(int *)(param_1 + 0x340) = param_2;
    if (param_2 < 1) {
      *(undefined4 *)(param_1 + 0x340) = 1;
    }
    iVar2 = *(int *)(param_1 + 0x340);
    if (*(int *)(param_1 + 0x33c) <= iVar2) goto LAB_0056036d;
  }
  else {
    if (param_2 < 1) goto LAB_0056036d;
    param_2 = *(int *)(param_1 + 0x340) + param_2;
    *(int *)(param_1 + 0x340) = param_2;
    if (iVar1 < param_2) {
      *(int *)(param_1 + 0x340) = iVar1;
    }
    iVar2 = *(int *)(param_1 + 0x340) + -9;
    if (iVar2 <= *(int *)(param_1 + 0x33c)) goto LAB_0056036d;
  }
  *(int *)(param_1 + 0x33c) = iVar2;
LAB_0056036d:
  FUN_00589870(10,iVar1,*(undefined4 *)(param_1 + 0x33c),*(undefined4 *)(param_1 + 0x340));
  FUN_005584d0();
  return;
}

