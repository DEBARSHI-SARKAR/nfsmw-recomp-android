/* speed.exe 004fee70 FUN_004fee70; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004fee70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_00919690;
  if (DAT_00919690 != 0) {
    uVar1 = *(undefined4 *)(DAT_00919690 + 0x44);
    uVar2 = *(undefined4 *)(DAT_00919690 + 0x48);
    *(undefined4 *)(param_1 + 800) = *(undefined4 *)(DAT_00919690 + 0x40);
    *(undefined4 *)(param_1 + 0x324) = uVar1;
    *(undefined4 *)(param_1 + 0x328) = uVar2;
    uVar1 = *(undefined4 *)(iVar3 + 0x54);
    uVar2 = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(iVar3 + 0x50);
    *(undefined4 *)(param_1 + 0x344) = uVar1;
    *(undefined4 *)(param_1 + 0x348) = uVar2;
  }
  iVar3 = DAT_00919700;
  if (DAT_00919700 != 0) {
    uVar1 = *(undefined4 *)(DAT_00919700 + 0x44);
    uVar2 = *(undefined4 *)(DAT_00919700 + 0x48);
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(DAT_00919700 + 0x40);
    *(undefined4 *)(param_1 + 0x334) = uVar1;
    *(undefined4 *)(param_1 + 0x338) = uVar2;
    uVar1 = *(undefined4 *)(iVar3 + 0x54);
    uVar2 = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(iVar3 + 0x50);
    *(undefined4 *)(param_1 + 0x354) = uVar1;
    *(undefined4 *)(param_1 + 0x358) = uVar2;
  }
  return;
}

