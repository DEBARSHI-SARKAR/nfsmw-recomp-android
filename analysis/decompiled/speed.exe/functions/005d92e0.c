/* speed.exe 005d92e0 FUN_005d92e0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

undefined4 * __fastcall FUN_005d92e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_008a36e0;
  puVar2 = _malloc(0x30);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &PTR_FUN_008a36ec;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[6] = 1;
    puVar2[7] = 1;
    puVar1 = puVar2 + 10;
    *puVar1 = puVar1;
    puVar2[0xb] = puVar1;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *puVar1 = puVar1;
    puVar2[0xb] = puVar1;
    param_1[1] = puVar2;
    DAT_0091dfd0 = 0;
    return param_1;
  }
  param_1[1] = 0;
  DAT_0091dfd0 = 0;
  return param_1;
}

