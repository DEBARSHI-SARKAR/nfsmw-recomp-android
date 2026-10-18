/* speed.exe 006bd4b0 FUN_006bd4b0; analysis pseudocode, not buildable source.
 */

void FUN_006bd4b0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  DAT_00982a30 = (int *)0x0;
  iVar2 = 0;
  do {
    if (*(int *)((int)&DAT_00982a34 + iVar2) != 0) {
      *(undefined4 *)((int)&DAT_00982a34 + iVar2) = 0;
    }
    if (*(int *)((int)&DAT_00982a4c + iVar2) != 0) {
      *(undefined4 *)((int)&DAT_00982a4c + iVar2) = 0;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x18);
  DAT_00982a64 = 0;
  if (DAT_008f945b == '\0') {
    DAT_00982a64 = 0;
    DAT_00982bac = 1;
    return;
  }
  uVar5 = 0x10;
  if (DAT_009017b8 != 0) {
    uVar5 = DAT_008f8ff4;
  }
  iVar2 = (**(code **)(*DAT_00982bdc + 100))
                    (DAT_00982bdc,DAT_008f8ff4,1,0,DAT_008f8ff8,1,&DAT_00982a64,0);
  if ((iVar2 == 0) &&
     (iVar2 = (**(code **)(*DAT_00982bdc + 100))
                        (DAT_00982bdc,uVar5,1,1,DAT_008f8ff8,0,&DAT_00982a30,0), iVar2 == 0)) {
    iVar2 = 0;
    do {
      iVar3 = (**(code **)(*DAT_00982a30 + 0x48))(DAT_00982a30,iVar2,0,&DAT_00982a34 + iVar2);
      if (iVar3 == 0) {
        (**(code **)(*DAT_00982a30 + 8))(DAT_00982a30);
        iVar4 = (**(code **)(*DAT_00982bdc + 0x74))
                          (DAT_00982bdc,uVar5,uVar5,DAT_008f8ffc,0,0,0,&DAT_00982a4c + iVar2,0);
        iVar3 = 0;
        if (iVar4 != 0) goto LAB_006bd5a3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    if (iVar3 == 0) {
      DAT_00982bac = 1;
      return;
    }
  }
LAB_006bd5a3:
  DAT_008f945b = 0;
  DAT_009017b8 = 0;
  DAT_00901840 = 0;
  if (DAT_00982a30 != (int *)0x0) {
    (**(code **)(*DAT_00982a30 + 8))(DAT_00982a30);
    DAT_00982a30 = (int *)0x0;
  }
  iVar2 = 0;
  do {
    if (*(int *)((int)&DAT_00982a34 + iVar2) != 0) {
      *(undefined4 *)((int)&DAT_00982a34 + iVar2) = 0;
    }
    piVar1 = *(int **)((int)&DAT_00982a4c + iVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)&DAT_00982a4c + iVar2) = 0;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x18);
  return;
}

