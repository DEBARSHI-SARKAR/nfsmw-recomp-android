/* speed.exe 0072cd40 FUN_0072cd40; analysis pseudocode, not buildable source.
 * calls 00466340 FUN_00466340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072cd40(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_00466340(DAT_009a3ac4);
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[2] = 0;
  puVar3[3] = param_1;
  puVar2 = PTR_DAT_009031f4;
  puVar1 = *(undefined4 **)(PTR_DAT_009031f4 + 4);
  *puVar1 = puVar3;
  *(undefined4 **)(puVar2 + 4) = puVar3;
  puVar3[1] = puVar1;
  *puVar3 = puVar2;
  _DAT_009a2dc8 = _DAT_009a2dc8 + 1;
  return;
}

