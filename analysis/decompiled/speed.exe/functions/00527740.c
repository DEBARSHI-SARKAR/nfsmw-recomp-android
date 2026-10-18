/* speed.exe 00527740 FUN_00527740; analysis pseudocode, not buildable source.
 * calls 005bcd20 FUN_005bcd20
 * calls 00519670 FUN_00519670
 */

void __thiscall FUN_00527740(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if ((param_2 != 0) && (iVar2 != 0)) {
    FUN_005bcd20(param_2);
    puVar1 = (uint *)(iVar2 + 0x1c);
    *puVar1 = *puVar1 | 0x400002;
  }
  iVar2 = *(int *)(param_1 + 0x34);
  if ((iVar2 != 0) && (param_2 != 0)) {
    FUN_005bcd20(param_2);
    puVar1 = (uint *)(iVar2 + 0x1c);
    *puVar1 = *puVar1 | 0x400002;
  }
  FUN_00519670(param_2);
  return;
}

