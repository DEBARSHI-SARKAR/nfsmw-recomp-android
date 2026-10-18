/* speed.exe 008457b0 FUN_008457b0; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0084c110 FUN_0084c110
 * calls 0083b210 FUN_0083b210
 * calls 0083a8f0 FUN_0083a8f0
 * calls 0083abc0 FUN_0083abc0
 */

void FUN_008457b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_0083a670(param_2,&DAT_008b68dc,0);
  uVar1 = FUN_0083abc0(uVar1);
  param_1[1] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008b68e8,0);
  uVar1 = FUN_0083abc0(uVar1);
  *param_1 = uVar1;
  param_1[2] = 0;
  uVar1 = FUN_0083a670(param_2,&DAT_008c6cfc,0);
  iVar2 = FUN_0083abc0(uVar1);
  if (iVar2 != 0) {
    param_1[2] = param_1[2] | 4;
  }
  uVar1 = FUN_0083a670(param_2,&DAT_008b6f0c,param_1 + 3,0x10,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008b68ec,param_1 + 7,0x84,&DAT_00890978);
  FUN_0083a8f0(uVar1);
  iVar2 = FUN_0084c110(param_1 + 3,param_3);
  if (iVar2 == 0) {
    param_1[2] = param_1[2] | 1;
  }
  return;
}

