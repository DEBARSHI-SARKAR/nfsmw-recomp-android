/* speed.exe 00601f90 FUN_00601f90; analysis pseudocode, not buildable source.
 * calls 0056bc10 FUN_0056bc10
 * calls 005dc800 FUN_005dc800
 * calls 005e84d0 FUN_005e84d0
 * calls 005dd2a0 FUN_005dd2a0
 * calls 00600730 FUN_00600730
 */

void __thiscall FUN_00601f90(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x1958) * 0x194 + 0x18 + param_1;
  *(int *)(param_1 + 0x1958) = *(int *)(param_1 + 0x1958) + 1;
  FUN_005e84d0();
  *(undefined4 *)(iVar1 + 4) = param_2;
  *(int *)(iVar1 + 0xc) = *(int *)(param_1 + 0x1958) + -1;
  cVar2 = FUN_00600730();
  if (cVar2 == '\0') {
    if ((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1964) == 2)) {
      iVar3 = FUN_005dd2a0();
      if (iVar3 != 0) {
        uVar4 = FUN_0056bc10(iVar3);
        *(undefined4 *)(iVar1 + 8) = uVar4;
        return;
      }
    }
    FUN_005dc800();
  }
  return;
}

