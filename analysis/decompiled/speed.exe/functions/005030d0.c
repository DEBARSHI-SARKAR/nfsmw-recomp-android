/* speed.exe 005030d0 FUN_005030d0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 006bee20 FUN_006bee20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005030d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *local_18;
  int local_14;
  
  if (((DAT_00925e90 == 3) || (DAT_00925970 != _DAT_00890968)) &&
     (local_18 = DAT_0091c160, (undefined4 **)DAT_0091c160 != &DAT_0091c160)) {
    do {
      local_14 = local_18[5];
      if (0 < local_14) {
        iVar4 = local_18[3] + 0x24;
        do {
          if (*(int *)(iVar4 + 8) != 0) {
            iVar1 = *(int *)(iVar4 + -8);
            iVar3 = FUN_007c4b80();
            iVar3 = iVar3 % iVar1;
            if (iVar3 != *(int *)(iVar4 + 0xc)) {
              iVar2 = *(int *)(iVar4 + 4);
              iVar5 = 0;
              *(int *)(iVar4 + 0xc) = iVar3;
              if (0 < iVar1) {
                do {
                  FUN_006bee20(*(undefined4 *)(((iVar5 + iVar3) % iVar1) * 0x10 + 8 + iVar2));
                  iVar5 = iVar5 + 1;
                } while (iVar5 < iVar1);
              }
            }
          }
          iVar4 = iVar4 + 0x34;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      local_18 = (undefined4 *)*local_18;
    } while ((undefined4 **)local_18 != &DAT_0091c160);
  }
  return;
}

