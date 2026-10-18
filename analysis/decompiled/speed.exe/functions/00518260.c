/* speed.exe 00518260 FUN_00518260; analysis pseudocode, not buildable source.
 * calls 0065f680 FUN_0065f680
 * calls 0065aed0 FUN_0065aed0
 * calls 0065f740 FUN_0065f740
 * calls 007f0fd8 FUN_007f0fd8
 * calls 00460c70 FUN_00460c70
 * calls 0056b7e0 FUN_0056b7e0
 * calls 00460ed0 FUN_00460ed0
 * calls 0065f830 FUN_0065f830
 * calls 007f0ef2 FUN_007f0ef2
 * calls 00465a70 FUN_00465a70
 */

void FUN_00518260(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_40 [64];
  
  if (DAT_0091cb20 != 0) {
    FUN_00460c70(local_40,"memcard/LOCALE_");
    if ((param_1 < 0xe) || (0xf < param_1)) {
      uVar2 = FUN_0056b7e0(param_1);
      FUN_00460ed0(local_40,local_40,uVar2);
      FUN_00460ed0(local_40,local_40,&DAT_0089b6b0);
    }
    else {
      FUN_00460ed0(local_40,local_40,"ENGLISH.loc");
    }
    iVar1 = DAT_0091cb20;
    if (*(int *)(DAT_0091cb20 + 0x10) == 0) {
      uVar2 = FUN_00465a70(0x400,0);
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
    }
    uVar2 = FUN_0065f740(local_40);
    uVar3 = FUN_0065f680(local_40,1,1);
    FUN_0065f830(uVar3,*(undefined4 *)(DAT_0091cb20 + 0x10),uVar2);
    FUN_0065aed0(uVar3);
    FUN_007f0fd8(*(undefined4 *)(DAT_0091cb20 + 0x10),1);
    FUN_007f0ef2(*(undefined4 *)(DAT_0091cb20 + 0x10),0,0);
  }
  return;
}

