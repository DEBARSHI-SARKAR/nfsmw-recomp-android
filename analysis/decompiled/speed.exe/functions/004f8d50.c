/* speed.exe 004f8d50 FUN_004f8d50; analysis pseudocode, not buildable source.
 * calls 004ac040 FUN_004ac040
 */

undefined4 * FUN_004f8d50(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004ac040(0x50,PTR_s_SFXObj_WorldObject_008efdc8,param_1 != 0);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined2 *)(puVar1 + 7) = 0;
    DAT_009142dc = 0;
    DAT_009142d8 = 0;
    puVar1[0x10] = 0;
    puVar1[10] = 0;
    *puVar1 = &PTR_FUN_00899a58;
    puVar1[9] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

