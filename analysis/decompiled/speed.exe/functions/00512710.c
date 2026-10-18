/* speed.exe 00512710 FUN_00512710; analysis pseudocode, not buildable source.
 * calls 0078b350 FUN_0078b350
 * calls 0078b380 FUN_0078b380
 * calls 0056e320 FUN_0056e320
 * calls 00794790 FUN_00794790
 * calls 00796520 FUN_00796520
 * calls 00460ca0 FUN_00460ca0
 * calls 0056e360 FUN_0056e360
 */

undefined * __fastcall FUN_00512710(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_00794790();
  cVar2 = FUN_0078b350();
  if (cVar2 != '\x01') {
    return PTR_s_OL_MAIN_fng_008f3280;
  }
  iVar3 = FUN_0078b380();
  iVar1 = DAT_0091ca68;
  if (iVar3 == 1) {
    return PTR_s_OLEALogin_fng_008f325c;
  }
  if (iVar3 == 2) {
    if (*(char *)(param_1 + 0xc) != '\x01') {
      if (*(char *)(param_1 + 0xf) == '\x01') {
        return PTR_s_OL_PC_REGISTRATION_fng_008f3274;
      }
      if (*(int *)(param_1 + 4) != 0) {
        if (*(int *)(param_1 + 4) != 1) {
          return PTR_s_OL_MAIN_fng_008f3280;
        }
        return PTR_s_OL_UseExisting_fng_008f327c;
      }
      return PTR_s_OL_Create_Account_fng_008f3268;
    }
  }
  else {
    if (iVar3 == 3) {
      FUN_00796520();
      return PTR_s_UI_OL_WebOffer2_fng_008f3260;
    }
    if (iVar3 != 5) {
      return (undefined *)0x0;
    }
  }
  uVar4 = FUN_0056e320(0x10);
  FUN_00460ca0(iVar1 + 0x13,uVar4);
  iVar1 = DAT_0091ca68;
  uVar4 = FUN_0056e360(0x10);
  FUN_00460ca0(iVar1 + 0x27,uVar4);
  return PTR_s_OL_SelectPersona_fng_008f3264;
}

