/* speed.exe 00722e40 FUN_00722e40; analysis pseudocode, not buildable source.
 * calls 0045f6d0 FUN_0045f6d0
 */

undefined4 __thiscall FUN_00722e40(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x40)) {
    iVar2 = param_1 + 0x44;
    do {
      iVar1 = FUN_0045f6d0(iVar2,param_2,0x3a83126f);
      if (iVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar3 < *(short *)(param_1 + 0x40));
  }
  return 0;
}

