/* speed.exe 004e8880 FUN_004e8880; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 004e52c0 FUN_004e52c0
 * calls 00454810 FUN_00454810
 */

void __fastcall FUN_004e8880(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00454810(0x4935eab,0);
  if (iVar1 == 0) {
    iVar1 = FUN_006269b0(0x10);
  }
  if ((*(undefined1 **)(iVar1 + 0xc) != (undefined1 *)0x0) &&
     (*(undefined1 **)(iVar1 + 0xc) != &DAT_00890978)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x228);
    uVar2 = 0xffffffff;
    if ((iVar1 == 1) || (iVar1 == 2)) {
      uVar2 = 0;
    }
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x2c) = 1;
    if (*(int *)(iVar1 + 0x34) == 0) {
      iVar1 = iVar1 + 0x48;
    }
    else {
      iVar1 = iVar1 + 0xd0;
    }
    iVar1 = *(int *)(iVar1 + 8);
    FUN_004e52c0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14),
                 *(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c),1,4,uVar2,1);
  }
  return;
}

