/* speed.exe 00407ff0 FUN_00407ff0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00407ff0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  iVar3 = (**(code **)(*piVar2 + 0x30))();
  if (iVar3 == 1) {
    piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    fVar4 = (float10)(**(code **)(*piVar2 + 0x90))();
    if ((float10)_DAT_0089096c <= fVar4) {
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x20))();
      if ((piVar2 != (int *)0x0) && (cVar1 = (**(code **)(*piVar2 + 0x40))(), cVar1 != '\0')) {
        return false;
      }
      return *(char *)(param_1 + 0x7e8) == '\0';
    }
  }
  return false;
}

