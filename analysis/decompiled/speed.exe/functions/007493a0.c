/* speed.exe 007493a0 FUN_007493a0; analysis pseudocode, not buildable source.
 * calls 00739730 FUN_00739730
 * calls 00460bf0 FUN_00460bf0
 * calls 00460c70 FUN_00460c70
 * calls 00460ed0 FUN_00460ed0
 */

undefined4 FUN_007493a0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_40 [64];
  
  iVar3 = param_2 * 0xd0 + DAT_009b09d8;
  uVar1 = FUN_00460bf0("TEXTURE");
  iVar2 = FUN_00739730(uVar1,0);
  if ((iVar2 != 0) && (iVar2 = DAT_009b09bc + *(int *)(iVar2 + 4) * 4, iVar2 != 0)) {
    FUN_00460c70(local_40,iVar3 + 0x10);
    if (DAT_009b09fc == 0) {
      if (param_3 == 2) {
        pcVar4 = "_PRECOM_";
      }
      else {
        pcVar4 = "_";
      }
    }
    else {
      pcVar4 = "_PRECOM_";
    }
    FUN_00460ed0(local_40,local_40,pcVar4);
    FUN_00460ed0(local_40,local_40,iVar2);
    uVar1 = FUN_00460bf0(local_40);
    return uVar1;
  }
  return 0;
}

