/* speed.exe 00845ad0 FUN_00845ad0; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 0083ad80 FUN_0083ad80
 * calls 0083abc0 FUN_0083abc0
 */

void FUN_00845ad0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_0083a670(param_2,&DAT_008b6fe8,0);
  uVar1 = FUN_0083abc0(uVar1);
  *param_1 = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008b6f0c,param_1 + 1,0x10,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008b710c,0);
  uVar1 = FUN_0083ad80(uVar1);
  param_1[5] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008c2748,0);
  uVar1 = FUN_0083abc0(uVar1);
  param_1[6] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008c2778,param_1 + 7,0x84,&DAT_00890978);
  FUN_0083b210(uVar1);
  return;
}

