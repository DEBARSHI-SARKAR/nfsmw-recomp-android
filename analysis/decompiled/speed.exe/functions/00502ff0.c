/* speed.exe 00502ff0 FUN_00502ff0; analysis pseudocode, not buildable source.
 * calls 004fb210 FUN_004fb210
 * calls 006bede0 FUN_006bede0
 */

void __fastcall FUN_00502ff0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x14);
  if (0 < local_8) {
    piVar5 = (int *)(*(int *)(param_1 + 0xc) + 0x1c);
    do {
      local_c = *piVar5;
      iVar3 = 1;
      if (0 < local_c) {
        puVar4 = (undefined4 *)(piVar5[3] + 8);
        do {
          if ((((((&DAT_0091a0dc)[puVar4[-2] & 0x1fff] == '\0') ||
                (iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x14), iVar1 == 0)) ||
               (iVar1 = *(int *)(iVar1 + 0x74), iVar1 == 0)) ||
              ((iVar1 = FUN_004fb210(puVar4[-2],iVar1,*(undefined4 *)(*(int *)(param_1 + 8) + 0x18),
                                     0,8), iVar1 == 0 || (iVar1 = *(int *)(iVar1 + 4), iVar1 == 0)))
              ) || ((*(int *)(iVar1 + 0x70) == 0 ||
                    ((*(int *)(iVar1 + 0x3c) != 0 && (*(int *)(iVar1 + 0x74) == 0)))))) {
            puVar4[-1] = 0;
            *puVar4 = 0;
            iVar3 = 0;
          }
          else {
            puVar4[-1] = iVar1;
            uVar2 = FUN_006bede0();
            *puVar4 = uVar2;
          }
          puVar4 = puVar4 + 4;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      piVar5[4] = iVar3;
      piVar5[5] = 0;
      piVar5 = piVar5 + 0xd;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

