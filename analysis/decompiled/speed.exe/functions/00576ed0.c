/* speed.exe 00576ed0 FUN_00576ed0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_00576ed0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 0;
  while ((piVar1[-2] != param_2 ||
         (((piVar1[-1] != param_3 && ((param_3 != 0 || (param_2 != 0xe)))) || (*piVar1 != 1))))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 3;
    if (0x3e < iVar2) {
      return (uint)piVar1 & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}

