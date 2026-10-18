/* speed.exe 004d6270 FUN_004d6270; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004d6270(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x14);
  if ((((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) && ((iVar1 != 0xc && (iVar1 != 5)))) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x14) = param_2;
    return;
  }
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x14) = param_2;
  return;
}

