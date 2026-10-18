/* speed.exe 007f56bc FUN_007f56bc; analysis pseudocode, not buildable source.
 * calls 007f5a37 FUN_007f5a37
 * calls 007c64e0 _strncpy
 * calls 007f4137 FUN_007f4137
 * calls 007f4b97 FUN_007f4b97
 * calls 007f5c07 FUN_007f5c07
 * calls 007f5a71 FUN_007f5a71
 * calls 007f66a8 FUN_007f66a8
 * calls 007f4275 FUN_007f4275
 * calls 0085e6b0 FUN_0085e6b0
 * calls 007c6100 _sprintf
 * calls 0085e700 FID_conflict:_remove
 * calls 007f5ac3 FUN_007f5ac3
 */

void __fastcall FUN_007f56bc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char local_37c [260];
  char local_278 [260];
  char local_174 [264];
  undefined1 local_6c [103];
  char local_5;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0x13) {
    FUN_007f5ac3();
    FUN_007f5a71(0xc,DAT_009bb548,0x304);
    FUN_007f4b97(local_6c);
    *(undefined4 *)(param_1 + 0x70) = 0x14;
    return;
  }
  if (iVar1 == 0x14) {
    if (*(int *)(param_1 + 0x74) != 1) {
      if (*(int *)(param_1 + 0x74) != 2) {
        return;
      }
      *(undefined4 *)(param_1 + 0x70) = 0x15;
      return;
    }
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x2f4) = 2;
  }
  else {
    if (iVar1 == 0x15) {
      local_5 = '\0';
      if (*(uint *)(param_1 + 0x148) < *(uint *)(param_1 + 0x144)) {
        do {
          if ((1 < *(uint *)(param_1 + 0x144)) && (*(int *)(param_1 + 0x148) != 0)) {
            puVar2 = (undefined4 *)(param_1 + 0xb4);
            for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar2 = 0;
              puVar2 = puVar2 + 1;
            }
            _strncpy((char *)(param_1 + 0xb4),
                     *(char **)(*(int *)(param_1 + 0x140) + *(int *)(param_1 + 0x148) * 4),0x1f);
          }
          *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
          _sprintf(local_174,"%s/%s/%s",param_1 + 0x18c,param_1 + 0xb4,PTR_DAT_00908240);
          *(undefined1 *)(param_1 + 0x84) = 0;
          FUN_007f4137();
          FUN_007f4275(local_174);
          if (*(int *)(param_1 + 0x2c4) == 9) {
            *(undefined4 *)(param_1 + 0x2f8) = 9;
          }
          else {
            while ((*(int *)(param_1 + 0x2f4) != 1 && (*(int *)(param_1 + 0x2c4) == 0))) {
              if (*(int *)(param_1 + 0x2ec) == 0) {
                _sprintf(local_278,"%s/%s/%s",param_1 + 0x18c,param_1 + 0xb4,
                         *(undefined4 *)(param_1 + 0x2c8));
                iVar1 = FID_conflict__remove(local_278);
                if (iVar1 == 0) {
                  local_5 = '\x01';
                }
                else {
                  *(undefined4 *)(param_1 + 0x2f4) = 1;
                  *(undefined4 *)(param_1 + 0x2f8) = 7;
                }
              }
              FUN_007f4275(local_174);
            }
            if (*(int *)(param_1 + 0x2f4) != 1) {
              _sprintf(local_37c,"%s/%s",param_1 + 0x18c,param_1 + 0xb4);
              iVar1 = FUN_0085e6b0(local_37c);
              if (iVar1 == 0) {
                local_5 = '\x01';
              }
              else {
                *(undefined4 *)(param_1 + 0x2f4) = 1;
                *(undefined4 *)(param_1 + 0x2f8) = 7;
              }
            }
          }
          *(undefined1 *)(param_1 + 0x84) = 1;
        } while (*(uint *)(param_1 + 0x148) < *(uint *)(param_1 + 0x144));
      }
      if (((*(int *)(param_1 + 0x2f4) == 1) || (local_5 == '\0')) &&
         ((*(int *)(param_1 + 0x2f8) != 9 || (local_5 == '\0')))) {
        *(undefined4 *)(param_1 + 0x2f4) = 1;
        *(undefined4 *)(param_1 + 0x2f8) = 9;
      }
      else {
        *(undefined4 *)(param_1 + 0x2f4) = 0;
        *(undefined4 *)(param_1 + 0x2f8) = 0;
      }
      *(undefined4 *)(param_1 + 0x70) = 0x16;
      return;
    }
    if (iVar1 == 0x16) {
      FUN_007f5ac3();
      if (*(int *)(param_1 + 0x2f4) == 0) {
        FUN_007f5a37(0xd,5);
      }
      else if (*(int *)(param_1 + 0x2f4) == 1) {
        FUN_007f5a71(0xe,DAT_009bb548,5);
      }
      *(undefined4 *)(param_1 + 0x74) = 0;
      FUN_007f4b97(local_6c);
      *(undefined4 *)(param_1 + 0x70) = 0x17;
      return;
    }
    if (iVar1 != 0x17) {
      if (iVar1 != 0x18) {
        return;
      }
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      DAT_009bb548 = 0;
      FUN_007f5c07();
      FUN_007f66a8(*(undefined4 *)(param_1 + 0x2f4),*(undefined4 *)(param_1 + 0x2f8),param_1 + 0xb4)
      ;
      return;
    }
    if (*(int *)(param_1 + 0x74) != 1) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 0x18;
  return;
}

