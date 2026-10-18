/* speed.exe 006bfdd0 FUN_006bfdd0; analysis pseudocode, not buildable source.
 * calls 00731b80 FUN_00731b80
 * calls 004fae40 FUN_004fae40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006bfdd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(param_1 + 0x9c0) = 0;
  if ((DAT_008f9330 != 0) && (DAT_00925e90 == 6)) {
    iVar3 = 1;
    puVar4 = &DAT_00919650;
    do {
      if ((*(char *)(puVar4 + 2) != '\0') && (*(int *)(puVar4[0x18] + 0x10) != 0)) {
        iVar1 = *(int *)(param_1 + 0x9c0);
        *(int *)(param_1 + 0x9c0) = iVar1 + 1;
        if ((puVar4 == (undefined4 *)&DAT_00919730) || (DAT_00982af4 != 0)) {
          iVar2 = 0x1000;
        }
        else {
          iVar2 = ((iVar3 != 3) - 1 & 0xffffc000) + 0x6000;
        }
        FUN_004fae40(puVar4,iVar1 * 0xd0 + param_1,iVar2);
      }
      puVar4 = puVar4 + 0x1c;
      iVar3 = iVar3 + 1;
    } while ((int)puVar4 < 0x919731);
    if (DAT_009017b8 != 0) {
      puVar5 = &DAT_00919dc0;
      do {
        if ((puVar5[8] != '\0') && (*(int *)(*(int *)(puVar5 + 0x60) + 0x10) != 0)) {
          iVar3 = *(int *)(param_1 + 0x9c0);
          *(int *)(param_1 + 0x9c0) = iVar3 + 1;
          if (DAT_00901830 < 2) {
            uVar6 = 0x1100;
          }
          else {
            uVar6 = 0x1000;
          }
          FUN_004fae40(puVar5,iVar3 * 0xd0 + param_1,uVar6);
        }
        puVar5 = puVar5 + 0x70;
      } while ((int)puVar5 < 0x919ff1);
    }
    if ((((DAT_009017d4 != 0) && (_DAT_00890dc4 < *(float *)(DAT_009196b8 + 0x36a0))) &&
        (DAT_009197a8 != '\0')) && (*(int *)(DAT_00919800 + 0x10) != 0)) {
      iVar3 = *(int *)(param_1 + 0x9c0);
      *(int *)(param_1 + 0x9c0) = iVar3 + 1;
      FUN_004fae40(&DAT_009197a0,iVar3 * 0xd0 + param_1,0x800);
    }
    if ((DAT_009017c4 != 0) && (DAT_00919968 != '\0')) {
      iVar3 = *(int *)(param_1 + 0x9c0);
      *(int *)(param_1 + 0x9c0) = iVar3 + 1;
      FUN_004fae40(&DAT_00919960,iVar3 * 0xd0 + param_1,0);
    }
    if (((0 < DAT_00901830) && (DAT_00919c78 != '\0')) && (*(int *)(DAT_00919cd0 + 0x10) != 0)) {
      iVar3 = *(int *)(param_1 + 0x9c0);
      *(int *)(param_1 + 0x9c0) = iVar3 + 1;
      FUN_004fae40(&DAT_00919c70,iVar3 * 0xd0 + param_1,0x4100);
    }
  }
  FUN_00731b80();
  return;
}

