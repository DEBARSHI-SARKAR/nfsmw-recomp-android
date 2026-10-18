/* speed.exe 005eec00 FUN_005eec00; analysis pseudocode, not buildable source.
 * calls 005eeb90 FUN_005eeb90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005eec00(int param_1)

{
  float10 fVar1;
  
  switch(*(undefined1 *)(param_1 + 0x4c)) {
  case 2:
  case 3:
    FUN_005eeb90();
    return;
  case 4:
  case 5:
    fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x6c) + 0x60))();
    if ((float10)_DAT_00890968 < fVar1) {
      FUN_005eeb90();
    }
    *(undefined1 *)(param_1 + 0x4c) = 5;
  }
  return;
}

