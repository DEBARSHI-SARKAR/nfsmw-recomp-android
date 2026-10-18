/* speed.exe 00798ec0 FUN_00798ec0; analysis pseudocode, not buildable source.
 * calls 00844a50 FUN_00844a50
 * calls 00794f80 FUN_00794f80
 * calls 00796590 FUN_00796590
 */

undefined4 __fastcall FUN_00798ec0(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    return 0;
  }
  iVar1 = FUN_00794f80();
  if (*(int *)(iVar1 + 0x38) != 0) {
    iVar1 = FUN_00794f80(0,&LAB_0078e570,param_1);
    iVar1 = FUN_00844a50(*(undefined4 *)(iVar1 + 0x38));
    *param_1 = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
    FUN_00796590();
  }
  return 0xffffffff;
}

