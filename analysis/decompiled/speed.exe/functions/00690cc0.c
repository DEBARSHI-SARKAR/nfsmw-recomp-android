/* speed.exe 00690cc0 FUN_00690cc0; analysis pseudocode, not buildable source.
 * calls 00671330 FUN_00671330
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00690cc0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  FUN_00671330(0);
  fVar2 = _DAT_00890cd4;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  fVar1 = _DAT_00890cd4;
  if (fVar2 < param_2) {
    fVar1 = param_2;
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(float *)(param_1 + 0xcc) = fVar1;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return param_1;
}

