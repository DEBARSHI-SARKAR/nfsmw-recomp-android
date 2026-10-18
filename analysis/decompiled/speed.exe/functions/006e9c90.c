/* speed.exe 006e9c90 FUN_006e9c90; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006e9c90(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    for (iVar1 = DAT_009885d0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      if (*(int *)(iVar1 + 0x20) == param_2) goto LAB_006e9cb2;
    }
    iVar1 = 0;
LAB_006e9cb2:
    *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x10;
  }
  return;
}

