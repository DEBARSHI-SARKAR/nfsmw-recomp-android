/* speed.exe 0078cf80 FUN_0078cf80; analysis pseudocode, not buildable source.
 * calls 0083b210 FUN_0083b210
 * calls 0083a670 FUN_0083a670
 * calls 0083abc0 FUN_0083abc0
 */

void FUN_0078cf80(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_70 [8];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [32];
  undefined4 local_28;
  undefined1 local_24 [32];
  undefined4 local_4;
  
  param_2 = param_2 + 0x7c;
  uVar1 = FUN_0083a670(param_2,&DAT_0089dcd0,0);
  local_50 = FUN_0083abc0(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008b68ec,local_48,0x20,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008b68e8,0);
  local_28 = FUN_0083abc0(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008b68e4,local_24,0x20,&DAT_00890978);
  FUN_0083b210(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008b68e0,0);
  local_4 = FUN_0083abc0(uVar1);
  uVar1 = FUN_0083a670(param_2,&DAT_008b68dc,0);
  local_4c = FUN_0083abc0(uVar1);
  puVar3 = local_70;
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

