/* speed.exe 0058e210 FUN_0058e210; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0058e210(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float param_4,
            undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  
  bVar1 = _DAT_00890968 <= param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  param_1[6] = param_2;
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = &PTR_FUN_008a1714;
  param_1[7] = param_3;
  if (bVar1) {
    param_1[8] = param_4;
    param_1[9] = param_5;
    param_1[10] = param_6;
    return param_1;
  }
  param_1[8] = _DAT_00890968;
  param_1[9] = param_5;
  param_1[10] = param_6;
  return param_1;
}

