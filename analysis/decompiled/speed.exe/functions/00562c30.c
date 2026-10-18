/* speed.exe 00562c30 FUN_00562c30; analysis pseudocode, not buildable source.
 * calls 00544370 FUN_00544370
 * calls 00527790 FUN_00527790
 * calls 00460c70 FUN_00460c70
 * calls 005b7780 FUN_005b7780
 * calls 00515d70 FUN_00515d70
 * calls 00559d60 FUN_00559d60
 * calls 00519550 FUN_00519550
 * calls 00516be0 FUN_00516be0
 * calls 0056bc10 FUN_0056bc10
 * calls 0054f9a0 FUN_0054f9a0
 * calls 00518090 FUN_00518090
 * calls 00544510 FUN_00544510
 * calls 005184d0 FUN_005184d0
 * calls 005af1c0 FUN_005af1c0
 * calls 00519730 FUN_00519730
 * calls 0056db00 FUN_0056db00
 * calls 005268b0 FUN_005268b0
 * calls 00559e90 FUN_00559e90
 * calls 00543cc0 FUN_00543cc0
 * calls 00562ab0 FUN_00562ab0
 * calls 00518840 FUN_00518840
 */

void __fastcall FUN_00562c30(int param_1)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
joined_r0x00562c3c:
  if (DAT_008f8708 == 0) {
    FUN_00516be0(0x461a18ee,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
    return;
  }
  FUN_00527790(&DAT_0089dfa0);
  puVar1 = (uint *)(*(int *)(param_1 + 0x30) + 0x1c);
  *puVar1 = *puVar1 | 0x80;
  if ((DAT_0091cbac & 0x4000) != 0) {
    FUN_00516be0(0x5afe12f4,DAT_0091cbb0,0xffffffff,0xff);
  }
  if (((DAT_0091cbac & 0x400000) != 0) ||
     (((DAT_0091cbac & 0x10000) != 0 && (((byte)DAT_0091cbac & 0xf0) == 0xb0)))) {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_005af1c0("MEMCARD_ON");
    FUN_00516be0(uVar3,uVar4,0xfffffffc,0xff);
  }
  uVar5 = DAT_0091cbac & 0xf0;
  switch(uVar5) {
  case 0x10:
  case 0x70:
    if ((*(char *)(DAT_0091cf90 + 3) != '\0') && ((DAT_0091cbac & 0x20000) == 0)) {
      FUN_00543cc0(0x87c7577e,0x6000000);
      return;
    }
    break;
  case 0x20:
    cVar2 = FUN_00518090();
    if ((cVar2 == '\0') || (DAT_008f8708 == 0)) {
      FUN_00519730(0x8867412d);
      return;
    }
    break;
  case 0x30:
    FUN_0054f9a0();
    *(undefined1 *)(param_1 + 0x68) = 0;
    break;
  case 0x40:
  case 0x60:
    if (*DAT_0091cadc == -0xd8) {
      return;
    }
    iVar6 = *(int *)(*DAT_0091cadc + 0xe0);
    if (iVar6 == 0) {
      return;
    }
    do {
      FUN_005b7780(0x5a051729,0,iVar6,0xffffffff,0);
      iVar6 = *(int *)(iVar6 + 4);
    } while (iVar6 != 0);
    return;
  case 0x50:
    uVar4 = FUN_0056db00();
    FUN_00460c70(param_1 + 0x40,uVar4);
    FUN_00544370(6);
    return;
  case 0x80:
    FUN_00518840(0);
    return;
  case 0x90:
    *(undefined1 *)(param_1 + 0x84) = 1;
    FUN_00559e90();
    return;
  case 0xa0:
    if ((char)(DAT_0091cbac >> 8) < '\0') {
      FUN_005268b0(1);
      return;
    }
    FUN_0054f9a0();
    *(undefined1 *)(param_1 + 0x68) = 0;
    FUN_00543cc0(0x750eb45c,0xc000000);
    return;
  case 0xb0:
    goto switchD_00562ce8_caseD_b0;
  default:
    return;
  case 0xd0:
    *(undefined1 *)(param_1 + 0x84) = 1;
    FUN_00544510();
    return;
  }
  FUN_00559d60();
  return;
switchD_00562ce8_caseD_b0:
  if (*(char *)(DAT_0091cf90 + 3) == '\0') {
    DAT_0091cbac = DAT_0091cbac & 0xffffff6f | 0x60;
    DAT_0091cbc8 = uVar5;
  }
  else {
    cVar2 = FUN_005184d0(0);
    if (cVar2 != '\0') {
      uVar4 = FUN_0056db00();
      uVar4 = FUN_0056bc10(0x50d23ebd,uVar4);
      FUN_00515d70(*(undefined4 *)(param_1 + 0x30),uVar4);
      FUN_00519550(1,0);
      FUN_0054f9a0();
      *(undefined1 *)(param_1 + 0x68) = 0;
      uVar4 = FUN_0056db00();
      FUN_00460c70(param_1 + 0x40,uVar4);
      FUN_00562ab0(1);
      return;
    }
    DAT_0091cbc8 = DAT_0091cbac & 0xf0;
    DAT_0091cbac = DAT_0091cbac & 0xffffff5f | 0x50;
  }
  goto joined_r0x00562c3c;
}

