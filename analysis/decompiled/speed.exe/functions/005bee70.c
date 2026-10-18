/* speed.exe 005bee70 FUN_005bee70; analysis pseudocode, not buildable source.
 * calls 005be560 FUN_005be560
 * calls 005be510 FUN_005be510
 * calls 005bebc0 FUN_005bebc0
 * calls 005bc6c0 FUN_005bc6c0
 * calls 005bc050 FUN_005bc050
 * calls 005bda40 FUN_005bda40
 * calls 005bee20 FUN_005bee20
 * calls 005be1c0 FUN_005be1c0
 * calls 005b2b60 FUN_005b2b60
 * calls 005bc1f0 FUN_005bc1f0
 * calls 005bdd70 FUN_005bdd70
 * calls 005bcb70 FUN_005bcb70
 * calls 00652ac0 _malloc
 * calls 0050d780 FUN_0050d780
 */

int __thiscall FUN_005bee70(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  switch(param_2) {
  case 0:
    return 0;
  case 1:
    pvVar1 = _malloc(0x60);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_005be510();
      goto LAB_005befcc;
    }
    break;
  case 2:
    pvVar1 = _malloc(0x78);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_0050d780();
      goto LAB_005befcc;
    }
    break;
  default:
    pvVar1 = _malloc(0x5c);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_005bc050();
      goto LAB_005befcc;
    }
    break;
  case 4:
    pvVar1 = _malloc(0xac);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_005be1c0();
      goto LAB_005befcc;
    }
    break;
  case 5:
    pvVar1 = _malloc(0x6c);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_005bdd70();
      goto LAB_005befcc;
    }
    break;
  case 6:
    pvVar1 = _malloc(200);
    if (pvVar1 == (void *)0x0) {
      uRam0000005c = *(undefined4 *)(param_1 + 0x38);
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_005bda40();
      *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(param_1 + 0x38);
    }
    goto LAB_005befcc;
  case 7:
    pvVar1 = _malloc(0x60);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_005bc1f0();
      goto LAB_005befcc;
    }
    break;
  case 9:
    pvVar1 = _malloc(0x60);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_005bebc0();
      goto LAB_005befcc;
    }
    break;
  case 10:
    pvVar1 = _malloc(0x60);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_005bee20();
      goto LAB_005befcc;
    }
    break;
  case 0xb:
    pvVar1 = _malloc(0x5c);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_005bc6c0();
      goto LAB_005befcc;
    }
    break;
  case 0xc:
    pvVar1 = _malloc(0x78);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_005be560();
      goto LAB_005befcc;
    }
  }
  iVar2 = 0;
LAB_005befcc:
  *(int *)(iVar2 + 0x18) = param_2;
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x30) != 0) {
    piVar5 = *(int **)(param_1 + 0x34);
    do {
      if (*piVar5 == param_2) {
        iVar6 = (*(int **)(param_1 + 0x34))[uVar3 * 2 + 1];
        goto LAB_005befee;
      }
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 < *(uint *)(param_1 + 0x30));
  }
  iVar6 = 0;
LAB_005befee:
  FUN_005b2b60(*(undefined4 *)(iVar2 + 0x2c));
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  uVar4 = FUN_005bcb70(iVar6);
  *(int *)(iVar2 + 0x30) = iVar6;
  *(undefined4 *)(iVar2 + 0x2c) = uVar4;
  return iVar2;
}

