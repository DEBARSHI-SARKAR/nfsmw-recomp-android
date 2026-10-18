/* speed.exe 0066a0b0 FUN_0066a0b0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __thiscall FUN_0066a0b0(int param_1,float param_2)

{
  int *piVar1;
  float *pfVar2;
  
  if (_DAT_00890968 < *(float *)(param_1 + 0xf4)) {
    if (_DAT_00890968 < *(float *)(param_1 + 0xf0)) {
      piVar1 = (int *)(**(code **)(*(int *)(param_1 + 0x2c) + 0x54))();
      *(float *)(param_1 + 0xf0) = *(float *)(param_1 + 0xf0) - param_2;
      pfVar2 = (float *)FUN_00454810(0x44f1273b,1);
      if (pfVar2 == (float *)0x0) {
        pfVar2 = (float *)FUN_006269b0(4);
      }
      (**(code **)(*piVar1 + 0x7c))(-(param_2 * *pfVar2));
      if (*(float *)(param_1 + 0xf0) < _DAT_00890968 !=
          (*(float *)(param_1 + 0xf0) == _DAT_00890968)) {
        (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
        *(undefined4 *)(param_1 + 0xf0) = 0;
      }
      return 1;
    }
  }
  return 0;
}

