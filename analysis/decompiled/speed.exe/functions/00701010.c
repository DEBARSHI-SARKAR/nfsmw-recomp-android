/* speed.exe 00701010 FUN_00701010; analysis pseudocode, not buildable source.
 * calls 004cca50 FUN_004cca50
 * calls 006f8150 FUN_006f8150
 */

void __thiscall FUN_00701010(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x48;
  }
  FUN_006f8150(iVar1,param_2);
  iVar1 = *(int *)(*(int *)(param_1 + 0x204) + 0x60);
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*param_2 + 4))();
    uVar3 = (**(code **)(*piVar2 + 0x34))();
    iVar4 = FUN_004cca50(uVar3);
    if (iVar4 == iVar1) {
      *(undefined4 *)(*(int *)(param_1 + 0x204) + 0x60) = 0;
    }
  }
  return;
}

