/* speed.exe 0069c950 FUN_0069c950; analysis pseudocode, not buildable source.
 * calls 00410180 FUN_00410180
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069c950(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  float10 fVar5;
  
  if (((byte)*(undefined4 *)(param_2 + 0x1c) & 7) != 3) {
    cVar3 = (**(code **)(*(int *)(param_1 + 0x4c) + 0x18))();
    if ((cVar3 == '\0') &&
       (cVar3 = (**(code **)(**(int **)(param_1 + 0x48) + 0xbc))(), cVar3 == '\0')) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 8);
      if (*(int *)(param_2 + 0x3c) == iVar2) {
        if ((*(byte *)(param_2 + 0x1c) & 8) != 0) {
          return;
        }
        param_2 = param_2 + 0x50;
      }
      else {
        if (*(int *)(param_2 + 0x4c) != iVar2) {
          return;
        }
        if ((*(byte *)(param_2 + 0x1c) & 0x20) != 0) {
          return;
        }
        param_2 = param_2 + 0x60;
      }
      fVar5 = (float10)FUN_00410180(param_2);
      fVar1 = (float)fVar5;
      if ((_DAT_00890968 < fVar1) && (_DAT_008a9a74 < fVar1)) {
        piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
        fVar5 = (float10)(**(code **)(*piVar4 + 0x2c))();
        if ((float10)_DAT_008ab58c < (float10)fVar1 - fVar5) {
          (**(code **)(*(int *)(param_1 + 0x4c) + 0x1c))();
        }
      }
    }
  }
  return;
}

