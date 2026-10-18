/* speed.exe 00674580 FUN_00674580; analysis pseudocode, not buildable source.
 * calls 00674f10 FUN_00674f10
 */

void __thiscall FUN_00674580(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EDI;
  
  if ((uint)param_1[2] < param_2) {
    (**(code **)(*param_1 + 0x14))(param_2);
    iVar1 = param_1[1];
    iVar3 = param_1[3];
    iVar2 = (**(code **)(*param_1 + 4))(param_2,0x10);
    param_1[1] = iVar2;
    param_1[2] = param_2;
    if (iVar1 != iVar2) {
      param_1[3] = 0;
      iVar2 = iVar1;
      if (0 < iVar3) {
        do {
          FUN_00674f10(iVar2);
          iVar3 = iVar3 + -1;
          iVar2 = iVar2 + 4;
        } while (iVar3 != 0);
      }
      if (iVar1 != 0) {
        (**(code **)(*param_1 + 8))(iVar1,unaff_EDI);
      }
    }
  }
  return;
}

