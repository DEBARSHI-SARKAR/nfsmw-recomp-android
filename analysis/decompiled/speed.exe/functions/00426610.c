/* speed.exe 00426610 FUN_00426610; analysis pseudocode, not buildable source.
 * calls 00419ae0 FUN_00419ae0
 * calls 005d59f0 FUN_005d59f0
 * calls 0041ecd0 FUN_0041ecd0
 * calls 00419a40 FUN_00419a40
 */

uint __thiscall FUN_00426610(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  uint *puVar7;
  int unaff_retaddr;
  undefined4 uVar8;
  int iVar9;
  
  uVar8 = 0;
  iVar2 = param_1;
  cVar1 = (**(code **)(*(int *)(param_1 + 0x54) + 4))(0);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar9 = 0;
  if (DAT_0092d884 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)*DAT_0092d87c;
  }
  iVar2 = (**(code **)(*piVar6 + 4))(uVar8,0,iVar2);
  if (iVar2 != 0) {
    iVar9 = FUN_005d59f0(&LAB_004037e0);
  }
  puVar7 = *(uint **)(param_1 + 200);
  if (puVar7 != puVar7 + *(int *)(param_1 + 0xd0)) {
    do {
      piVar6 = (int *)*puVar7;
      piVar3 = (int *)(**(code **)(*piVar6 + 0x44))();
      if (((*piVar3 == unaff_retaddr) && (cVar1 = (**(code **)(*piVar6 + 0x88))(), cVar1 == '\0'))
         && ((uVar8 = (**(code **)(*piVar6 + 0x4c))(), param_2 == '\0' ||
             ((iVar9 == 0 || (cVar1 = FUN_00419a40(uVar8), cVar1 != '\0')))))) {
        cVar1 = (**(code **)(*piVar6 + 0x5c))();
        return ~-(uint)(cVar1 != '\0') & (uint)piVar6;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (uint *)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0) * 4));
  }
  if (unaff_retaddr != DAT_0092c4f4) {
    if ((iVar9 == 0) || (pcVar5 = (char *)FUN_00419ae0(), pcVar5 == (char *)0x0)) {
      pcVar5 = "copmidsize";
    }
    uVar4 = FUN_0041ecd0(pcVar5);
    return uVar4;
  }
  uVar4 = FUN_0041ecd0("copheli");
  return uVar4;
}

