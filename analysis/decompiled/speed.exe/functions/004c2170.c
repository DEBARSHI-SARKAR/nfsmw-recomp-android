/* speed.exe 004c2170 FUN_004c2170; analysis pseudocode, not buildable source.
 * calls 004b2510 FUN_004b2510
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081d0a3 FUN_0081d0a3
 * calls 004b24f0 FUN_004b24f0
 * calls 0081c4d8 FUN_0081c4d8
 * calls 004d9540 FUN_004d9540
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c2170(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_008f86f8 != 0) {
    if (((DAT_008ee5bc != '\0') && (DAT_00911fa8 != 0)) && ((DAT_00911fe8 & 0x1000) == 0)) {
      _DAT_00911fec = DAT_00911fe8;
      DAT_00911fe8 = DAT_00911fe8 | 0x1000;
      uVar3 = 0;
      DAT_00911ff4 = DAT_00911ff0;
      iVar2 = 0;
      do {
        if ((DAT_00911fe8 & 1 << ((byte)iVar2 & 0x1f)) != 0) {
          uVar3 = uVar3 | (&DAT_008ee570)[iVar2];
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x12);
      iVar2 = 0;
      DAT_00911ff0 = uVar3;
      do {
        uVar3 = 1 << ((byte)iVar2 & 0x1f);
        if (((uVar3 & (DAT_00911ff0 ^ DAT_00911ff4)) != 0) &&
           (iVar1 = *(int *)(DAT_00911fa8 + 0x80), iVar1 != 0)) {
          if ((DAT_00911ff0 & uVar3) == 0) {
            if (iVar2 == 0) {
              iVar1 = *(int *)(iVar1 + 0x18);
            }
            else if (iVar2 == 1) {
              iVar1 = *(int *)(iVar1 + 0x14);
            }
            else {
              if (iVar2 != 2) goto LAB_004c2277;
              iVar1 = *(int *)(iVar1 + 0x1c);
            }
            if (iVar1 != 0) {
              FUN_004b2510();
            }
          }
          else {
            if (iVar2 == 0) {
              iVar1 = *(int *)(iVar1 + 0x18);
            }
            else if (iVar2 == 1) {
              iVar1 = *(int *)(iVar1 + 0x14);
            }
            else {
              if (iVar2 != 2) goto LAB_004c2277;
              iVar1 = *(int *)(iVar1 + 0x1c);
            }
            if (iVar1 != 0) {
              FUN_004b24f0();
            }
          }
        }
LAB_004c2277:
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xd);
    }
    iVar2 = 0x14;
    do {
      iVar1 = *(int *)(iVar2 + *(int *)(param_1 + 0x80));
      if (iVar1 != 0) {
        FUN_0081c4d8(*(undefined4 *)(iVar1 + 0x18));
        FUN_0081c4d8(*(undefined4 *)(*(int *)(iVar2 + *(int *)(param_1 + 0x80)) + 0x18));
        iVar1 = *(int *)(iVar2 + *(int *)(param_1 + 0x80));
        FUN_0081bccb();
        FUN_0081d0a3(*(undefined4 *)(iVar1 + 0x18),0x1000);
        FUN_0081bcd9();
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x24);
    if (*(undefined4 **)(param_1 + 0x5c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x5c))(1);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    iVar2 = 0;
    do {
      if (iVar2 == 1) {
        FUN_004d9540();
      }
      else if ((int *)(&DAT_00911f60)[iVar2] != (int *)0x0) {
        (**(code **)(*(int *)(&DAT_00911f60)[iVar2] + 0x18))();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xd);
    DAT_00911fe4 = 1;
    DAT_00911fe5 = param_2;
  }
  return;
}

