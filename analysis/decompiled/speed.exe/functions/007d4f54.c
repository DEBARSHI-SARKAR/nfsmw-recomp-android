/* speed.exe 007d4f54 FUN_007d4f54; analysis pseudocode, not buildable source.
 * calls 007d5018 FUN_007d5018
 * calls 007d4a70 __callnewh
 * calls EXTERNAL:00000077 HeapReAlloc
 */

void FUN_007d4f54(void)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  int iVar3;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      *(undefined4 *)(unaff_EBP + 0xc) = 1;
    }
    *(uint *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0xfU & 0xfffffff0;
    pvVar2 = HeapReAlloc(DAT_009c5318,0,*(LPVOID *)(unaff_EBP + 8),*(SIZE_T *)(unaff_EBP + 0xc));
    *(LPVOID *)(unaff_EBP + -0x1c) = pvVar2;
  }
  do {
    if ((*(int *)(unaff_EBP + -0x1c) != 0) || (DAT_009bad8c == 0)) {
      FUN_007d5018();
      return;
    }
    iVar3 = __callnewh(*(size_t *)(unaff_EBP + 0xc));
    if (iVar3 == 0) {
      FUN_007d5018();
      return;
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  } while (0xffffffe0 < *(uint *)(unaff_EBP + 0xc));
  __lock(4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = ___sbh_find_block(*(undefined4 *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    if (*(uint *)(unaff_EBP + 0xc) <= DAT_009c52f0) {
      iVar3 = ___sbh_resize_block(*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + 8),
                                  *(undefined4 *)(unaff_EBP + 0xc));
      if (iVar3 == 0) {
        uVar1 = ___sbh_alloc_block(*(undefined4 *)(unaff_EBP + 0xc));
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          *(int *)(unaff_EBP + -0x24) = *(int *)(*(int *)(unaff_EBP + 8) + -4) + -1;
          if (*(uint *)(unaff_EBP + -0x24) < *(uint *)(unaff_EBP + 0xc)) {
            *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x24);
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + 0xc);
          }
          FID_conflict__memcpy
                    (*(void **)(unaff_EBP + -0x1c),*(void **)(unaff_EBP + 8),
                     *(size_t *)(unaff_EBP + -0x2c));
          uVar1 = ___sbh_find_block(*(undefined4 *)(unaff_EBP + 8));
          *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
          ___sbh_free_block(*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + 8));
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 8);
      }
    }
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        *(undefined4 *)(unaff_EBP + 0xc) = 1;
      }
      *(uint *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0xfU & 0xfffffff0;
      pvVar2 = HeapAlloc(DAT_009c5318,0,*(SIZE_T *)(unaff_EBP + 0xc));
      *(LPVOID *)(unaff_EBP + -0x1c) = pvVar2;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        *(int *)(unaff_EBP + -0x24) = *(int *)(*(int *)(unaff_EBP + 8) + -4) + -1;
        if (*(uint *)(unaff_EBP + -0x24) < *(uint *)(unaff_EBP + 0xc)) {
          *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x24);
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + 0xc);
        }
        FID_conflict__memcpy
                  (*(void **)(unaff_EBP + -0x1c),*(void **)(unaff_EBP + 8),
                   *(size_t *)(unaff_EBP + -0x30));
        ___sbh_free_block(*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + 8));
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_007d4f49();
  FUN_007d4f54();
  return;
}

