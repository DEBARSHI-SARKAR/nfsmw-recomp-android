/* speed.exe 00829d20 FUN_00829d20; analysis pseudocode, not buildable source.
 * calls 00834e6d FUN_00834e6d
 * calls 00829c50 FUN_00829c50
 * calls 0082e390 FUN_0082e390
 * calls 00834ec8 FUN_00834ec8
 */

uint FUN_00829d20(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint local_10;
  uint local_c;
  int local_8;
  
  if ((DAT_009c2974 != '\0') || (FUN_00829c50(), DAT_009c2974 != '\0')) {
    local_10 = 0;
    iVar3 = FUN_00834e6d(&local_10);
    if (iVar3 == 0) {
      local_c = (uint)*(byte *)(param_1 + 3);
      local_8 = 0;
      iVar3 = 4;
      local_10 = 0xffffffff;
      iVar5 = 0;
      do {
        if ((&DAT_009c2954)[iVar5] == 0) {
          if (iVar3 == 4) {
            iVar3 = iVar5;
          }
        }
        else {
          iVar1 = *(int *)((&DAT_009c2954)[iVar5] + 0x18);
          if (*(byte *)(iVar1 + 0xc) == local_c) {
            if (*(short *)((int)param_1 + 10) != *(short *)(iVar1 + 10)) goto LAB_00829f38;
            local_8 = local_8 + 1;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
      if ((((iVar3 < 4) && (*param_1 == 0x50464478)) && ((char)param_1[1] == '\x05')) &&
         (*(char *)((int)param_1 + 5) == '\x01')) {
        if (DAT_009c2988 == (code *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = (undefined4 *)(*DAT_009c2988)(0x1104);
        }
        uVar2 = local_c;
        (&DAT_009c2954)[iVar3] = puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          for (iVar5 = 0x441; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          *(int **)((&DAT_009c2954)[iVar3] + 0x18) = param_1;
          *(int *)((&DAT_009c2954)[iVar3] + 0x14) =
               0x10000000 << ((byte)local_8 & 0x1f) | 0x1000000 << ((byte)local_c & 0x1f);
          FUN_0082e390(iVar3,*(undefined4 *)((&DAT_009c2954)[iVar3] + 0x14));
          *(int *)(DAT_009c2964 + 0x1c) =
               *(int *)(*(int *)(DAT_009c2964 + 0x18) + 0x14) + (int)param_1;
          *(int *)(DAT_009c2964 + 0x20) =
               *(int *)(*(int *)(DAT_009c2964 + 0x18) + 0x18) + (int)param_1;
          *(int *)(DAT_009c2964 + 0x24) =
               *(int *)(*(int *)(DAT_009c2964 + 0x18) + 0x1c) + (int)param_1;
          *(int *)(DAT_009c2964 + 0x28) =
               *(int *)(*(int *)(DAT_009c2964 + 0x18) + 0x20) + (int)param_1;
          *(int *)(DAT_009c2964 + 0x2c) =
               *(int *)(*(int *)(DAT_009c2964 + 0x18) + 0x24) + (int)param_1;
          *(int *)(DAT_009c2964 + 0x30) =
               *(int *)(*(int *)(DAT_009c2964 + 0x18) + 0x28) + (int)param_1;
          *(int *)(DAT_009c2964 + 0x34) =
               *(int *)(*(int *)(DAT_009c2964 + 0x18) + 0x2c) + (int)param_1;
          *(int *)(DAT_009c2964 + 0x38) =
               *(int *)(*(int *)(DAT_009c2964 + 0x18) + 0x30) + (int)param_1;
          *(int *)(DAT_009c2964 + 0x3c) =
               *(int *)(*(int *)(DAT_009c2964 + 0x18) + 0x34) + (int)param_1;
          iVar3 = 0xc0;
          do {
            *(undefined4 *)(iVar3 + DAT_009c2964) = 0;
            iVar3 = iVar3 + 4;
          } while (iVar3 < 0x100);
          *(undefined4 *)(DAT_009c2964 + 0xc) = 0x32;
          *(undefined4 *)(DAT_009c2964 + 0x10) = 10;
          local_10 = uVar2;
        }
      }
LAB_00829f38:
      DAT_009c2964 = 0;
      FUN_00834ec8(1);
      return local_10;
    }
  }
  return 0xffffffee;
}

