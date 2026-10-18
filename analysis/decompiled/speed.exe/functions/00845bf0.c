/* speed.exe 00845bf0 FUN_00845bf0; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 00845a40 FUN_00845a40
 * calls 0083b210 FUN_0083b210
 * calls 0083ad80 FUN_0083ad80
 * calls 007c6100 _sprintf
 * calls 0083c140 FUN_0083c140
 * calls 0083b110 FUN_0083b110
 * calls 0083abc0 FUN_0083abc0
 * calls 00845b90 FUN_00845b90
 */

void FUN_00845bf0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  puVar3 = param_1;
  for (iVar2 = 0x91; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_0083a670(param_2,&DAT_008b6fe8,0);
  uVar1 = FUN_0083abc0(uVar1);
  *param_1 = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008b6f0c,param_1 + 2,0x10,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008b710c,0);
  uVar1 = FUN_0083ad80(uVar1);
  param_1[1] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008b68e8,param_1 + 6,8,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008b68ec,param_1 + 10,0x84,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008c2778,param_1 + 0x2b,0x84,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008c2748,0);
  uVar1 = FUN_0083abc0(uVar1);
  param_1[0x4c] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008c6de0,0);
  uVar1 = FUN_0083ad80(uVar1);
  param_1[0x4d] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008c6ddc,0);
  uVar1 = FUN_0083abc0(uVar1);
  FUN_00845b90(param_1 + 0x4e,uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008c6dd8,0);
  uVar1 = FUN_0083abc0(uVar1);
  param_1[0x4f] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008c6dd4,0);
  uVar1 = FUN_0083abc0(uVar1);
  param_1[0x50] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008b68dc,0);
  uVar1 = FUN_0083abc0(uVar1);
  param_1[9] = uVar1;
  iVar2 = 0;
  pcVar4 = (char *)(param_1 + 0x51);
  do {
    uVar1 = FUN_0083a670(param_2,&DAT_008a88f8,pcVar4,0x24,&DAT_00890978,iVar2,0x2c);
    FUN_0083c140(uVar1);
    if (*pcVar4 == '\0') break;
    iVar2 = iVar2 + 1;
    pcVar4 = pcVar4 + 0x24;
  } while (iVar2 < 4);
  uVar1 = FUN_0083a670(param_2,&DAT_008c6dd0,0);
  uVar1 = FUN_0083abc0(uVar1);
  param_1[0x75] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008c6dcc,0);
  uVar1 = FUN_0083abc0(uVar1);
  param_1[0x76] = uVar1;
  _sprintf((char *)(param_1 + 0x77),"%03d",uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008c6da4,0);
  uVar1 = FUN_0083b110(uVar1);
  param_1[0x89] = uVar1;
  uVar1 = FUN_0083a670(param_2,&DAT_008c6dc0,param_1 + 0x8a,0x14,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008c6dbc,param_1 + 0x8f,8,&DAT_00890978);
  FUN_0083b210(uVar1);
  FUN_00845a40(param_1,param_2);
  return;
}

