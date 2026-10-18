/* speed.exe 004097c0 FUN_004097c0; analysis pseudocode, not buildable source.
 */

bool __fastcall FUN_004097c0(int param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  cVar1 = (**(code **)(*piVar2 + 0xbc))();
  if (cVar1 == '\0') {
    piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    cVar1 = (**(code **)(*piVar2 + 0x20))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x24))();
      if (cVar1 == '\0') {
        piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
        cVar1 = (**(code **)(*piVar2 + 0xc4))();
        return cVar1 != '\0';
      }
    }
  }
  return false;
}

