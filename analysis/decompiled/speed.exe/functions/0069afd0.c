/* speed.exe 0069afd0 FUN_0069afd0; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_0069afd0(int *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(byte *)(*(int *)param_1[0xc] + 0x1c) & 1) == 0) {
    cVar1 = (**(code **)(param_1[2] + 0x34))();
    if (cVar1 == '\0') {
      piVar2 = (int *)(**(code **)(*param_1 + 4))();
      cVar1 = (**(code **)(*piVar2 + 0x24))();
      uVar3 = (-(uint)(cVar1 != '\0') & 0xfffffffc) + 0x68;
      iVar4 = (**(code **)(*(int *)param_1[0x3c] + 0x58))();
      if (iVar4 == 2) {
        uVar3 = uVar3 | 0x20000;
      }
      return uVar3;
    }
  }
  return 0;
}

