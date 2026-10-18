/* speed.exe 004c48c0 FUN_004c48c0; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 004c4690 FUN_004c4690
 * calls 007edb0e FUN_007edb0e
 */

void FUN_004c48c0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint local_4;
  
  local_4 = 0;
  if (((param_1 != (int *)0x0) && (piVar1 = (int *)*param_1, *piVar1 == 0x4d525453)) &&
     (puVar2 = (undefined4 *)piVar1[0x1c], puVar2 != (undefined4 *)0x0)) {
    while ((puVar2[1] == 1 || (puVar2[1] == 2))) {
      FUN_004c4690(param_1,*puVar2);
      puVar2 = (undefined4 *)piVar1[0x1c];
    }
    if (piVar1[0x1a] != piVar1[0x1b]) {
      do {
        iVar3 = piVar1[0x1a];
        if (iVar3 == piVar1[0x1a]) {
          piVar1[0x1a] = *(int *)(iVar3 + 0xc);
        }
        else {
          *(int *)(*(int *)(iVar3 + 8) + 0xc) = *(int *)(iVar3 + 0xc);
        }
        if (iVar3 == piVar1[0x1c]) {
          piVar1[0x1c] = *(int *)(iVar3 + 8);
        }
        else {
          *(int *)(*(int *)(iVar3 + 0xc) + 8) = *(int *)(iVar3 + 8);
        }
        if (iVar3 == piVar1[0x1b]) {
          if (*(int *)(iVar3 + 0xc) == 0) {
            piVar1[0x1b] = *(int *)(iVar3 + 8);
          }
          else {
            piVar1[0x1b] = *(int *)(iVar3 + 0xc);
          }
        }
        *(undefined4 *)(iVar3 + 4) = 0;
        *(int *)(iVar3 + 0xc) = piVar1[0x1d];
        piVar1[0x1d] = iVar3;
      } while (piVar1[0x1a] != piVar1[0x1b]);
    }
    *(undefined4 *)(piVar1[0x1b] + 4) = 4;
    iVar3 = 0;
    if (0 < piVar1[0xd]) {
      iVar5 = 0;
      do {
        *(undefined4 *)(piVar1[0xc] + 8 + iVar5) = 0;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x10;
      } while (iVar3 < piVar1[0xd]);
    }
    iVar3 = piVar1[0x16];
    FUN_007ec1bd();
    iVar5 = piVar1[0x16];
    iVar3 = iVar5 - iVar3;
    piVar1[0x16] = iVar3;
    FUN_007ec1c8();
    if (((piVar1[0x14] <= iVar5) && (iVar3 < piVar1[0x14])) && (piVar1[0x15] = 1, piVar1[0x11] == 1)
       ) {
      FUN_007edb0e(piVar1[0x61],piVar1[0x13]);
    }
    piVar4 = (int *)piVar1[0x17];
    if (piVar4 != (int *)piVar1[0x18]) {
      do {
        if (*piVar4 == -1) {
          piVar4 = (int *)piVar1[0xf];
        }
        else {
          local_4 = piVar4[1] & 0xffffff;
          *piVar4 = -2;
          piVar4[1] = local_4;
          piVar4 = (int *)((int)piVar4 + local_4);
        }
      } while (piVar4 != (int *)piVar1[0x18]);
    }
    if (piVar1[0x11] == 2) {
      if (piVar4 == (int *)piVar1[0xf]) {
        piVar1[0x18] = piVar1[0xe];
        piVar1[0xf] = piVar1[0xe];
        piVar1[0x11] = 0;
        return;
      }
      iVar3 = 0x40 - (piVar1[0x18] & 0x3fU);
      if (iVar3 == 0x40) {
        iVar3 = 0;
      }
      *(uint *)((piVar1[0x18] - local_4) + 4) = local_4 + iVar3;
      piVar1[0x18] = piVar1[0x18] + iVar3;
      piVar1[0x11] = 0;
    }
  }
  return;
}

