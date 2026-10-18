/* speed.exe 0044e4d0 FUN_0044e4d0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

undefined4 * FUN_0044e4d0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = _malloc(0x1c);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[3] = param_1;
    *puVar3 = &PTR_FUN_00893af4;
    puVar3[4] = 0;
    puVar1 = puVar3 + 5;
    *puVar1 = puVar1;
    puVar3[6] = puVar1;
    puVar3[4] = param_2 + 8;
    *(int *)(param_2 + 0x1c) = param_2 + 0x48;
    puVar1 = puVar3 + 1;
    *DAT_0090dac0 = puVar1;
    puVar2 = puVar1;
    puVar3[2] = DAT_0090dac0;
    DAT_0090dac0 = puVar2;
    *puVar1 = &DAT_0090dabc;
    return puVar3;
  }
  return (undefined4 *)0x0;
}

