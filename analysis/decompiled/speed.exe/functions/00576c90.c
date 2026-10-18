/* speed.exe 00576c90 FUN_00576c90; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00576c90(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 8);
  while (((piVar2[-2] != param_2 || (piVar2[-1] != param_3)) || (*piVar2 != 1))) {
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 3;
    if (0x3e < iVar3) {
      return;
    }
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
  *puVar1 = 0;
  puVar1[2] = 0;
  return;
}

