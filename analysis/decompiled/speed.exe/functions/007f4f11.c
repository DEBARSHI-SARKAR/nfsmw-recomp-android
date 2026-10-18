/* speed.exe 007f4f11 FUN_007f4f11; analysis pseudocode, not buildable source.
 * calls 007dbbc0 __write
 * calls 007f4137 FUN_007f4137
 * calls 007f4b97 FUN_007f4b97
 * calls 007f5c07 FUN_007f5c07
 * calls 007f4275 FUN_007f4275
 * calls 007f43e4 FUN_007f43e4
 * calls 007f5a37 FUN_007f5a37
 * calls 007d74c0 __close
 * calls 007f5a71 FUN_007f5a71
 * calls 007f66a8 FUN_007f66a8
 * calls 007e4790 __open
 * calls 007c6100 _sprintf
 * calls 007f5ac3 FUN_007f5ac3
 */

void __fastcall FUN_007f4f11(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char local_174 [264];
  undefined1 local_6c [103];
  char local_5;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 9) {
    pcVar3 = local_174;
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    _sprintf(local_174,"%s/%s",param_1 + 0x18c,param_1 + 0xb4);
    local_5 = '\0';
    FUN_007f4137();
    FUN_007f4275(local_174);
    do {
      if (*(int *)(param_1 + 0x2c4) != 0) break;
      if (*(int *)(param_1 + 0x2ec) == 1) {
        local_5 = '\x01';
      }
      FUN_007f4275(local_174);
    } while (local_5 == '\0');
    if (local_5 != '\0') {
      FUN_007f5ac3();
      FUN_007f5a37(7,0x304);
      FUN_007f4b97(local_6c);
      *(undefined4 *)(param_1 + 0x70) = 10;
      return;
    }
LAB_007f5183:
    *(undefined4 *)(param_1 + 0x70) = 0xb;
  }
  else {
    if (iVar1 == 10) {
      if (*(int *)(param_1 + 0x74) != 1) {
        if (*(int *)(param_1 + 0x74) != 2) {
          return;
        }
        goto LAB_007f5183;
      }
      *(undefined4 *)(param_1 + 0x2f8) = 0;
      *(undefined4 *)(param_1 + 0x2f4) = 2;
    }
    else if (iVar1 == 0xb) {
      if (*(int *)(param_1 + 0x300) != 0) {
        pcVar3 = local_174;
        for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
          pcVar3 = pcVar3 + 4;
        }
        iVar1 = param_1 + 0xb4;
        _sprintf(local_174,"%s/%s",param_1 + 0x18c,iVar1);
        FUN_007f43e4(local_174);
        pcVar3 = local_174;
        for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
          pcVar3 = pcVar3 + 4;
        }
        _sprintf(local_174,"%s/%s/%s",param_1 + 0x18c,iVar1,iVar1);
        *(undefined1 *)(param_1 + 0x84) = 0;
        iVar1 = __open(local_174,0x8301,0x180);
        *(int *)(param_1 + 0x108) = iVar1;
        if (iVar1 == -1) {
          *(undefined4 *)(param_1 + 0x2f4) = 1;
          *(undefined4 *)(param_1 + 0x2f8) = 7;
        }
        else {
          iVar1 = __write(iVar1,(void *)(param_1 + 0x10c),0x1c);
          if (iVar1 != 0x1c) {
            *(undefined4 *)(param_1 + 0x2f4) = 1;
            *(undefined4 *)(param_1 + 0x2f8) = 7;
          }
          if ((((*(uint *)(param_1 + 0x114) != 0) && (*(void **)(param_1 + 0x128) != (void *)0x0))
              && (*(int *)(param_1 + 0x2f4) != 1)) &&
             (iVar1 = __write(*(int *)(param_1 + 0x108),*(void **)(param_1 + 0x128),
                              *(uint *)(param_1 + 0x114)), *(int *)(param_1 + 0x114) != iVar1)) {
            *(int *)(param_1 + 0x2f4) = 1;
            *(undefined4 *)(param_1 + 0x2f8) = 7;
          }
          if (((*(uint *)(param_1 + 0x118) != 0) && (*(void **)(param_1 + 300) != (void *)0x0)) &&
             ((*(int *)(param_1 + 0x2f4) != 1 &&
              (iVar1 = __write(*(int *)(param_1 + 0x108),*(void **)(param_1 + 300),
                               *(uint *)(param_1 + 0x118)), *(int *)(param_1 + 0x118) != iVar1)))) {
            *(int *)(param_1 + 0x2f4) = 1;
            *(undefined4 *)(param_1 + 0x2f8) = 7;
          }
          __close(*(int *)(param_1 + 0x108));
          *(undefined4 *)(param_1 + 0x108) = 0;
          *(undefined4 *)(param_1 + 0x2f4) = 0;
          *(undefined4 *)(param_1 + 0x2f8) = 0;
        }
        *(undefined1 *)(param_1 + 0x84) = 1;
        *(undefined4 *)(param_1 + 0x70) = 0xc;
        return;
      }
      *(undefined4 *)(param_1 + 0x2f4) = 0;
      *(undefined4 *)(param_1 + 0x2f8) = 0;
    }
    else {
      if (iVar1 == 0xc) {
        FUN_007f5ac3();
        if (*(int *)(param_1 + 0x2f4) == 0) {
          FUN_007f5a37(8,5);
        }
        else if (*(int *)(param_1 + 0x2f4) == 1) {
          FUN_007f5a71(9,DAT_009bb548,5);
        }
        *(undefined4 *)(param_1 + 0x74) = 0;
        FUN_007f4b97(local_6c);
        *(undefined4 *)(param_1 + 0x70) = 0xd;
        return;
      }
      if (iVar1 != 0xd) {
        if (iVar1 != 0xe) {
          return;
        }
        *(undefined4 *)(param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0x70) = 0;
        DAT_009bb548 = 0;
        FUN_007f5c07();
        FUN_007f66a8(*(undefined4 *)(param_1 + 0x2f4),*(undefined4 *)(param_1 + 0x2f8),
                     param_1 + 0xb4);
        return;
      }
      if (*(int *)(param_1 + 0x74) != 1) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x70) = 0xe;
  }
  return;
}

