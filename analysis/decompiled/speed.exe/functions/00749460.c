/* speed.exe 00749460 FUN_00749460; analysis pseudocode, not buildable source.
 * calls 00739730 FUN_00739730
 * calls 00460bf0 FUN_00460bf0
 * calls 00460c70 FUN_00460c70
 * calls 00460ed0 FUN_00460ed0
 */

undefined4 FUN_00749460(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_40 [64];
  
  if (param_1[param_2 + 0x5f] == 0) {
    return 0;
  }
  iVar3 = *param_1 * 0xd0 + DAT_009b09d8;
  uVar1 = FUN_00460bf0("TEXTURE");
  iVar2 = FUN_00739730(uVar1,0);
  if ((iVar2 != 0) && (iVar2 = DAT_009b09bc + *(int *)(iVar2 + 4) * 4, iVar2 != 0)) {
    FUN_00460c70(local_40,iVar3 + 0x10);
    FUN_00460ed0(local_40,local_40,&DAT_008b4c34);
    FUN_00460ed0(local_40,local_40,iVar2);
    FUN_00460ed0(local_40,local_40,"_MASK");
    uVar1 = FUN_00460bf0(local_40);
    return uVar1;
  }
  return 0;
}

