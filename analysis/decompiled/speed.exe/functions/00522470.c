/* speed.exe 00522470 FUN_00522470; analysis pseudocode, not buildable source.
 * calls 00586d90 FUN_00586d90
 * calls 00796280 FUN_00796280
 * calls 0056bc10 FUN_0056bc10
 * calls 00586950 FUN_00586950
 * calls 00521fe0 FUN_00521fe0
 * calls 0079bac0 FUN_0079bac0
 */

void __fastcall FUN_00522470(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00586d90();
  if (iVar1 != 0) {
    uVar2 = FUN_00586d90();
    iVar1 = FUN_00586950(uVar2);
    if (-1 < *(int *)(iVar1 + 0x18)) {
      iVar1 = iVar1 + 0x1c;
      FUN_0079bac0(iVar1);
      iVar1 = FUN_00796280(iVar1);
      if (iVar1 != 0) {
        if ((*(uint *)(iVar1 + 0xc) & 0x200) != 0) {
          *(undefined1 *)(DAT_0091cf90 + 0x141) = 1;
          FUN_00521fe0();
          return;
        }
        *(undefined1 *)(DAT_0091cf90 + 0x141) = 0;
        DAT_0091ca74 = 0;
        *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)(DAT_0091cf90 + 0x175);
        FUN_00521fe0();
        return;
      }
      uVar2 = FUN_0056bc10(0x4b5c9721);
      *(undefined4 *)(param_1 + 0x1b4) = 0x417b2601;
      *(undefined4 *)(param_1 + 0x1b8) = 0xb1fb0b6;
      *(undefined4 *)(param_1 + 0x1bc) = 0xb1fb0b6;
      *(undefined4 *)(param_1 + 0x1c0) = uVar2;
      *(undefined1 *)(param_1 + 0x1b0) = 1;
    }
  }
  return;
}

