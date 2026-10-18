/* speed.exe 006c2e60 FUN_006c2e60; analysis pseudocode, not buildable source.
 * calls 006c2aa0 FUN_006c2aa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c2e60(void)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  DAT_008f9adc = DAT_00982be4;
  DAT_008f9ae0 = DAT_00982be8;
  if (((((DAT_009017dc == 0) && (DAT_00901800 == 0)) && (DAT_009017f0 == 0)) &&
      ((DAT_00901810 == 0 && (DAT_00901828 == 0)))) && (DAT_009017d0 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((DAT_009017e0 != 0) || (bVar3 = false, DAT_009017fc != 0)) {
    bVar3 = true;
  }
  DAT_0093de60 = 0;
  DAT_0093def8 = 0;
  DAT_0093de64 = 0;
  DAT_0093defc = 0;
  if (bVar2) {
    iVar5 = 0;
    do {
      iVar4 = (**(code **)(*DAT_00982bdc + 0x5c))
                        (DAT_00982bdc,DAT_008f9adc,DAT_008f9ae0,1,1,DAT_008f9ad8,0,
                         (undefined4 *)((int)&DAT_0093def8 + iVar5),0);
      if (iVar4 != 0) {
LAB_006c2f7a:
        iVar5 = 0;
        do {
          piVar1 = *(int **)((int)&DAT_0093de60 + iVar5);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)((int)&DAT_0093de60 + iVar5) = 0;
          }
          piVar1 = *(int **)((int)&DAT_0093def8 + iVar5);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)((int)&DAT_0093def8 + iVar5) = 0;
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 < 8);
        DAT_00901810 = 0;
        DAT_009017f0 = 0;
        DAT_00901800 = 0;
        DAT_009017dc = 0;
        DAT_00901898 = 0;
        DAT_00901878 = 0;
        DAT_00901888 = 0;
        DAT_00901864 = 0;
        break;
      }
      piVar1 = *(int **)((int)&DAT_0093def8 + iVar5);
      iVar4 = (**(code **)(*piVar1 + 0x48))(piVar1,0,(undefined4 *)((int)&DAT_0093de60 + iVar5));
      if (iVar4 != 0) goto LAB_006c2f7a;
      (**(code **)(*DAT_00982bdc + 0x94))
                (DAT_00982bdc,0,*(undefined4 *)((int)&DAT_0093de60 + iVar5));
      (**(code **)(*DAT_00982bdc + 0x9c))(DAT_00982bdc,0);
      (**(code **)(*DAT_00982bdc + 0xac))(DAT_00982bdc,0,0,1,0,0,0);
      iVar5 = iVar5 + 4;
    } while (iVar5 < 8);
  }
  DAT_0093e7bc = (int *)0x0;
  DAT_00982960 = (int *)0x0;
  DAT_0093e7b8 = (int *)0x0;
  if (bVar3) {
    iVar5 = (**(code **)(*DAT_00982bdc + 0x5c))
                      (DAT_00982bdc,DAT_00982be4,DAT_00982be8,1,1,DAT_008f9ae8,0,&DAT_0093e7bc,0);
    if (iVar5 == 0) {
      iVar5 = (**(code **)(*DAT_0093e7bc + 0x48))(DAT_0093e7bc,0,&DAT_00982960);
      if (iVar5 == 0) {
        (**(code **)(*DAT_00982bdc + 0x94))(DAT_00982bdc,0,DAT_00982960);
        (**(code **)(*DAT_00982bdc + 0x9c))(DAT_00982bdc,0);
        (**(code **)(*DAT_00982bdc + 0xac))(DAT_00982bdc,0,0,1,0,0,0);
      }
      if (DAT_00901808 < 1) {
        DAT_0093e7b8 = (int *)0x0;
      }
      else {
        iVar5 = (**(code **)(*DAT_00982bdc + 0x70))
                          (DAT_00982bdc,DAT_00982be4,DAT_00982be8,DAT_008f9ae8,1,DAT_00901808,0,
                           &DAT_0093e7b8,0);
      }
      if (iVar5 == 0) goto LAB_006c311d;
    }
    if (DAT_00982960 != (int *)0x0) {
      (**(code **)(*DAT_00982960 + 8))(DAT_00982960);
      DAT_00982960 = (int *)0x0;
    }
    if (DAT_0093e7bc != (int *)0x0) {
      (**(code **)(*DAT_0093e7bc + 8))(DAT_0093e7bc);
      DAT_0093e7bc = (int *)0x0;
    }
    if (DAT_0093e7b8 != (int *)0x0) {
      (**(code **)(*DAT_0093e7b8 + 8))(DAT_0093e7b8);
      DAT_0093e7b8 = (int *)0x0;
    }
    DAT_009017fc = 0;
    DAT_009017e0 = 0;
    DAT_00901884 = 0;
    DAT_00901868 = 0;
  }
LAB_006c311d:
  DAT_0093e81c = (int)(DAT_00982be8 + (DAT_00982be8 >> 0x1f & 3U)) >> 2;
  _DAT_0093caec = (int)(DAT_00982be4 + (DAT_00982be4 >> 0x1f & 0x1fU)) >> 5;
  DAT_0093cae0 = (int)(DAT_00982be4 + (DAT_00982be4 >> 0x1f & 3U)) >> 2;
  _DAT_0093e828 = (int)(DAT_00982be8 + (DAT_00982be8 >> 0x1f & 0x1fU)) >> 5;
  DAT_00982990 = 0;
  DAT_00982964 = 0;
  DAT_00982994 = 0;
  DAT_00982968 = 0;
  DAT_00982998 = 0;
  DAT_0098296c = 0;
  DAT_0098299c = 0;
  DAT_00982970 = 0;
  iVar5 = 0;
  DAT_0093cae4 = DAT_0093cae0;
  _DAT_0093cae8 = DAT_0093cae0;
  DAT_0093e820 = DAT_0093e81c;
  _DAT_0093e824 = DAT_0093e81c;
  while( true ) {
    iVar4 = (**(code **)(*DAT_00982bdc + 0x5c))
                      (DAT_00982bdc,*(undefined4 *)((int)&DAT_0093cae0 + iVar5),
                       *(undefined4 *)((int)&DAT_0093e81c + iVar5),1,1,DAT_008f9ad8,0,
                       (undefined4 *)((int)&DAT_00982964 + iVar5),0);
    if (iVar4 != 0) break;
    piVar1 = *(int **)((int)&DAT_00982964 + iVar5);
    iVar4 = (**(code **)(*piVar1 + 0x48))(piVar1,0,(undefined4 *)((int)&DAT_00982990 + iVar5));
    if (iVar4 != 0) break;
    (**(code **)(*DAT_00982bdc + 0x94))(DAT_00982bdc,0,*(undefined4 *)((int)&DAT_00982990 + iVar5));
    (**(code **)(*DAT_00982bdc + 0x9c))(DAT_00982bdc,0);
    (**(code **)(*DAT_00982bdc + 0xac))(DAT_00982bdc,0,0,1,0,0,0);
    iVar5 = iVar5 + 4;
    if (0xf < iVar5) goto LAB_006c329c;
  }
  iVar5 = 0;
  do {
    piVar1 = *(int **)((int)&DAT_00982990 + iVar5);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)&DAT_00982990 + iVar5) = 0;
    }
    piVar1 = *(int **)((int)&DAT_00982964 + iVar5);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)&DAT_00982964 + iVar5) = 0;
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x10);
  DAT_009017f0 = 0;
  DAT_009017fc = 0;
  DAT_00901878 = 0;
  DAT_00901884 = 0;
LAB_006c329c:
  FUN_006c2aa0();
  if (DAT_00988540 == '\0') {
    DAT_00988540 = '\x01';
    (**(code **)(*DAT_00982bdc + 0x5c))
              (DAT_00982bdc,DAT_008f9af0,DAT_008f9af0,1,0,DAT_008f9aec,1,&DAT_0098298c,0);
    (**(code **)(*DAT_00982bdc + 0x5c))
              (DAT_00982bdc,1,DAT_008f9af8,1,0,DAT_008f9aec,1,&DAT_0093e870,0);
    (**(code **)(*DAT_00982bdc + 0x5c))
              (DAT_00982bdc,DAT_008f9b00,2,1,0,DAT_008f9afc,1,&DAT_0093d06c,0);
    (**(code **)(*DAT_00982bdc + 0x5c))
              (DAT_00982bdc,DAT_008f9b08,1,1,0,DAT_008f9b04,1,&DAT_00982900,0);
  }
  return;
}

