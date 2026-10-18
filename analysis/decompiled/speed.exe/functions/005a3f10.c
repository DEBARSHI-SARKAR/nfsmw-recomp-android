/* speed.exe 005a3f10 FUN_005a3f10; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005a3f10(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  switch(param_2) {
  case 0:
    iVar1 = *(int *)(param_1 + 0xb5c);
    *param_3 = iVar1;
    *param_4 = iVar1 * 2000;
    return;
  case 1:
    iVar1 = *(int *)(param_1 + 0xbc8);
    *param_3 = iVar1;
    *param_4 = iVar1 * 0x1c2;
    return;
  case 2:
    iVar1 = *(int *)(param_1 + 0xbc4);
    *param_3 = iVar1;
    *param_4 = iVar1 * 0xfa;
    return;
  case 3:
    iVar1 = *(int *)(param_1 + 0xb50);
    *param_3 = iVar1;
    *param_4 = iVar1 * 5000;
    return;
  case 4:
    iVar1 = *(int *)(param_1 + 0xb4c);
    *param_3 = iVar1;
    *param_4 = iVar1 * 0xfa;
    return;
  case 5:
    iVar1 = *(int *)(param_1 + 0xbb4);
    break;
  case 6:
    iVar1 = *(int *)(param_1 + 0xbbc);
    *param_3 = iVar1;
    *param_4 = iVar1 * 0xfa;
    return;
  case 7:
    iVar1 = *(int *)(param_1 + 0xbc0);
    *param_3 = iVar1;
    *param_4 = iVar1 * 0xe1;
    return;
  case 8:
    iVar1 = *(int *)(param_1 + 3000);
    break;
  case 9:
    *param_3 = *(int *)(param_1 + 0xbd0);
    *param_4 = *(int *)(param_1 + 0xbcc);
  default:
    return;
  }
  *param_3 = iVar1;
  *param_4 = iVar1 * 500;
  return;
}

