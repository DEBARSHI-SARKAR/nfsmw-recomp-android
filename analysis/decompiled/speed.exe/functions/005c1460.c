/* speed.exe 005c1460 FUN_005c1460; analysis pseudocode, not buildable source.
 * calls 005beaa0 FUN_005beaa0
 * calls 005aef40 FUN_005aef40
 * calls 005bbc00 FUN_005bbc00
 */

void __fastcall FUN_005c1460(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 0x4118);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  FUN_005aef40(puVar1);
joined_r0x005c1484:
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x524e) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x108) + 0x58))
              (puVar1[6],puVar1[4],puVar1[3],puVar1[5],puVar1[7]);
  }
  uVar3 = puVar1[4];
  if (uVar3 < 0xfffffffd) {
    if (uVar3 == 0xfffffffc) {
      iVar5 = *(int *)(param_1 + 0xe0);
      if (iVar5 != 0) {
        do {
          if (iVar5 == puVar1[5]) {
            if (iVar5 != 0) {
              iVar2 = *(int *)(iVar5 + 0x5c);
              goto joined_r0x005c161b;
            }
            break;
          }
          iVar5 = *(int *)(iVar5 + 4);
        } while (iVar5 != 0);
      }
    }
    else if (uVar3 == 0) {
      for (iVar5 = *(int *)(param_1 + 0xe0); iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
        for (iVar2 = *(int *)(iVar5 + 0x5c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
          if (*(int *)(iVar2 + 0xc) == puVar1[6]) {
            if (iVar2 != 0) {
              FUN_005bbc00(iVar2,0,iVar5,puVar1[7]);
            }
            break;
          }
        }
        uVar3 = 0;
        if (*(uint *)(iVar5 + 0x6c) != 0) {
          iVar2 = puVar1[6];
          piVar4 = *(int **)(iVar5 + 0x70);
          do {
            if (*piVar4 == iVar2) {
              piVar4 = *(int **)(iVar5 + 0x70) + uVar3 * 4;
              if (piVar4 != (int *)0x0) {
                uVar3 = piVar4[2];
                uVar6 = 0;
                if (uVar3 != 0) {
                  do {
                    FUN_005beaa0(*(undefined4 *)(piVar4[3] + uVar6 * 4),iVar5,iVar2,puVar1[7]);
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < uVar3);
                }
              }
              break;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 < *(uint *)(iVar5 + 0x6c));
        }
      }
    }
    else if (uVar3 == 0xfffffffa) {
      if (puVar1[6] == 0x59bed120) {
        if (puVar1[5] != 0) {
          *(undefined1 *)(puVar1[5] + 0x28) = 1;
        }
      }
      else if ((puVar1[6] == 0x5d4ce32d) && (puVar1[5] != 0)) {
        *(undefined1 *)(puVar1[5] + 0x28) = 0;
      }
    }
    else {
      if (uVar3 != 0xfffffffb) goto LAB_005c16c1;
      (**(code **)(**(int **)(param_1 + 0x108) + 0x1c))(puVar1[6],puVar1[3],puVar1[7],puVar1[5]);
    }
  }
  else if (uVar3 == 0xfffffffd) {
    for (iVar5 = *(int *)(puVar1[5] + 0x5c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
      if (*(int *)(iVar5 + 0xc) == puVar1[6]) {
        if (iVar5 != 0) {
          FUN_005bbc00(iVar5,0,puVar1[5],puVar1[7]);
        }
        break;
      }
    }
  }
  else if (uVar3 == 0xfffffffe) {
    for (iVar5 = *(int *)(param_1 + 0xe0); iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
      for (iVar2 = *(int *)(iVar5 + 0x5c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        if (*(int *)(iVar2 + 0xc) == puVar1[6]) {
          if (iVar2 != 0) {
            FUN_005bbc00(iVar2,0,iVar5,puVar1[7]);
          }
          break;
        }
      }
    }
  }
  else if (uVar3 == 0xffffffff) {
    (**(code **)(**(int **)(param_1 + 0x108) + 0x18))(puVar1[6],puVar1[3],puVar1[7],puVar1[5]);
  }
  else {
LAB_005c16c1:
    FUN_005beaa0(uVar3,puVar1[5],puVar1[6],puVar1[7]);
  }
  goto LAB_005c176e;
joined_r0x005c161b:
  if (iVar2 == 0) goto LAB_005c163e;
  if (*(int *)(iVar2 + 0xc) == puVar1[6]) {
    if (iVar2 != 0) {
      FUN_005bbc00(iVar2,0,iVar5,puVar1[7]);
    }
    goto LAB_005c163e;
  }
  iVar2 = *(int *)(iVar2 + 4);
  goto joined_r0x005c161b;
LAB_005c163e:
  uVar3 = 0;
  if (*(uint *)(iVar5 + 0x6c) != 0) {
    iVar2 = puVar1[6];
    piVar4 = *(int **)(iVar5 + 0x70);
    do {
      if (*piVar4 == iVar2) {
        piVar4 = *(int **)(iVar5 + 0x70) + uVar3 * 4;
        if (piVar4 != (int *)0x0) {
          uVar3 = piVar4[2];
          uVar6 = 0;
          if (uVar3 != 0) {
            do {
              FUN_005beaa0(*(undefined4 *)(piVar4[3] + uVar6 * 4),iVar5,iVar2,puVar1[7]);
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar3);
          }
        }
        break;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 < *(uint *)(iVar5 + 0x6c));
  }
LAB_005c176e:
  (**(code **)*puVar1)(1);
  puVar1 = *(undefined4 **)(param_1 + 0x4118);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x4118) = puVar1[1];
  if (puVar1 == *(undefined4 **)(param_1 + 0x411c)) {
    *(undefined4 *)(param_1 + 0x411c) = puVar1[2];
  }
  if (puVar1[2] != 0) {
    *(undefined4 *)(puVar1[2] + 4) = puVar1[1];
  }
  if (puVar1[1] != 0) {
    *(undefined4 *)(puVar1[1] + 8) = puVar1[2];
  }
  puVar1[1] = 0xabadcafe;
  puVar1[2] = 0xabadcafe;
  *(int *)(param_1 + 0x4114) = *(int *)(param_1 + 0x4114) + -1;
  goto joined_r0x005c1484;
}

