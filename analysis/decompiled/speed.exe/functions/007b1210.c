/* speed.exe 007b1210 FUN_007b1210; analysis pseudocode, not buildable source.
 * calls 007a50e0 FUN_007a50e0
 * calls 007b0e00 FUN_007b0e00
 * calls 0058ae50 FUN_0058ae50
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 005816b0 FUN_005816b0
 * calls 00524850 FUN_00524850
 * calls 00575b00 FUN_00575b00
 */

void __fastcall FUN_007b1210(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_007b0e00();
  if (((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) || (DAT_009b9e8d != '\0')) {
    iVar2 = FUN_005816b0();
    if (iVar2 != 0x29) {
      cVar1 = FUN_00575b00();
      if (cVar1 == '\0') {
        if (DAT_009b9e8d == '\0') {
          iVar2 = FUN_0058ae50();
          if (iVar2 < 1) goto LAB_007b1275;
        }
        uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xdc6ee739);
        FUN_00514cc0(uVar3);
        goto LAB_007b1289;
      }
    }
  }
LAB_007b1275:
  uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xdc6ee739);
  FUN_00514c70(uVar3);
LAB_007b1289:
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_007a50e0(*(uint *)(*(int *)(param_1 + 0x38) + 0x50) & 0xffff);
  }
  return;
}

