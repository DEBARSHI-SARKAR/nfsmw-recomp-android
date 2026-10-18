/* speed.exe 00571d60 FUN_00571d60; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 * calls 00570600 FUN_00570600
 */

undefined4 FUN_00571d60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EDI;
  undefined *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = FUN_005af1c0((&PTR_s_MainMenu_fng_008f4320)[iVar3 * 2]);
    if ((unaff_EDI == iVar1) && ((&PTR_FUN_008f4324)[iVar3 * 2] != (undefined *)0x0)) break;
    iVar3 = iVar3 + 1;
    if (0xb1 < iVar3) {
      return 0;
    }
  }
  local_c = (&PTR_s_MainMenu_fng_008f4320)[iVar3 * 2];
  local_8 = param_1;
  local_4 = param_2;
  uVar2 = (*(code *)(&PTR_FUN_008f4324)[iVar3 * 2])(&local_c);
  return uVar2;
}

