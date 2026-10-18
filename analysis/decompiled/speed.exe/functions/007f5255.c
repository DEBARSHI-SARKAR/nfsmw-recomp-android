/* speed.exe 007f5255 FUN_007f5255; analysis pseudocode, not buildable source.
 * calls 007f5a37 FUN_007f5a37
 * calls 007f4c98 FUN_007f4c98
 * calls 007f4b97 FUN_007f4b97
 * calls 007d74c0 __close
 * calls 007f5a71 FUN_007f5a71
 * calls 0085e570 __filelength
 * calls 007f66a8 FUN_007f66a8
 * calls 007e4790 __open
 * calls 007db5b0 __read
 * calls 007c6100 _sprintf
 * calls 007f5ac3 FUN_007f5ac3
 * calls 007e3a80 __lseek
 */

void __fastcall FUN_007f5255(int param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  char local_170 [264];
  undefined1 local_68 [100];
  
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 != 0xf) {
    if (iVar2 == 0x10) {
      FUN_007f5ac3();
      if (*(int *)(param_1 + 0x2f4) == 0) {
        FUN_007f5a37(10,5);
      }
      else if (*(int *)(param_1 + 0x2f4) == 1) {
        FUN_007f5a71(0xb,DAT_009bb548,5);
      }
      *(undefined4 *)(param_1 + 0x74) = 0;
      FUN_007f4b97(local_68);
      *(undefined4 *)(param_1 + 0x70) = 0x11;
      return;
    }
    if (iVar2 != 0x11) {
      if (iVar2 != 0x12) {
        return;
      }
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      DAT_009bb548 = 0;
      FUN_007f66a8(*(undefined4 *)(param_1 + 0x2f4),*(undefined4 *)(param_1 + 0x2f8),param_1 + 0xb4)
      ;
      return;
    }
    if (*(int *)(param_1 + 0x74) != 1) {
      return;
    }
    *(undefined4 *)(param_1 + 0x70) = 0x12;
    return;
  }
  _sprintf(local_170,"%s/%s/%s",param_1 + 0x18c,param_1 + 0x14c,param_1 + 0xb4);
  iVar2 = __open(local_170,0x8000,0x180);
  *(int *)(param_1 + 0x108) = iVar2;
  if (iVar2 == -1) {
    *(undefined4 *)(param_1 + 0x2f8) = 9;
LAB_007f55c2:
    *(undefined4 *)(param_1 + 0x2f4) = 1;
  }
  else {
    lVar3 = __filelength(iVar2);
    *(long *)(param_1 + 0xd4) = lVar3;
    if (lVar3 == -1) {
      *(undefined4 *)(param_1 + 0x2f4) = 1;
      *(undefined4 *)(param_1 + 0x2f8) = 7;
    }
    if (*(int *)(param_1 + 0x134) == 0) {
      if ((*(int *)(param_1 + 0x2f4) == 1) ||
         (iVar2 = __read(*(int *)(param_1 + 0x108),(void *)(param_1 + 0x10c),0x1c), iVar2 == 0x1c))
      {
        if ((*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0xd4)) ||
           ((*(int *)(param_1 + 0x10c) != 0x4d433032 ||
            (iVar2 = FUN_007f4c98((int *)(param_1 + 0x10c),0x18), *(int *)(param_1 + 0x124) != iVar2
            )))) {
          *(undefined4 *)(param_1 + 0x2f8) = 8;
          goto LAB_007f53f9;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x2f8) = 7;
LAB_007f53f9:
        *(undefined4 *)(param_1 + 0x2f4) = 1;
      }
      piVar1 = (int *)(param_1 + 0x128);
      if ((*piVar1 == 0) && (*(int *)(param_1 + 300) == 0)) {
        uVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 0x14))
                          (param_1 + 0xb4,*(undefined4 *)(param_1 + 0x114),
                           *(undefined4 *)(param_1 + 0x118),piVar1,(int *)(param_1 + 300));
        *(undefined4 *)(param_1 + 0x138) = uVar4;
      }
      if (*(int *)(param_1 + 0x138) == 1) {
        *(undefined4 *)(param_1 + 0x2f4) = 1;
        *(undefined4 *)(param_1 + 0x2f8) = 8;
      }
      if (*(int *)(param_1 + 0x2f4) != 1) {
        if (((*(uint *)(param_1 + 0x114) != 0) && ((void *)*piVar1 != (void *)0x0)) &&
           (iVar2 = __read(*(int *)(param_1 + 0x108),(void *)*piVar1,*(uint *)(param_1 + 0x114)),
           *(int *)(param_1 + 0x114) != iVar2)) {
          *(undefined4 *)(param_1 + 0x2f4) = 1;
          *(undefined4 *)(param_1 + 0x2f8) = 7;
        }
        if (((*(int *)(param_1 + 0x2f4) != 1) && (*(int *)(param_1 + 0x118) != 0)) &&
           (*(int *)(param_1 + 300) != 0)) {
          if ((*piVar1 == 0) &&
             (lVar3 = __lseek(*(int *)(param_1 + 0x108),*(long *)(param_1 + 0x114),1),
             *(long *)(param_1 + 0x114) + 0x1c != lVar3)) {
            *(undefined4 *)(param_1 + 0x2f4) = 1;
            *(undefined4 *)(param_1 + 0x2f8) = 7;
          }
          if ((*(int *)(param_1 + 0x2f4) != 1) &&
             (iVar2 = __read(*(int *)(param_1 + 0x108),*(void **)(param_1 + 300),
                             *(uint *)(param_1 + 0x118)), *(int *)(param_1 + 0x118) != iVar2)) {
            *(undefined4 *)(param_1 + 0x2f4) = 1;
            *(undefined4 *)(param_1 + 0x2f8) = 7;
          }
        }
      }
      __close(*(int *)(param_1 + 0x108));
      *(undefined4 *)(param_1 + 0x108) = 0;
    }
    else {
      if (*(int *)(param_1 + 300) == 0) {
        uVar4 = (**(code **)(**(int **)(param_1 + 0x10) + 0x14))
                          (param_1 + 0xb4,0,lVar3,param_1 + 0x128,(int *)(param_1 + 300));
        *(undefined4 *)(param_1 + 0x138) = uVar4;
      }
      if (*(int *)(param_1 + 0x138) == 1) {
        *(undefined4 *)(param_1 + 0x2f4) = 1;
        *(undefined4 *)(param_1 + 0x2f8) = 8;
      }
      if (*(int *)(param_1 + 0x2f4) == 1) goto LAB_007f56ae;
      iVar2 = __read(*(int *)(param_1 + 0x108),*(void **)(param_1 + 300),*(uint *)(param_1 + 0xd4));
      if (*(int *)(param_1 + 0xd4) != iVar2) {
        *(undefined4 *)(param_1 + 0x2f8) = 7;
        goto LAB_007f55c2;
      }
    }
  }
  if (*(int *)(param_1 + 0x2f4) == 1) goto LAB_007f56ae;
  if (*(int *)(param_1 + 0x134) == 0) {
    if (((*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0xd4)) &&
        (*(int *)(param_1 + 0x10c) == 0x4d433032)) &&
       (iVar2 = FUN_007f4c98((int *)(param_1 + 0x10c),0x18), *(int *)(param_1 + 0x124) == iVar2)) {
      if ((*(int *)(param_1 + 0x128) != 0) &&
         (iVar2 = FUN_007f4c98(*(int *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x114)),
         *(int *)(param_1 + 0x11c) != iVar2)) {
        *(undefined4 *)(param_1 + 0x2f4) = 1;
        *(undefined4 *)(param_1 + 0x2f8) = 8;
      }
      if ((*(int *)(param_1 + 300) != 0) &&
         (iVar2 = FUN_007f4c98(*(int *)(param_1 + 300),*(undefined4 *)(param_1 + 0x118)),
         *(int *)(param_1 + 0x120) != iVar2)) {
        *(undefined4 *)(param_1 + 0x2f4) = 1;
        *(undefined4 *)(param_1 + 0x2f8) = 8;
      }
LAB_007f5690:
      *(undefined4 *)(param_1 + 0x2f4) = 0;
      *(undefined4 *)(param_1 + 0x2f8) = 0;
      goto LAB_007f56ae;
    }
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(*(undefined4 *)(param_1 + 300));
    if (iVar2 == 0) goto LAB_007f5690;
  }
  *(undefined4 *)(param_1 + 0x2f4) = 1;
  *(undefined4 *)(param_1 + 0x2f8) = 8;
LAB_007f56ae:
  *(undefined4 *)(param_1 + 0x70) = 0x10;
  return;
}

