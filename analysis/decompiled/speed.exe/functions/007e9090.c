/* speed.exe 007e9090 FUN_007e9090; analysis pseudocode, not buildable source.
 * calls 007ebab0 FUN_007ebab0
 * calls 007e8ca0 FUN_007e8ca0
 */

int __thiscall FUN_007e9090(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_c;
  
  iVar2 = (param_1 + 0x7fU & 0xffffff80) - param_1;
  iVar6 = (param_1 + 0xfU & 0xfffffff0) - param_1;
  bVar1 = false;
  iVar8 = 0;
  iVar3 = FUN_007e8ca0();
  iVar4 = 0;
  local_c = param_1;
  if (param_1 != 0) {
    do {
      iVar7 = 0;
      iVar4 = FUN_007e8ca0();
      if (((iVar4 != iVar3) || (param_3 == 1)) && (iVar7 = FUN_007ebab0(), iVar8 != 0)) {
        if (iVar4 == 4) {
          iVar8 = (((iVar8 - iVar6) + 0x2fU & 0xfffffff0) - 0x20) + iVar6;
        }
        else {
          iVar8 = ((iVar8 - iVar2) + 0xfU & 0xfffffff0) + iVar2;
        }
      }
      iVar8 = iVar8 + iVar7;
      if (((iVar4 == iVar3) && (!bVar1)) && ((bVar1 = true, param_3 == 3 || (param_3 == 1)))) {
        iVar5 = FUN_007ebab0();
        iVar7 = 0;
        if (iVar8 != 0) {
          if (iVar4 == 4) {
            iVar7 = (((iVar8 - iVar6) + 0x2fU & 0xfffffff0) - 0x20) + iVar6;
          }
          else {
            iVar7 = ((iVar8 - iVar2) + 0xfU & 0xfffffff0) + iVar2;
          }
        }
        iVar8 = iVar7 + iVar5;
      }
    } while ((*(int *)(local_c + 4) != 0) &&
            (local_c = local_c + *(int *)(local_c + 4), local_c != 0));
    if (bVar1) {
      return iVar8;
    }
  }
  if (param_3 != 2) {
    iVar3 = 0;
    if (iVar8 != 0) {
      if (iVar4 == 4) {
        iVar3 = (((iVar8 - iVar6) + 0x2fU & 0xfffffff0) - 0x20) + iVar6;
      }
      else {
        iVar3 = ((iVar8 - iVar2) + 0xfU & 0xfffffff0) + iVar2;
      }
    }
    iVar8 = FUN_007ebab0();
    iVar8 = iVar3 + iVar8;
  }
  return iVar8;
}

