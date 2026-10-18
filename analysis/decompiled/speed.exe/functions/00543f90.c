/* speed.exe 00543f90 FUN_00543f90; analysis pseudocode, not buildable source.
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 005b8400 FUN_005b8400
 * calls 005252d0 FUN_005252d0
 * calls 0051a230 FUN_0051a230
 * calls 00516be0 FUN_00516be0
 * calls 005b8550 FUN_005b8550
 * calls 0051a1e0 FUN_0051a1e0
 * calls 005af1c0 FUN_005af1c0
 * calls 0056bc10 FUN_0056bc10
 * calls 00527790 FUN_00527790
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 00515e90 FUN_00515e90
 */

void __fastcall FUN_00543f90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_0091cbac = DAT_0091cbac | 0xa000000;
  uVar1 = FUN_0056bc10(0xa0b434a2);
  FUN_00527790(uVar1);
  FUN_0051a230(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cc);
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_00543ff5:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar2 == 0) goto LAB_00543ff5;
    iVar2 = FUN_005b8550(0xb8a7c6cc);
    if (iVar2 == 0) goto LAB_00543ff5;
  }
  FUN_00514cc0(iVar2);
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_00544027:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar2 == 0) goto LAB_00544027;
    iVar2 = FUN_005b8550(0xf9363f30);
    if (iVar2 == 0) goto LAB_00544027;
  }
  FUN_00514cc0(iVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_0056bc10(0x417b25e4);
  FUN_005252d0(uVar1,0xf9363f30,uVar3);
  FUN_0051a230(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cd);
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_00544080:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar2 == 0) goto LAB_00544080;
    iVar2 = FUN_005b8550(0xb8a7c6cd);
    if (iVar2 == 0) goto LAB_00544080;
  }
  FUN_00514cc0(iVar2);
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_005440b2:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar2 == 0) goto LAB_005440b2;
    iVar2 = FUN_005b8550(0xfb8b67d1);
    if (iVar2 == 0) goto LAB_005440b2;
  }
  FUN_00514cc0(iVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_0056bc10(0x2b07a03d);
  FUN_005252d0(uVar1,0xfb8b67d1,uVar3);
  FUN_0051a1e0(*(undefined4 *)(param_1 + 0x10),0xb8a7c6ce);
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_0054410b:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar2 == 0) goto LAB_0054410b;
    iVar2 = FUN_005b8550(0xb8a7c6ce);
    if (iVar2 == 0) goto LAB_0054410b;
  }
  FUN_00514c70(iVar2);
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar2 != 0) {
      iVar2 = FUN_005b8550(0xfde09072);
      if (iVar2 != 0) goto LAB_0054413f;
    }
  }
  iVar2 = 0;
LAB_0054413f:
  FUN_00514c70(iVar2);
  FUN_00515e90(*(undefined4 *)(param_1 + 0x10),0xb8a7c6cc);
  iVar2 = *(int *)(param_1 + 0x10);
  uVar1 = FUN_005af1c0("FORWARD");
  uVar3 = FUN_005af1c0("HANDLER");
  if (iVar2 != 0) {
    iVar2 = FUN_00516af0(iVar2);
    if (iVar2 != 0) {
      iVar2 = FUN_005b8550(uVar3);
      if (iVar2 != 0) {
        iVar2 = FUN_005b1360(uVar1);
        if (iVar2 != 0) {
          FUN_005b8400(iVar2,0);
          *(undefined4 *)(iVar2 + 0x10) = 0;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x74) != '\x01') {
    *(undefined1 *)(param_1 + 0x74) = 1;
    FUN_00516be0(0xc0f2ae7c,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_005af1c0("INITIALIZE_SCREEN");
    FUN_00516be0(uVar3,uVar1,0xfffffffc,0xff);
    *(undefined1 *)(DAT_0091cb20 + 0x26) = *(undefined1 *)(param_1 + 0x74);
  }
  return;
}

