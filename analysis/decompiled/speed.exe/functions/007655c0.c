/* speed.exe 007655c0 FUN_007655c0; analysis pseudocode, not buildable source.
 */

void FUN_007655c0(ushort *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((uint)*param_1 * 0x20 + DAT_009b38bc);
  puVar2 = (undefined4 *)((uint)param_1[1] * 0x20 + DAT_009b38bc);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  *param_3 = *puVar2;
  param_3[1] = puVar2[1];
  param_3[2] = puVar2[2];
  return;
}

