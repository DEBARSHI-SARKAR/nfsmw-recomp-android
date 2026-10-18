/* speed.exe 0083f560 FUN_0083f560; analysis pseudocode, not buildable source.
 */

int * FUN_0083f560(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar3 = param_1[10];
    iVar2 = (**(code **)(*param_1 + 0x28))(*param_1);
    param_1[9] = iVar2;
  } while (param_1[10] != iVar3);
  iVar3 = (**(code **)(*param_1 + 0x24))(*param_1);
  *(bool *)(param_1 + 0x1e) = iVar3 == 2;
  if ((iVar3 == 2) || (iVar3 == 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)((int)param_1 + 0x79) = uVar1;
  iVar3 = *param_1;
  param_1[0x1a] = *(int *)(iVar3 + 100);
  param_1[0x1b] = *(int *)(iVar3 + 0x68);
  param_1[0x1c] = *(int *)(iVar3 + 0x6c);
  return param_1 + 9;
}

