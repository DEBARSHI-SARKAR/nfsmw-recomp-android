/* speed.exe 00845150 FUN_00845150; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 0083ad80 FUN_0083ad80
 * calls 0083abc0 FUN_0083abc0
 */

void FUN_00845150(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0083a670(param_2,&DAT_008b6fe8,0);
  uVar1 = FUN_0083abc0(uVar1);
  *param_1 = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008b7108,0);
  uVar1 = FUN_0083abc0(uVar1);
  param_1[1] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008c6d04,0);
  uVar1 = FUN_0083ad80(uVar1);
  param_1[2] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008c6d00,0);
  uVar1 = FUN_0083ad80(uVar1);
  param_1[3] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008c6cfc,param_1 + 4,0x10,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008b68ec,0);
  uVar1 = FUN_0083abc0(uVar1);
  param_1[8] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008a4154,0);
  uVar1 = FUN_0083abc0(uVar1);
  param_1[9] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008b6f0c,param_1 + 10,0x24,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008c6cf8,param_1 + 0x13,0x44,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008b68e8,param_1 + 0x24,0x44,&DAT_00890978);
  FUN_0083b210(uVar1);
  return;
}

