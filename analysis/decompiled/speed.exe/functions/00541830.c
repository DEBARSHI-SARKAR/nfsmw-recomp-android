/* speed.exe 00541830 FUN_00541830; analysis pseudocode, not buildable source.
 * calls 0056bc10 FUN_0056bc10
 * calls 0056bc00 FUN_0056bc00
 * calls 0056e560 FUN_0056e560
 * calls 005fba70 FUN_005fba70
 * calls 00525220 FUN_00525220
 * calls 005252d0 FUN_005252d0
 * calls 005fb710 FUN_005fb710
 */

void __fastcall FUN_00541830(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  uVar4 = 0;
  if (iVar2 == 0) {
    uVar4 = 0xb94fd70e;
  }
  else if (iVar2 == 1) {
    uVar4 = 0x34fa2c1;
  }
  else if (iVar2 == 2) {
    uVar4 = 0x6f547e4c;
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xca49d8b,uVar4);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xca49d8c,
               (-(uint)(*(int *)(param_1 + 0x40) != 0) & 0x58b0443d) + 0xe1f1271);
  iVar2 = FUN_005fb710(*(undefined4 *)(param_1 + 0x58));
  if (iVar2 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = 0x7818f85e;
  }
  else {
    uVar3 = FUN_0056e560("TRACKNAME_",iVar2);
    cVar1 = FUN_0056bc00(uVar3);
    if (cVar1 == '\0') {
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = FUN_005fba70();
      FUN_005252d0(uVar4,0xca49d8d,uVar3);
      goto LAB_005418f1;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x10);
  }
  FUN_00525220(uVar4,0xca49d8d,uVar3);
LAB_005418f1:
  if (*(int *)(param_1 + 0x3c) == 1) {
    uVar4 = *(undefined4 *)(param_1 + 0x54);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    puVar5 = &DAT_0089d764;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 0x7f2f7ad6;
    puVar5 = (undefined *)FUN_0056bc10(0x7f2f7ad6);
  }
  FUN_005252d0(uVar3,0xca49d8e,puVar5,uVar4);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xca49d8f,
               (-(uint)(*(int *)(param_1 + 0x50) != 0) & 0xd09b4042) + 0x70dfe5c2);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xca49d90,
               (-(uint)(*(int *)(param_1 + 0x48) != 0) & 0xd09b4042) + 0x70dfe5c2);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xca49d91,
               (-(uint)(*(int *)(param_1 + 0x4c) != 0) & 0xd09b4042) + 0x70dfe5c2);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xca49d92,"%d / 4",*(undefined4 *)(param_1 + 0x44));
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xca49d93,
               (-(uint)(*(int *)(param_1 + 0x140) != 0) & 0x2f64ea54) + 0x417b25e4);
  return;
}

