/* speed.exe 00408730 FUN_00408730; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00408730(int param_1,float param_2)

{
  char cVar1;
  
  if (_DAT_00890968 < *(float *)(param_1 + 0x94)) {
    param_2 = *(float *)(param_1 + 0x94) - param_2;
    *(float *)(param_1 + 0x94) = param_2;
    if (param_2 < _DAT_00890968 != (param_2 == _DAT_00890968)) {
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined1 *)(param_1 + 0xa8) = 0;
      if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
        cVar1 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x14))();
        if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00408795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(int **)(param_1 + 0xd4) + 0xc))();
          return;
        }
      }
    }
  }
  return;
}

