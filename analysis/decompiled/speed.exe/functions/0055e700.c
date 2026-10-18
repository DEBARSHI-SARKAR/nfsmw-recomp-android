/* speed.exe 0055e700 FUN_0055e700; analysis pseudocode, not buildable source.
 * calls 005137f0 FUN_005137f0
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 0051dcf0 FUN_0051dcf0
 * calls 005868e0 FUN_005868e0
 * calls 005252d0 FUN_005252d0
 * calls 005922b0 FUN_005922b0
 * calls 00523af0 FUN_00523af0
 * calls 005231a0 FUN_005231a0
 * calls 00592710 FUN_00592710
 * calls 0056dbe0 FUN_0056dbe0
 * calls 00556540 FUN_00556540
 * calls 00516af0 FUN_00516af0
 */

void __fastcall FUN_0055e700(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  FUN_005137f0(*(undefined4 *)(param_1 + 0x10),param_1 + 0x148,param_1 + 0x104,param_1 + 0x18c);
  puVar2 = _malloc(0x2c);
  iVar7 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar2 + 3;
    *puVar2 = &PTR_FUN_0089d348;
    *puVar4 = puVar4;
    puVar2[4] = puVar4;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 10) = 1;
  }
  if ((((*(int *)(param_1 + 0x10) == 0) ||
       (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 == 0)) ||
      (iVar3 = FUN_005b8550(0x4b4e3888), iVar3 == 0)) || (*(int *)(iVar3 + 0x18) != 2)) {
    iVar3 = 0;
  }
  puVar4 = _malloc(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_0089c2bc;
    puVar4[3] = iVar3;
    piVar5 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)puVar2[4];
  *puVar4 = piVar5;
  puVar2[4] = piVar5;
  *piVar5 = (int)(puVar2 + 3);
  piVar5[1] = (int)puVar4;
  FUN_005922b0(puVar2);
  puVar2 = _malloc(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar2 + 3;
    *puVar2 = &PTR_FUN_0089d348;
    *puVar4 = puVar4;
    puVar2[4] = puVar4;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 10) = 1;
  }
  if (((*(int *)(param_1 + 0x10) != 0) &&
      (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0)) &&
     ((iVar3 = FUN_005b8550(0x4b4e3889), iVar3 != 0 && (*(int *)(iVar3 + 0x18) == 2)))) {
    iVar7 = iVar3;
  }
  puVar4 = _malloc(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_0089c2bc;
    puVar4[3] = iVar7;
    piVar5 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)puVar2[4];
  *puVar4 = piVar5;
  puVar2[4] = piVar5;
  *piVar5 = (int)(puVar2 + 3);
  piVar5[1] = (int)puVar4;
  FUN_005922b0(puVar2);
  puVar2 = _malloc(0x18);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar2 + 3;
    *puVar2 = &PTR_FUN_0089d344;
    *puVar4 = puVar4;
    puVar2[4] = puVar4;
    *(undefined1 *)(puVar2 + 5) = 1;
  }
  FUN_0051dcf0(&DAT_0089efd8,0);
  FUN_005868e0(puVar2);
  FUN_00592710(puVar2);
  puVar2 = _malloc(0x18);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar2 + 3;
    *puVar2 = &PTR_FUN_0089d344;
    *puVar4 = puVar4;
    puVar2[4] = puVar4;
    *(undefined1 *)(puVar2 + 5) = 1;
  }
  FUN_0051dcf0(&DAT_0089efd4,0);
  FUN_005868e0(puVar2);
  FUN_00592710(puVar2);
  iVar7 = FUN_0056dbe0(0xb);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar7 + 0x10);
  *(undefined4 *)(param_1 + 0xf8) = 1;
  FUN_00556540();
  cVar1 = FUN_005231a0(*(undefined4 *)(param_1 + 0x3c));
  do {
    if (cVar1 != '\0') {
LAB_0055e976:
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x6f25a248,&DAT_0089d764,
                   *(int *)(param_1 + 0xfc) + 1);
      FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xb2037bdc,&DAT_0089d764,
                   *(undefined4 *)(param_1 + 0x100));
      FUN_00523af0();
      return;
    }
    uVar6 = *(uint *)(param_1 + 0xf8) & 0xffff;
    if (uVar6 == 8) {
      iVar7 = 1;
    }
    else {
      iVar7 = uVar6 << 1;
    }
    *(int *)(param_1 + 0xf8) = iVar7;
    FUN_00556540();
    if ((*(byte *)(param_1 + 0xf8) & 1) != 0) {
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8);
      goto LAB_0055e976;
    }
    cVar1 = FUN_005231a0(*(undefined4 *)(param_1 + 0x3c));
  } while( true );
}

