/* speed.exe 006edc90 FUN_006edc90; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_006edc90(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  if (DAT_00988e04 == 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x2c) + 0xc))();
    if ((iVar2 != 0) && (DAT_009885c8 == 0)) {
      piVar3 = (int *)FUN_005d59f0(&LAB_004040e0);
      if (piVar3 != (int *)0x0) {
        fVar4 = (float10)(**(code **)(*piVar3 + 0x8c))();
        if ((float10)_DAT_008b01c0 <= fVar4 * (float10)_DAT_008967e0) {
          cVar1 = (**(code **)(*piVar3 + 0xbc))();
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(*piVar3 + 0x20))();
            if (cVar1 == '\0') {
              cVar1 = (**(code **)(*piVar3 + 0x5c))();
              if (cVar1 == '\0') {
                return 1;
              }
            }
          }
        }
      }
      return 0;
    }
  }
  return 0;
}

