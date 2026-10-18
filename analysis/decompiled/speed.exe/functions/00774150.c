/* speed.exe 00774150 FUN_00774150; analysis pseudocode, not buildable source.
 * calls 0076df10 FUN_0076df10
 */

void FUN_00774150(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)((uint)param_1[1] * 0x20 + DAT_009b38bc);
  puVar2 = (undefined4 *)((uint)*param_1 * 0x20 + DAT_009b38bc);
  local_18 = *puVar1;
  local_14 = puVar1[1];
  local_10 = puVar1[2];
  local_c = *puVar2;
  local_8 = puVar2[1];
  local_4 = puVar2[2];
  FUN_0076df10(&local_c,&local_18,param_2,param_3,param_4);
  return;
}

