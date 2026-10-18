/* speed.exe 00866870 FUN_00866870; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00866870(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = &DAT_009c5008;
  while (*piVar2 != param_1) {
    piVar2 = piVar2 + 3;
    iVar4 = iVar4 + 1;
    if (0x9c5067 < (int)piVar2) {
      return 0xffffffff;
    }
  }
  iVar1 = iVar4 * 0xc;
  if (iVar1 == -0x9c5008) {
    return 0xffffffff;
  }
  iVar3 = (*(code *)**(undefined4 **)(iVar1 + 0x9c500c))(param_2);
  *(int *)(iVar1 + 0x9c5010) = iVar3;
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  DAT_0090d510 = iVar4;
  return 0;
}

