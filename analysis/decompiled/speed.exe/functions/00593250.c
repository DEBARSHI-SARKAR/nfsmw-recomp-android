/* speed.exe 00593250 FUN_00593250; analysis pseudocode, not buildable source.
 * calls 0045d3a0 FUN_0045d3a0
 * calls 0045d380 FUN_0045d380
 * calls 00515e90 FUN_00515e90
 */

void __thiscall FUN_00593250(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_2 + 0x14) != '\0') {
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    *(int *)(param_1 + 0x18) = param_2;
    if (*(char *)(param_1 + 0x94) != '\0') {
      iVar1 = FUN_0045d3a0(param_2 + 4);
      iVar2 = (iVar1 - *(int *)(param_1 + 0x1c)) + -1;
      iVar1 = FUN_0045d3a0(0);
      if (((iVar2 < iVar1) && (iVar1 = FUN_0045d380(iVar2), iVar1 != 0)) && (iVar1 != 4)) {
        FUN_00515e90(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(*(int *)(iVar1 + 8) + 0x10));
      }
    }
  }
  return;
}

