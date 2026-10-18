/* speed.exe 00733420 FUN_00733420; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00733420(int param_1)

{
  float fVar1;
  
  if (_DAT_00890968 < *(float *)(param_1 + 0xec)) {
    fVar1 = *(float *)(param_1 + 0xec) - DAT_009259bc;
    *(float *)(param_1 + 0xec) = fVar1;
    if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
      *(undefined4 *)(param_1 + 0xec) = 0;
      if (*(code **)(param_1 + 0x100) != (code *)0x0) {
        (**(code **)(param_1 + 0x100))(*(undefined4 *)(param_1 + 0x104));
        *(undefined4 *)(param_1 + 0x100) = 0;
        *(undefined4 *)(param_1 + 0x104) = 0;
      }
    }
  }
  return;
}

