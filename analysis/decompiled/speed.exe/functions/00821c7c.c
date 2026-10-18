/* speed.exe 00821c7c FUN_00821c7c; analysis pseudocode, not buildable source.
 * calls 0081e2cb FUN_0081e2cb
 * calls 00824ff0 FUN_00824ff0
 * calls 00822050 FUN_00822050
 * calls 00825069 FUN_00825069
 * calls 0081e9e7 FUN_0081e9e7
 * calls 00819670 FUN_00819670
 */

void FUN_00821c7c(int param_1,char *param_2,undefined2 *param_3,int param_4,undefined4 *param_5,
                 undefined1 *param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  int *piVar5;
  char *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_00822050(param_3,4);
  FUN_00822050(param_4,0x68);
  FUN_00822050(param_5,0x1c);
  if (((((*param_2 == 'P') && (param_2[1] == 'T')) || (*param_2 != 'G')) ||
      ((param_2[1] != 'S' || (param_2[2] != 'T')))) || (param_2[3] != 'R')) {
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = 0;
    }
    FUN_0081e2cb(param_4);
    local_1c = param_2 + 4;
    *param_3 = 0x5622;
    *(undefined1 *)(param_3 + 1) = 1;
    *(undefined1 *)((int)param_3 + 3) = 10;
    *param_5 = 0;
    iVar2 = FUN_00824ff0(&local_1c);
    if (iVar2 != 0) {
      param_2 = (char *)(param_4 + 0x58);
      do {
        uVar1 = (undefined1)local_14;
        if (local_18 == 0xa0) {
          *(undefined1 *)((int)param_3 + 3) = (undefined1)local_14;
        }
        else if (local_18 == 0x9c) {
          *(undefined2 *)(param_4 + 0xc) = (undefined2)local_14;
        }
        else if (local_18 == 0x9d) {
          *(undefined2 *)(param_4 + 0xe) = (undefined2)local_14;
        }
        else if (local_18 == 0x9e) {
          *(undefined2 *)(param_4 + 0x10) = (undefined2)local_14;
        }
        else if (local_18 == 0x9f) {
          *(undefined2 *)(param_4 + 0x12) = (undefined2)local_14;
        }
        else if (local_18 == 0xa6) {
          *(undefined2 *)(param_4 + 0x14) = (undefined2)local_14;
        }
        else if (local_18 == 0xa7) {
          *(undefined2 *)(param_4 + 0x16) = (undefined2)local_14;
        }
        else if (local_18 == 0x98) {
          uVar3 = FUN_0081e9e7(local_c);
          *(undefined4 *)(param_4 + 0x18) = uVar3;
          FUN_00819670(uVar3,local_10,local_c);
          *(undefined4 *)(param_4 + 0x30) = local_c;
        }
        else if (local_18 == 0x99) {
          uVar3 = FUN_0081e9e7(local_c);
          *(undefined4 *)(param_4 + 0x1c) = uVar3;
          FUN_00819670(uVar3,local_10,local_c);
          *(undefined4 *)(param_4 + 0x34) = local_c;
        }
        else if (local_18 == 0x9a) {
          uVar3 = FUN_0081e9e7(local_c);
          *(undefined4 *)(param_4 + 0x20) = uVar3;
          FUN_00819670(uVar3,local_10,local_c);
          *(undefined4 *)(param_4 + 0x38) = local_c;
        }
        else if (local_18 == 0x9b) {
          uVar3 = FUN_0081e9e7(local_c);
          *(undefined4 *)(param_4 + 0x24) = uVar3;
          FUN_00819670(uVar3,local_10,local_c);
          *(undefined4 *)(param_4 + 0x3c) = local_c;
        }
        else if (local_18 == 0xa4) {
          uVar3 = FUN_0081e9e7(local_c);
          *(undefined4 *)(param_4 + 0x28) = uVar3;
          FUN_00819670(uVar3,local_10,local_c);
          *(undefined4 *)(param_4 + 0x40) = local_c;
        }
        else if (local_18 == 0xa5) {
          uVar3 = FUN_0081e9e7(local_c);
          *(undefined4 *)(param_4 + 0x2c) = uVar3;
          FUN_00819670(uVar3,local_10,local_c);
          *(undefined4 *)(param_4 + 0x44) = local_c;
        }
        else if (local_18 == 0x80) {
          *(undefined1 *)(param_4 + 7) = uVar1;
        }
        else if (local_18 == 0x82) {
          *(undefined1 *)(param_3 + 1) = uVar1;
        }
        else if (local_18 == 0x84) {
          *param_3 = (undefined2)local_14;
        }
        else if (local_18 == 0x85) {
          *param_5 = local_14;
        }
        else if (local_18 != 0x8a) {
          if (local_18 == 0x13) {
            *(undefined1 *)(param_4 + 5) = uVar1;
          }
          else if (local_18 == 10) {
            *(undefined1 *)(param_4 + 6) = uVar1;
          }
          else if (local_18 == 6) {
            *(undefined1 *)(param_4 + 2) = uVar1;
          }
          else if (local_18 == 0x8c) {
            local_8 = local_14;
          }
          else if (local_18 == 0x88) {
            param_5[1] = local_14;
          }
          else if (local_18 == 0x89) {
            param_5[2] = local_14;
          }
          else if (local_18 == 0x94) {
            param_5[3] = local_14;
          }
          else if (local_18 == 0x95) {
            param_5[4] = local_14;
          }
          else if (local_18 == 0xa2) {
            param_5[5] = local_14;
          }
          else if (local_18 == 0xa3) {
            param_5[6] = local_14;
          }
          else if (local_18 == 0x14) {
            *(undefined4 *)((int)param_2 + -0x10) = local_10;
            *(undefined4 *)param_2 = local_c;
            param_2 = (char *)((int)param_2 + 4);
          }
        }
        iVar2 = FUN_00824ff0(&local_1c);
      } while (iVar2 != 0);
    }
    *(undefined2 *)(param_4 + 8) = (undefined2)local_8;
    iVar2 = *(byte *)(param_3 + 1) - 1;
    if (-1 < iVar2) {
      piVar5 = param_5 + *(byte *)(param_3 + 1);
      psVar4 = (short *)(param_4 + 0xc + iVar2 * 2);
      do {
        if ((DAT_009c1fdc == 1) && (*(char *)(param_3 + 1) == '\x02')) {
          *psVar4 = 0;
        }
        *psVar4 = *psVar4 + *(short *)((int)&DAT_009c21f4 +
                                      (iVar2 + (uint)*(byte *)(param_3 + 1) * 6) * 2);
        if (((*(ushort *)(param_4 + 8) & 4) != 0) || (*(ushort *)(param_4 + 8) == 0)) {
          *piVar5 = *piVar5 + param_1;
        }
        iVar2 = iVar2 + -1;
        psVar4 = psVar4 + -1;
        piVar5 = piVar5 + -1;
      } while (-1 < iVar2);
    }
  }
  else {
    FUN_00825069(0,param_2,param_3,param_4,param_5);
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = 1;
    }
  }
  return;
}

