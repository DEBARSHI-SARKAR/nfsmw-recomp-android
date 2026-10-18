/* speed.exe 004e3e40 FUN_004e3e40; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004e3e40(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  param_1[0x17] = param_3;
  if (param_2 == 0) {
    (**(code **)(*param_1 + 4))(param_1[1],param_1[0xe],1,0);
    return;
  }
  iVar1 = param_1[1];
  piVar2 = (int *)(*(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x1b8));
  *(int *)(iVar1 + 0x1b8) = *(int *)(iVar1 + 0x1b8) + 0x60;
  piVar2[0x17] = param_3;
  (**(code **)(*piVar2 + 4))(param_1[1],param_1[0xe],1,param_2);
  return;
}

