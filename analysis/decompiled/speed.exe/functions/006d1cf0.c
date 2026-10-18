/* speed.exe 006d1cf0 FUN_006d1cf0; analysis pseudocode, not buildable source.
 * calls 006c0ab0 FUN_006c0ab0
 * calls 00503400 FUN_00503400
 * calls 006d1220 FUN_006d1220
 * calls 006c0c30 FUN_006c0c30
 * calls 006c0b60 FUN_006c0b60
 * calls 00460bf0 FUN_00460bf0
 */

void FUN_006d1cf0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_00982bd4 == '\0') {
    FUN_006c0b60();
    DAT_00982bd4 = '\x01';
  }
  iVar3 = (-(uint)(*(char *)(DAT_0093dec4 + 0x40) != '\0') & 0x2f41ccc7) + 0xbe43edbb;
  iVar1 = FUN_006c0ab0(&DAT_00986f50,&DAT_00987f10,iVar3);
  if (iVar1 != 0) {
    if (iVar3 == -0x41bc1245) {
      FUN_006d1220(&DAT_00986f50);
    }
    else {
      FUN_006c0c30(0xed85ba82);
    }
    uVar2 = FUN_00460bf0("SKY_NEXGEN_CAP_A",1,0);
    DAT_009829f0 = FUN_00503400(uVar2);
    uVar2 = FUN_00460bf0("SKY_NEXGEN_CLOUDS_B",1,0);
    DAT_009829f4 = FUN_00503400(uVar2);
    uVar2 = FUN_00460bf0("SKY_NEXGEN_CAP_B",1,0);
    DAT_009829f8 = FUN_00503400(uVar2);
    DAT_00982bcc = 1;
  }
  return;
}

