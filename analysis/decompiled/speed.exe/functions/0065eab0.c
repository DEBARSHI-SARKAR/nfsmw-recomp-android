/* speed.exe 0065eab0 FUN_0065eab0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0065eab0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    do {
      if ((*param_2 == *(int *)(iVar1 + 0x14)) &&
         ((param_2[3] == *(int *)(iVar1 + 0x1c) || (*(char *)(iVar1 + 0x20) != '\0')))) {
        (**(code **)(iVar1 + 0x10))(param_2,iVar1);
      }
      iVar1 = iVar1 + 0x24;
    } while (iVar1 != *(int *)(param_1 + 8));
  }
  return;
}

