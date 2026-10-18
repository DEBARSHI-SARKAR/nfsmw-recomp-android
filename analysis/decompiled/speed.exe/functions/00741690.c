/* speed.exe 00741690 FUN_00741690; analysis pseudocode, not buildable source.
 * calls 00581bf0 FUN_00581bf0
 * calls 0078a4f0 FUN_0078a4f0
 * calls 0056dbe0 FUN_0056dbe0
 * calls 0056f100 FUN_0056f100
 * calls 00454640 FUN_00454640
 * calls 0078a310 FUN_0078a310
 * calls 0078a4b0 FUN_0078a4b0
 * calls 0056ecc0 FUN_0056ecc0
 */

void __thiscall FUN_00741690(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)(param_1 + 8 + param_2 * 4);
  FUN_0078a4f0(iVar1 + 0x1156);
  *(undefined1 *)(iVar1 + 0xfa8) = 0;
  if (((DAT_00926064 == 0) || (PTR_s_bmwm3gtre46_008f86a8 == (undefined *)0x0)) ||
     (puVar3 = PTR_s_bmwm3gtre46_008f86a8, *PTR_s_bmwm3gtre46_008f86a8 == '\0')) {
    iVar2 = FUN_0056dbe0(0xb);
    iVar2 = FUN_0056ecc0(*(undefined4 *)(iVar2 + 0x10));
    puVar3 = (undefined *)FUN_00581bf0();
    puVar4 = (undefined4 *)FUN_0056f100(*(undefined1 *)(iVar2 + 0x10));
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined1 *)(iVar1 + 0xfa8) = 1;
      puVar6 = (undefined4 *)(iVar1 + 0xfac);
      for (iVar2 = 0x66; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
    }
  }
  uVar5 = FUN_00454640(puVar3);
  *(undefined4 *)(iVar1 + 0xfa4) = uVar5;
  FUN_0078a4b0((undefined4 *)(iVar1 + 0xfa4),4);
  FUN_0078a310(*(undefined1 *)(iVar1 + 0xfa8),1);
  if (*(char *)(iVar1 + 0xfa8) != '\0') {
    FUN_0078a4b0(iVar1 + 0xfac,0x198);
  }
  return;
}

