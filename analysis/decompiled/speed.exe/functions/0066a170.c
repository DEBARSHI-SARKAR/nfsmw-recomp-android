/* speed.exe 0066a170 FUN_0066a170; analysis pseudocode, not buildable source.
 * calls 00669fb0 FUN_00669fb0
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0066a170(int param_1,float param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_00454810(0xbee139f1,0);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_006269b0(1);
  }
  if (*pcVar2 == '\0') {
    cVar1 = FUN_00669fb0();
    if (cVar1 == '\0') {
      param_2 = param_2 + *(float *)(param_1 + 0xf8);
      *(float *)(param_1 + 0xf8) = param_2;
      if (_DAT_0089096c <= param_2) {
        if ((*(int **)(param_1 + 0x104) != (int *)0x0) && (*(char *)(param_1 + 0x111) == '\0')) {
          (**(code **)(**(int **)(param_1 + 0x104) + 0x60))();
          *(undefined4 *)(param_1 + 0x104) = 0;
        }
        (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
  }
  return;
}

