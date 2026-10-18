/* speed.exe 00654710 FUN_00654710; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00654710(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1 / 4000;
  iVar2 = *param_1 % 4000;
  *param_2 = iVar1 / 0xe10;
  iVar1 = iVar1 % 0xe10;
  *param_3 = iVar1 / 0x3c;
  *param_4 = iVar1 % 0x3c;
  *param_5 = (iVar2 * 1000) / 4000;
  return iVar2 * 0x38;
}

