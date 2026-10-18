/* speed.exe 0069af50 FUN_0069af50; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_0069af50(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined3 uVar6;
  
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x48) + 4))();
  cVar1 = (**(code **)(*piVar2 + 0x24))();
  if ((cVar1 == '\0') && (piVar2 = *(int **)(param_1 + 0x13c), piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 0x4c))();
    iVar4 = (**(code **)(*piVar2 + 8))();
    if (iVar4 == iVar3) {
      uVar5 = (**(code **)(**(int **)(param_1 + 0x13c) + 8))();
      if (2 < uVar5) {
        uVar5 = (**(code **)(*(int *)(param_1 + 0x50) + 0x48))();
        if ((char)uVar5 == '\0') goto LAB_0069afc8;
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x84);
  if (*(char *)(uVar5 + 0xfc) == '\0') {
    cVar1 = *(char *)(**(int **)(param_1 + 0x78) + 0x5d);
    uVar6 = (undefined3)(uVar5 >> 8);
    uVar5 = CONCAT31(uVar6,cVar1);
    if (cVar1 == '\0') {
      return CONCAT31(uVar6,1);
    }
  }
LAB_0069afc8:
  return uVar5 & 0xffffff00;
}

