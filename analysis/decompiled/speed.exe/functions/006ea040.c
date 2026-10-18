/* speed.exe 006ea040 FUN_006ea040; analysis pseudocode, not buildable source.
 * calls 005e9b80 FUN_005e9b80
 * calls 005faa20 FUN_005faa20
 * calls 005fb710 FUN_005fb710
 * calls 005e9ae0 FUN_005e9ae0
 * calls 005e9a70 FUN_005e9a70
 * calls 005e39e0 FUN_005e39e0
 * calls 005fbee0 FUN_005fbee0
 * calls 005dca00 FUN_005dca00
 * calls 00603440 FUN_00603440
 * calls 005dce50 FUN_005dce50
 * calls 004519d0 FUN_004519d0
 * calls 005e9a90 FUN_005e9a90
 * calls 005dce60 FUN_005dce60
 * calls 00600ab0 FUN_00600ab0
 */

void FUN_006ea040(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((DAT_00926064 != 0) && (iVar2 = FUN_005dca00(), iVar2 == 0)) && (DAT_00926068 != '\0')) {
    uVar3 = FUN_004519d0(&DAT_00926068);
    iVar2 = FUN_005fb710(uVar3);
    if (iVar2 != 0) {
      uVar4 = FUN_00603440(iVar2);
      FUN_005dce50(DAT_00926084 == 1);
      cVar1 = FUN_005fbee0();
      uVar3 = DAT_008f86bc;
      if (cVar1 == '\0') {
        uVar3 = 1;
      }
      FUN_005e9a70(uVar3);
      FUN_005e9a90((DAT_00926094 != 0) - 1 & DAT_00926090);
      FUN_005dce60(DAT_00926080);
      FUN_005e9ae0(DAT_008f86cc);
      if (DAT_008f86c0 != 0) {
        FUN_005e9b80(0);
      }
      uVar3 = FUN_005faa20();
      *(undefined4 *)(DAT_0091cf90 + 0x18) = uVar3;
      FUN_00600ab0(uVar4,0);
      FUN_005e39e0(uVar4);
    }
  }
  return;
}

