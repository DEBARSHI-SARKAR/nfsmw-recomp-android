/* speed.exe 00510450 FUN_00510450; analysis pseudocode, not buildable source.
 * calls 00510300 FUN_00510300
 */

void __fastcall FUN_00510450(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *(int *)(DAT_0091cf90 + 0x10);
  switch(*(undefined4 *)(iVar3 + 0x24)) {
  case 0:
    puVar2 = *(undefined4 **)(param_1 + 0x130);
    puVar4 = (undefined4 *)(iVar3 + 0x4c);
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    return;
  case 1:
    puVar2 = *(undefined4 **)(param_1 + 0x14c);
    puVar4 = *(undefined4 **)(param_1 + 0x144);
    for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x150);
    FUN_00510300();
    return;
  case 2:
  case 5:
  case 6:
  case 7:
  case 8:
    return;
  case 3:
    puVar4 = *(undefined4 **)(param_1 + 0x138);
    puVar2 = (undefined4 *)(iVar3 + 0x38);
    break;
  case 4:
    puVar2 = (undefined4 *)(iVar3 + 0x80 + DAT_0091ca24 * 0x14);
    puVar4 = *(undefined4 **)(param_1 + 0x13c);
    break;
  case 9:
    puVar2 = *(undefined4 **)(param_1 + 0x140);
    puVar4 = (undefined4 *)(DAT_0091cf90 + 0x134);
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    return;
  default:
    return;
  }
  *puVar2 = *puVar4;
  puVar2[1] = puVar4[1];
  puVar2[2] = puVar4[2];
  puVar2[3] = puVar4[3];
  puVar2[4] = puVar4[4];
  return;
}

