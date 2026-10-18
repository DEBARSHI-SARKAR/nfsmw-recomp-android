/* speed.exe 0076de40 FUN_0076de40; analysis pseudocode, not buildable source.
 */

void FUN_0076de40(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  ushort *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (ushort *)(param_1 * 0x16 + DAT_009b38c0);
  puVar3 = (undefined4 *)((uint)*puVar1 * 0x20 + DAT_009b38bc);
  puVar2 = (undefined4 *)((uint)puVar1[1] * 0x20 + DAT_009b38bc);
  *param_2 = *puVar3;
  param_2[1] = puVar3[1];
  param_2[2] = puVar3[2];
  *param_3 = *puVar2;
  param_3[1] = puVar2[1];
  param_3[2] = puVar2[2];
  return;
}

