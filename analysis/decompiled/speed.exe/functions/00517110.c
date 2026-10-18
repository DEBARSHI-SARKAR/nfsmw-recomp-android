/* speed.exe 00517110 FUN_00517110; analysis pseudocode, not buildable source.
 * calls 00573020 FUN_00573020
 * calls 00736190 FUN_00736190
 * calls 0078b010 FUN_0078b010
 * calls 0078b2f0 FUN_0078b2f0
 * calls 0078b260 FUN_0078b260
 * calls 0079f450 FUN_0079f450
 */

void FUN_00517110(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar3 = FUN_0078b260();
  cVar2 = FUN_0078b2f0();
  if ((cVar2 != '\0') && (1 < *(int *)(DAT_0091cf90 + 0x19c))) {
    cVar2 = FUN_0078b010();
    if ((cVar2 != '\0') && ((iVar3 != 1 && (iVar3 != 3)))) {
      cVar2 = FUN_00736190();
      if (cVar2 != '\x01') {
        DAT_0091ca60 = 0;
        DAT_0091ca64 = 0;
        DAT_0091ca5c = 0;
        DAT_0091ca65 = 0;
        if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
          uVar5 = *(uint *)(DAT_0091cf90 + 300) | 8;
        }
        else {
          uVar5 = *(uint *)(DAT_0091cf90 + 300) | 0x40;
        }
        *(uint *)(DAT_0091cf90 + 300) = uVar5;
        uVar4 = FUN_00573020((int)*(char *)(DAT_0091cf90 + 0xc));
        iVar3 = DAT_0091cae0;
        puVar1 = PTR_s_OL_GameRoom_fng_008f32b0;
        if (1 < *(int *)(DAT_0091cf90 + 0x19c)) {
          *(undefined4 *)(DAT_0091cae0 + 0x10) = 0;
          *(undefined **)(iVar3 + 0xc) = puVar1;
          *(undefined4 *)(iVar3 + 0x14) = uVar4;
          return;
        }
        *(undefined4 *)(DAT_0091cae0 + 0x10) = 0;
        *(char **)(iVar3 + 0xc) = "OL_MAIN.FNG";
        *(undefined4 *)(iVar3 + 0x14) = uVar4;
        return;
      }
    }
  }
  FUN_0079f450();
  iVar3 = DAT_0091cae0;
  *(undefined4 *)(DAT_0091cae0 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(char **)(iVar3 + 0xc) = "MainMenu.fng";
  return;
}

