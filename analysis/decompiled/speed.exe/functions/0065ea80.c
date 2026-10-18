/* speed.exe 0065ea80 FUN_0065ea80; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0065ea80(int param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    while (*(int *)(iVar1 + 0x18) != param_2) {
      iVar1 = iVar1 + 0x24;
      if (iVar1 == *(int *)(param_1 + 8)) {
        return;
      }
    }
    *(bool *)(iVar1 + 0x20) = param_3 == '\0';
  }
  return;
}

