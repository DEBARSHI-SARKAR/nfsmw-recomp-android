/* speed.exe 006cfad0 FUN_006cfad0; analysis pseudocode, not buildable source.
 * calls 00738840 FUN_00738840
 * calls 00595d40 FUN_00595d40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006cfad0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  if (DAT_00982b44 == 0) {
    if (DAT_00982b40 != DAT_00982b3c) {
      DAT_00982b40 = DAT_00982b3c;
    }
  }
  else if (DAT_00982b40 != DAT_00982b44) {
    DAT_00982b40 = DAT_00982b44;
  }
  if (DAT_00982b3c == 1) {
    if (((undefined4 **)DAT_00919694 == &DAT_00919694) || (DAT_00919694 == (undefined4 *)0x0)) {
      _DAT_0093da4c = (undefined4 *)0x0;
    }
    else {
      _DAT_0093da4c = DAT_00919694 + -1;
    }
    if ((((((undefined4 **)DAT_00919694 != &DAT_00919694) && (DAT_00919694 != (undefined4 *)0x0)) &&
         (DAT_00919694 != (undefined4 *)0x4)) &&
        (((undefined4 **)DAT_00919774 != &DAT_00919774 && (DAT_00919774 != (undefined4 *)0x0)))) &&
       (DAT_00919774 != (undefined4 *)0x4)) {
      if (DAT_00919694 == (undefined4 *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = DAT_00919694 + -1;
      }
      cVar4 = (**(code **)(*piVar7 + 0x24))();
      if ((cVar4 == '\0') && (cVar4 = FUN_00595d40(1), cVar4 != '\0')) {
        DAT_00982b3c = 2;
      }
    }
  }
  else if (DAT_00982b3c == 2) {
    if ((((undefined4 **)DAT_00919774 != &DAT_00919774) && (DAT_00919774 != (undefined4 *)0x0)) &&
       (DAT_00919774 != (undefined4 *)0x4)) {
      if (((undefined4 **)DAT_00919694 == &DAT_00919694) || (DAT_00919694 == (undefined4 *)0x0)) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = DAT_00919694 + -1;
      }
      cVar4 = (**(code **)(*piVar7 + 0x24))();
      if ((cVar4 == '\0') && (cVar4 = FUN_00595d40(1), cVar4 != '\0')) goto LAB_006cfbda;
    }
    DAT_00982b3c = 1;
  }
LAB_006cfbda:
  uVar3 = DAT_00982be8;
  iVar2 = DAT_00919800;
  iVar1 = DAT_00919790;
  iVar5 = DAT_009196b0;
  if (DAT_00982b40 == 0) {
    *(undefined4 *)(DAT_009196b0 + 0x10) = 0;
    DAT_00919658 = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    DAT_00919738 = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    DAT_009197a8 = 0;
    DAT_00919968 = 0;
  }
  else {
    if (DAT_00982b40 == 1) {
      *(undefined4 *)(DAT_009196b0 + 0x14) = DAT_00982be4;
      *(undefined4 *)(iVar5 + 0x18) = uVar3;
      *(undefined4 *)(iVar5 + 0x10) = 1;
      DAT_00919658 = 1;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      DAT_00919738 = 0;
    }
    else {
      if (DAT_00982b40 != 2) goto LAB_006cfc88;
      *(undefined4 *)(DAT_009196b0 + 0x14) = DAT_00982be4;
      *(undefined4 *)(iVar5 + 0x18) = uVar3;
      *(undefined4 *)(iVar5 + 0x10) = 1;
      DAT_00919658 = 1;
      *(undefined4 *)(iVar1 + 0x10) = 1;
      DAT_00919738 = 1;
    }
    *(undefined4 *)(iVar2 + 0x14) = 0x140;
    *(undefined4 *)(iVar2 + 0x18) = 0xf0;
    *(undefined4 *)(iVar2 + 0x10) = 1;
    DAT_009197a8 = 1;
    DAT_00919968 = 1;
  }
LAB_006cfc88:
  if (((DAT_00925e90 != 6) && (iVar5 = FUN_00738840(), iVar5 != 0)) &&
     (puVar6 = DAT_009b27ec, (undefined4 **)DAT_009b27ec != &DAT_009b27ec)) {
    do {
      if ((puVar6[0x15f] == 0) && (puVar6[199] == 1)) {
        DAT_00919968 = puVar6[0xc6] != 0;
      }
      puVar6 = (undefined4 *)*puVar6;
    } while ((undefined4 **)puVar6 != &DAT_009b27ec);
  }
  return;
}

