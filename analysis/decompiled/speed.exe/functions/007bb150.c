/* speed.exe 007bb150 FUN_007bb150; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00515b90 FUN_00515b90
 * calls 00515d70 FUN_00515d70
 * calls 007b63a0 FUN_007b63a0
 * calls 00575b00 FUN_00575b00
 */

void __fastcall FUN_007bb150(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(*(int *)(param_1 + 0x54) + 0x14) == '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    uVar3 = 0xe719881c;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    uVar3 = 0x696ae039;
  }
  FUN_00515b90(uVar2,uVar3);
  FUN_007b63a0();
  if ((*(int *)(*(int *)(param_1 + 0x54) + 0x10) != 0) &&
     (((*(byte *)(DAT_0091cf90 + 300) & 1) != 0 || (DAT_009b9e8d != '\0')))) {
    cVar1 = FUN_00575b00();
    if (cVar1 == '\0') {
      if (*(int *)(*(int *)(param_1 + 0x54) + 0x10) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_007c4b80();
      }
      FUN_00515d70(*(undefined4 *)(param_1 + 0x50),&DAT_0089c2d0,uVar2);
      goto LAB_007bb1ec;
    }
  }
  FUN_00515d70(*(undefined4 *)(param_1 + 0x50),&DAT_00890978);
LAB_007bb1ec:
  if (((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) || (DAT_009b9e8d != '\0')) {
    cVar1 = FUN_00575b00();
    if (cVar1 == '\0') {
      FUN_00515d70(*(undefined4 *)(param_1 + 0x30),&DAT_0089c2d0,
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x54) + 0xc) + 0x24));
      return;
    }
  }
  FUN_00515d70(*(undefined4 *)(param_1 + 0x30),&DAT_00890978);
  return;
}

